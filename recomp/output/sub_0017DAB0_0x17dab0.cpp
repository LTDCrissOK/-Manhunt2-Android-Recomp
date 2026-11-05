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

// Function: sub_0017DAB0
// Address: 0x17dab0 - 0x17db88
void sub_0017DAB0_0x17dab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DAB0_0x17dab0");
#endif

    switch (ctx->pc) {
        case 0x17dad4u: goto label_17dad4;
        case 0x17dae0u: goto label_17dae0;
        case 0x17db2cu: goto label_17db2c;
        case 0x17db34u: goto label_17db34;
        case 0x17db3cu: goto label_17db3c;
        case 0x17db44u: goto label_17db44;
        case 0x17db50u: goto label_17db50;
        case 0x17db60u: goto label_17db60;
        case 0x17db68u: goto label_17db68;
        case 0x17db74u: goto label_17db74;
        default: break;
    }

    ctx->pc = 0x17dab0u;

    // 0x17dab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17dab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17dab4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17dab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17dab8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17dab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17dabc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17dabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dac0: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x17dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x17dac4: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x17DAC4u;
    {
        const bool branch_taken_0x17dac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dac4) {
            ctx->pc = 0x17DAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DAC4u;
            // 0x17dac8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DB78u;
            goto label_17db78;
        }
    }
    ctx->pc = 0x17DACCu;
    // 0x17dacc: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17DACCu;
    SET_GPR_U32(ctx, 31, 0x17DAD4u);
    ctx->pc = 0x17DAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DACCu;
    // 0x17dad0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17DACCu, 0x17DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DAD4u;
label_17dad4:
    // 0x17dad4: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x17dad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x17dad8: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x17DAD8u;
    SET_GPR_U32(ctx, 31, 0x17DAE0u);
    ctx->pc = 0x17DADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DAD8u;
    // 0x17dadc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x17DAD8u, 0x17DAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DAE0u;
label_17dae0:
    // 0x17dae0: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x17DAE0u;
    {
        const bool branch_taken_0x17dae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dae0) {
            ctx->pc = 0x17DAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DAE0u;
            // 0x17dae4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DB48u;
            goto label_17db48;
        }
    }
    ctx->pc = 0x17DAE8u;
    // 0x17dae8: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x17dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x17daec: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x17DAECu;
    {
        const bool branch_taken_0x17daec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAECu;
        // 0x17daf0: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17daec) {
            ctx->pc = 0x17DB58u;
            goto label_17db58;
        }
    }
    ctx->pc = 0x17DAF4u;
    // 0x17daf4: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x17daf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x17daf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17dafc: 0x8e08009c  lw          $t0, 0x9C($s0)
    ctx->pc = 0x17dafcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x17db00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17db00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db04: 0x8e0700a0  lw          $a3, 0xA0($s0)
    ctx->pc = 0x17db04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x17db08: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x17db08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x17db0c: 0x8e0600ac  lw          $a2, 0xAC($s0)
    ctx->pc = 0x17db0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x17db10: 0xae05007c  sw          $a1, 0x7C($s0)
    ctx->pc = 0x17db10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 5));
    // 0x17db14: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x17db14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x17db18: 0xae080070  sw          $t0, 0x70($s0)
    ctx->pc = 0x17db18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 8));
    // 0x17db1c: 0xae070074  sw          $a3, 0x74($s0)
    ctx->pc = 0x17db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 7));
    // 0x17db20: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x17db20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x17db24: 0xc05faa4  jal         func_17EA90
    ctx->pc = 0x17DB24u;
    SET_GPR_U32(ctx, 31, 0x17DB2Cu);
    ctx->pc = 0x17DB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB24u;
    // 0x17db28: 0xae06008c  sw          $a2, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EA90u, 0x17DB24u, 0x17DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB2Cu;
label_17db2c:
    // 0x17db2c: 0xc05f8b8  jal         func_17E2E0
    ctx->pc = 0x17DB2Cu;
    SET_GPR_U32(ctx, 31, 0x17DB34u);
    ctx->pc = 0x17DB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB2Cu;
    // 0x17db30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E2E0u, 0x17DB2Cu, 0x17DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB34u;
label_17db34:
    // 0x17db34: 0xc05f5f4  jal         func_17D7D0
    ctx->pc = 0x17DB34u;
    SET_GPR_U32(ctx, 31, 0x17DB3Cu);
    ctx->pc = 0x17DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB34u;
    // 0x17db38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D7D0u, 0x17DB34u, 0x17DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB3Cu;
label_17db3c:
    // 0x17db3c: 0xc05fab6  jal         func_17EAD8
    ctx->pc = 0x17DB3Cu;
    SET_GPR_U32(ctx, 31, 0x17DB44u);
    ctx->pc = 0x17DB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB3Cu;
    // 0x17db40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EAD8u, 0x17DB3Cu, 0x17DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB44u;
label_17db44:
    // 0x17db44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17db44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17db48:
    // 0x17db48: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17DB48u;
    SET_GPR_U32(ctx, 31, 0x17DB50u);
    ctx->pc = 0x17DB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB48u;
    // 0x17db4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17DB48u, 0x17DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB50u;
label_17db50:
    // 0x17db50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17DB50u;
    {
        const bool branch_taken_0x17db50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB50u;
        // 0x17db54: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db50) {
            ctx->pc = 0x17DB78u;
            goto label_17db78;
        }
    }
    ctx->pc = 0x17DB58u;
label_17db58:
    // 0x17db58: 0xc05f5e4  jal         func_17D790
    ctx->pc = 0x17DB58u;
    SET_GPR_U32(ctx, 31, 0x17DB60u);
    ctx->pc = 0x17DB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB58u;
    // 0x17db5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D790u, 0x17DB58u, 0x17DB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB60u;
label_17db60:
    // 0x17db60: 0xc05f5d2  jal         func_17D748
    ctx->pc = 0x17DB60u;
    SET_GPR_U32(ctx, 31, 0x17DB68u);
    ctx->pc = 0x17DB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB60u;
    // 0x17db64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D748u, 0x17DB60u, 0x17DB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB68u;
label_17db68:
    // 0x17db68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17db68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db6c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17DB6Cu;
    SET_GPR_U32(ctx, 31, 0x17DB74u);
    ctx->pc = 0x17DB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB6Cu;
    // 0x17db70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17DB6Cu, 0x17DB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB74u;
label_17db74:
    // 0x17db74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17db74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17db78:
    // 0x17db78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17db78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17db7c: 0x3e00008  jr          $ra
    ctx->pc = 0x17DB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB7Cu;
        // 0x17db80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DB84u;
    // 0x17db84: 0x0  nop
    ctx->pc = 0x17db84u;
    // NOP
    ctx->pc = 0x17db88u;
}
