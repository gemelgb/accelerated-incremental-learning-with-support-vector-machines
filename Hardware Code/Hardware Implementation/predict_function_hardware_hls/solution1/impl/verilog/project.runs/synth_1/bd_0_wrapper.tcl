# 
# Synthesis run script generated by Vivado
# 

set TIME_start [clock seconds] 
proc create_report { reportName command } {
  set status "."
  append status $reportName ".fail"
  if { [file exists $status] } {
    eval file delete [glob $status]
  }
  send_msg_id runtcl-4 info "Executing : $command"
  set retval [eval catch { $command } msg]
  if { $retval != 0 } {
    set fp [open $status w]
    close $fp
    send_msg_id runtcl-5 warning "$msg"
  }
}
set_param ips.enableSLRParameter 2
create_project -in_memory -part xc7z020clg400-1

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -source 4 -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir F:/Hardware_Implementation/predict_function_hardware_hls/solution1/impl/verilog/project.cache/wt [current_project]
set_property parent.project_path F:/Hardware_Implementation/predict_function_hardware_hls/solution1/impl/verilog/project.xpr [current_project]
set_property XPM_LIBRARIES XPM_MEMORY [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property ip_repo_paths f:/Hardware_Implementation/predict_function_hardware_hls/solution1/impl/ip [current_project]
update_ip_catalog
set_property ip_output_repo f:/Hardware_Implementation/predict_function_hardware_hls/solution1/impl/verilog/project.cache/ip [current_project]
set_property ip_cache_permissions {read write} [current_project]
read_verilog -library xil_defaultlib F:/Hardware_Implementation/predict_function_hardware_hls/solution1/impl/verilog/project.srcs/sources_1/bd/bd_0/hdl/bd_0_wrapper.v
add_files F:/Hardware_Implementation/predict_function_hardware_hls/solution1/impl/verilog/project.srcs/sources_1/bd/bd_0/bd_0.bd
set_property used_in_implementation false [get_files -all f:/Hardware_Implementation/predict_function_hardware_hls/solution1/impl/verilog/project.srcs/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/constraints/predict_function_ooc.xdc]
set_property used_in_implementation false [get_files -all F:/Hardware_Implementation/predict_function_hardware_hls/solution1/impl/verilog/project.srcs/sources_1/bd/bd_0/bd_0_ooc.xdc]

# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc F:/Hardware_Implementation/predict_function_hardware_hls/solution1/impl/verilog/predict_function.xdc
set_property used_in_implementation false [get_files F:/Hardware_Implementation/predict_function_hardware_hls/solution1/impl/verilog/predict_function.xdc]

read_xdc dont_touch.xdc
set_property used_in_implementation false [get_files dont_touch.xdc]
set_param ips.enableIPCacheLiteLoad 1
close [open __synthesis_is_running__ w]

synth_design -top bd_0_wrapper -part xc7z020clg400-1 -mode out_of_context


# disable binary constraint mode for synth run checkpoints
set_param constraints.enableBinaryConstraints false
write_checkpoint -force -noxdef bd_0_wrapper.dcp
create_report "synth_1_synth_report_utilization_0" "report_utilization -file bd_0_wrapper_utilization_synth.rpt -pb bd_0_wrapper_utilization_synth.pb"
file delete __synthesis_is_running__
close [open __synthesis_is_complete__ w]
