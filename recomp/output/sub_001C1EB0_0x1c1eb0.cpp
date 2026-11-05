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

// Function: sub_001C1EB0
// Address: 0x1c1eb0 - 0x1c1f80
void sub_001C1EB0_0x1c1eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1EB0_0x1c1eb0");
#endif

    switch (ctx->pc) {
        case 0x1c1ef0u: goto label_1c1ef0;
        case 0x1c1ef8u: goto label_1c1ef8;
        case 0x1c1f30u: goto label_1c1f30;
        case 0x1c1f44u: goto label_1c1f44;
        case 0x1c1f58u: goto label_1c1f58;
        case 0x1c1f68u: goto label_1c1f68;
        default: break;
    }

    ctx->pc = 0x1c1eb0u;

    // 0x1c1eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1eb4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c1eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c1eb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c1ebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1ec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ec4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c1ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c1ec8: 0x26300310  addiu       $s0, $s1, 0x310
    ctx->pc = 0x1c1ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x1c1ecc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c1eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c1ed0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c1ed0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ed4: 0xae2204b0  sw          $v0, 0x4B0($s1)
    ctx->pc = 0x1c1ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1200), GPR_U32(ctx, 2));
    // 0x1c1ed8: 0xae2004d0  sw          $zero, 0x4D0($s1)
    ctx->pc = 0x1c1ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1232), GPR_U32(ctx, 0));
    // 0x1c1edc: 0xae200338  sw          $zero, 0x338($s1)
    ctx->pc = 0x1c1edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
    // 0x1c1ee0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c1ee4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1EE4u;
    {
        const bool branch_taken_0x1c1ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EE4u;
        // 0x1c1ee8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ee4) {
            ctx->pc = 0x1C1F08u;
            goto label_1c1f08;
        }
    }
    ctx->pc = 0x1C1EECu;
    // 0x1c1eec: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c1eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c1ef0:
    // 0x1c1ef0: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1C1EF0u;
    SET_GPR_U32(ctx, 31, 0x1C1EF8u);
    ctx->pc = 0x1C1EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1EF0u;
    // 0x1c1ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1C1EF0u, 0x1C1EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1EF8u;
label_1c1ef8:
    // 0x1c1ef8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c1efc: 0x0  nop
    ctx->pc = 0x1c1efcu;
    // NOP
    // 0x1c1f00: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C1F00u;
    {
        const bool branch_taken_0x1c1f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f00) {
            ctx->pc = 0x1C1F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1F00u;
            // 0x1c1f04: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1ef0;
        }
    }
    ctx->pc = 0x1C1F08u;
label_1c1f08:
    // 0x1c1f08: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1c1f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1c1f0c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x1c1f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x1c1f10: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c1f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c1f14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c1f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f18: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c1f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c1f1c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c1f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f20: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c1f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1c1f24: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c1f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1f28: 0xc0f7218  jal         func_3DC860
    ctx->pc = 0x1C1F28u;
    SET_GPR_U32(ctx, 31, 0x1C1F30u);
    ctx->pc = 0x1C1F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F28u;
    // 0x1c1f2c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x1C1F28u, 0x1C1F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F30u;
label_1c1f30:
    // 0x1c1f30: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1c1f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1c1f34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c1f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f38: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c1f38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f3c: 0xc0f7218  jal         func_3DC860
    ctx->pc = 0x1C1F3Cu;
    SET_GPR_U32(ctx, 31, 0x1C1F44u);
    ctx->pc = 0x1C1F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F3Cu;
    // 0x1c1f40: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x1C1F3Cu, 0x1C1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F44u;
label_1c1f44:
    // 0x1c1f44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c1f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f48: 0x26240130  addiu       $a0, $s1, 0x130
    ctx->pc = 0x1c1f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x1c1f4c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c1f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1f50: 0xc0f7218  jal         func_3DC860
    ctx->pc = 0x1C1F50u;
    SET_GPR_U32(ctx, 31, 0x1C1F58u);
    ctx->pc = 0x1C1F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F50u;
    // 0x1c1f54: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x1C1F50u, 0x1C1F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F58u;
label_1c1f58:
    // 0x1c1f58: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1c1f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1c1f5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c1f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1f60: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C1F60u;
    SET_GPR_U32(ctx, 31, 0x1C1F68u);
    ctx->pc = 0x1C1F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F60u;
    // 0x1c1f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C1F60u, 0x1C1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F68u;
label_1c1f68:
    // 0x1c1f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1f6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1f70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1f70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1f74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c1f78: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F78u;
        // 0x1c1f7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1F80u;
}
