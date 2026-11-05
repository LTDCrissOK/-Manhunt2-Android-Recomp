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

// Function: sub_003B1ED8
// Address: 0x3b1ed8 - 0x3b1fb8
void sub_003B1ED8_0x3b1ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1ED8_0x3b1ed8");
#endif

    switch (ctx->pc) {
        case 0x3b1f0cu: goto label_3b1f0c;
        case 0x3b1f30u: goto label_3b1f30;
        case 0x3b1f44u: goto label_3b1f44;
        case 0x3b1f68u: goto label_3b1f68;
        case 0x3b1f78u: goto label_3b1f78;
        case 0x3b1f90u: goto label_3b1f90;
        default: break;
    }

    ctx->pc = 0x3b1ed8u;

    // 0x3b1ed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b1ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b1edc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b1ee0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b1ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b1ee4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b1ee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1ee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b1ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b1eec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b1eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b1ef0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3b1ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3b1ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b1ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b1ef8: 0x8e4301ac  lw          $v1, 0x1AC($s2)
    ctx->pc = 0x3b1ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x3b1efc: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3B1EFCu;
    {
        const bool branch_taken_0x3b1efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1EFCu;
        // 0x3b1f00: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1efc) {
            ctx->pc = 0x3B1F9Cu;
            goto label_3b1f9c;
        }
    }
    ctx->pc = 0x3B1F04u;
    // 0x3b1f04: 0xc0ec5e8  jal         func_3B17A0
    ctx->pc = 0x3B1F04u;
    SET_GPR_U32(ctx, 31, 0x3B1F0Cu);
    ctx->pc = 0x3B17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B17A0u, 0x3B1F04u, 0x3B1F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F0Cu;
label_3b1f0c:
    // 0x3b1f0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b1f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b1f10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b1f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f14: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3B1F14u;
    {
        const bool branch_taken_0x3b1f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F14u;
        // 0x3b1f18: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1f14) {
            ctx->pc = 0x3B1F9Cu;
            goto label_3b1f9c;
        }
    }
    ctx->pc = 0x3B1F1Cu;
    // 0x3b1f1c: 0x1493001f  bne         $a0, $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x3B1F1Cu;
    {
        const bool branch_taken_0x3b1f1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x3B1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F1Cu;
        // 0x3b1f20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1f1c) {
            ctx->pc = 0x3B1F9Cu;
            goto label_3b1f9c;
        }
    }
    ctx->pc = 0x3B1F24u;
    // 0x3b1f24: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x3b1f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x3b1f28: 0xc0ec592  jal         func_3B1648
    ctx->pc = 0x3B1F28u;
    SET_GPR_U32(ctx, 31, 0x3B1F30u);
    ctx->pc = 0x3B1F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F28u;
    // 0x3b1f2c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1648u, 0x3B1F28u, 0x3B1F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F30u;
label_3b1f30:
    // 0x3b1f30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B1F30u;
    {
        const bool branch_taken_0x3b1f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F30u;
        // 0x3b1f34: 0x265001b4  addiu       $s0, $s2, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1f30) {
            ctx->pc = 0x3B1F4Cu;
            goto label_3b1f4c;
        }
    }
    ctx->pc = 0x3B1F38u;
    // 0x3b1f38: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x3b1f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x3b1f3c: 0xc0ec848  jal         func_3B2120
    ctx->pc = 0x3B1F3Cu;
    SET_GPR_U32(ctx, 31, 0x3B1F44u);
    ctx->pc = 0x3B1F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F3Cu;
    // 0x3b1f40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2120u, 0x3B1F3Cu, 0x3B1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F44u;
label_3b1f44:
    // 0x3b1f44: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1F44u;
    {
        const bool branch_taken_0x3b1f44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3B1F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F44u;
        // 0x3b1f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1f44) {
            ctx->pc = 0x3B1F58u;
            goto label_3b1f58;
        }
    }
    ctx->pc = 0x3B1F4Cu;
label_3b1f4c:
    // 0x3b1f4c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3B1F4Cu;
    {
        const bool branch_taken_0x3b1f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F4Cu;
        // 0x3b1f50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1f4c) {
            ctx->pc = 0x3B1F9Cu;
            goto label_3b1f9c;
        }
    }
    ctx->pc = 0x3B1F54u;
    // 0x3b1f54: 0x0  nop
    ctx->pc = 0x3b1f54u;
    // NOP
label_3b1f58:
    // 0x3b1f58: 0x265001e4  addiu       $s0, $s2, 0x1E4
    ctx->pc = 0x3b1f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 484));
    // 0x3b1f5c: 0x26510220  addiu       $s1, $s2, 0x220
    ctx->pc = 0x3b1f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x3b1f60: 0xc0ec896  jal         func_3B2258
    ctx->pc = 0x3B1F60u;
    SET_GPR_U32(ctx, 31, 0x3B1F68u);
    ctx->pc = 0x3B1F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F60u;
    // 0x3b1f64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2258u, 0x3B1F60u, 0x3B1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F68u;
label_3b1f68:
    // 0x3b1f68: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x3b1f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x3b1f6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b1f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f70: 0xc0ec8d0  jal         func_3B2340
    ctx->pc = 0x3B1F70u;
    SET_GPR_U32(ctx, 31, 0x3B1F78u);
    ctx->pc = 0x3B1F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F70u;
    // 0x3b1f74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2340u, 0x3B1F70u, 0x3B1F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F78u;
label_3b1f78:
    // 0x3b1f78: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x3b1f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x3b1f7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b1f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b1f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f84: 0x26470320  addiu       $a3, $s2, 0x320
    ctx->pc = 0x3b1f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
    // 0x3b1f88: 0xc0ec932  jal         func_3B24C8
    ctx->pc = 0x3B1F88u;
    SET_GPR_U32(ctx, 31, 0x3B1F90u);
    ctx->pc = 0x3B1F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F88u;
    // 0x3b1f8c: 0x26480420  addiu       $t0, $s2, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B24C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B24C8u, 0x3B1F88u, 0x3B1F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F90u;
label_3b1f90:
    // 0x3b1f90: 0xa25301a5  sb          $s3, 0x1A5($s2)
    ctx->pc = 0x3b1f90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 421), (uint8_t)GPR_U32(ctx, 19));
    // 0x3b1f94: 0xae4001a8  sw          $zero, 0x1A8($s2)
    ctx->pc = 0x3b1f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
    // 0x3b1f98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b1f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1f9c:
    // 0x3b1f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b1f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1fa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b1fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b1fa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b1fa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1fa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3b1fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b1fac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b1facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b1fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FB0u;
        // 0x3b1fb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1FB8u;
}
