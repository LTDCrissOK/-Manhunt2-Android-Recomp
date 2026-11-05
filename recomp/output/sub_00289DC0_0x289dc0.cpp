#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00289DC0
// Address: 0x289dc0 - 0x289e98
void sub_00289DC0_0x289dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289DC0_0x289dc0");
#endif

    switch (ctx->pc) {
        case 0x289de4u: goto label_289de4;
        case 0x289e00u: goto label_289e00;
        case 0x289e1cu: goto label_289e1c;
        case 0x289e2cu: goto label_289e2c;
        case 0x289e34u: goto label_289e34;
        case 0x289e50u: goto label_289e50;
        case 0x289e64u: goto label_289e64;
        case 0x289e78u: goto label_289e78;
        default: break;
    }

    ctx->pc = 0x289dc0u;

    // 0x289dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x289dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x289dc4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x289dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x289dc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x289dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x289dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289dd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x289dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x289dd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x289dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289dd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x289dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x289ddc: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x289DDCu;
    SET_GPR_U32(ctx, 31, 0x289DE4u);
    ctx->pc = 0x289DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289DDCu;
    // 0x289de0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x289DDCu, 0x289DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289DE4u;
label_289de4:
    // 0x289de4: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x289de4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x289de8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289dec: 0x26314ec0  addiu       $s1, $s1, 0x4EC0
    ctx->pc = 0x289decu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20160));
    // 0x289df0: 0x24a5ae90  addiu       $a1, $a1, -0x5170
    ctx->pc = 0x289df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946448));
    // 0x289df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289df8: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289DF8u;
    SET_GPR_U32(ctx, 31, 0x289E00u);
    ctx->pc = 0x289DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289DF8u;
    // 0x289dfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289DF8u, 0x289E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E00u;
label_289e00:
    // 0x289e00: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x289e00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x289e04: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x289e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289e08: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x289e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x289e0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x289e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e14: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x289E14u;
    SET_GPR_U32(ctx, 31, 0x289E1Cu);
    ctx->pc = 0x289E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E14u;
    // 0x289e18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x289E14u, 0x289E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E1Cu;
label_289e1c:
    // 0x289e1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x289e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289e20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x289e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289e24: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x289E24u;
    SET_GPR_U32(ctx, 31, 0x289E2Cu);
    ctx->pc = 0x289E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E24u;
    // 0x289e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x289E24u, 0x289E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E2Cu;
label_289e2c:
    // 0x289e2c: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x289E2Cu;
    SET_GPR_U32(ctx, 31, 0x289E34u);
    ctx->pc = 0x289E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E2Cu;
    // 0x289e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x289E2Cu, 0x289E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E34u;
label_289e34:
    // 0x289e34: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x289e34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x289e38: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289e3c: 0x2610a4f0  addiu       $s0, $s0, -0x5B10
    ctx->pc = 0x289e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943984));
    // 0x289e40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e44: 0x24a5ae98  addiu       $a1, $a1, -0x5168
    ctx->pc = 0x289e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946456));
    // 0x289e48: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289E48u;
    SET_GPR_U32(ctx, 31, 0x289E50u);
    ctx->pc = 0x289E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E48u;
    // 0x289e4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289E48u, 0x289E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E50u;
label_289e50:
    // 0x289e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x289e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x289e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e5c: 0xc0a18c4  jal         func_286310
    ctx->pc = 0x289E5Cu;
    SET_GPR_U32(ctx, 31, 0x289E64u);
    ctx->pc = 0x289E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E5Cu;
    // 0x289e60: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286310u, 0x289E5Cu, 0x289E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E64u;
label_289e64:
    // 0x289e64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x289e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x289e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e70: 0xc0dadb8  jal         func_36B6E0
    ctx->pc = 0x289E70u;
    SET_GPR_U32(ctx, 31, 0x289E78u);
    ctx->pc = 0x289E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E70u;
    // 0x289e74: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B6E0u, 0x289E70u, 0x289E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E78u;
label_289e78:
    // 0x289e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x289e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289e7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x289e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x289e80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x289e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289e84: 0x3e00008  jr          $ra
    ctx->pc = 0x289E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E84u;
        // 0x289e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289E8Cu;
    // 0x289e8c: 0x0  nop
    ctx->pc = 0x289e8cu;
    // NOP
    // 0x289e90: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x289e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x289e94: 0x0  nop
    ctx->pc = 0x289e94u;
    // NOP
    ctx->pc = 0x289e98u;
}
