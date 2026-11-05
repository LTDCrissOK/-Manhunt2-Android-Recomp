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

// Function: sub_001AB440
// Address: 0x1ab440 - 0x1ab4c0
void sub_001AB440_0x1ab440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB440_0x1ab440");
#endif

    switch (ctx->pc) {
        case 0x1ab460u: goto label_1ab460;
        case 0x1ab47cu: goto label_1ab47c;
        case 0x1ab490u: goto label_1ab490;
        default: break;
    }

    ctx->pc = 0x1ab440u;

    // 0x1ab440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab448: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ab448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ab44c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab450: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ab450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ab454: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x1ab454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1ab458: 0xc06a4c0  jal         func_1A9300
    ctx->pc = 0x1AB458u;
    SET_GPR_U32(ctx, 31, 0x1AB460u);
    ctx->pc = 0x1AB45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB458u;
    // 0x1ab45c: 0x8c510110  lw          $s1, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9300u, 0x1AB458u, 0x1AB460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB460u;
label_1ab460:
    // 0x1ab460: 0x8e0301e4  lw          $v1, 0x1E4($s0)
    ctx->pc = 0x1ab460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1ab464: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1ab464u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1ab468: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ab468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ab46c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1AB46Cu;
    {
        const bool branch_taken_0x1ab46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab46c) {
            ctx->pc = 0x1AB470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB46Cu;
            // 0x1ab470: 0x9462002a  lhu         $v0, 0x2A($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB498u;
            goto label_1ab498;
        }
    }
    ctx->pc = 0x1AB474u;
    // 0x1ab474: 0xc075774  jal         func_1D5DD0
    ctx->pc = 0x1AB474u;
    SET_GPR_U32(ctx, 31, 0x1AB47Cu);
    ctx->pc = 0x1AB478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB474u;
    // 0x1ab478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DD0u, 0x1AB474u, 0x1AB47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB47Cu;
label_1ab47c:
    // 0x1ab47c: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x1ab47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1ab480: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab484: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ab484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab488: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1AB488u;
    SET_GPR_U32(ctx, 31, 0x1AB490u);
    ctx->pc = 0x1AB48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB488u;
    // 0x1ab48c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1AB488u, 0x1AB490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB490u;
label_1ab490:
    // 0x1ab490: 0x8e0301e4  lw          $v1, 0x1E4($s0)
    ctx->pc = 0x1ab490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1ab494: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1ab494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
label_1ab498:
    // 0x1ab498: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ab498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1ab49c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB49Cu;
    {
        const bool branch_taken_0x1ab49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab49c) {
            ctx->pc = 0x1AB4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB49Cu;
            // 0x1ab4a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB4B0u;
            goto label_1ab4b0;
        }
    }
    ctx->pc = 0x1AB4A4u;
    // 0x1ab4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab4a8: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1ab4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x1ab4ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab4acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab4b0:
    // 0x1ab4b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab4b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab4b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ab4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4B8u;
        // 0x1ab4bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB4C0u;
}
