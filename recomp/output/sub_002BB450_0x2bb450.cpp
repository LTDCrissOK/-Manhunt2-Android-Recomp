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

// Function: sub_002BB450
// Address: 0x2bb450 - 0x2bb4c0
void sub_002BB450_0x2bb450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB450_0x2bb450");
#endif

    switch (ctx->pc) {
        case 0x2bb478u: goto label_2bb478;
        case 0x2bb490u: goto label_2bb490;
        default: break;
    }

    ctx->pc = 0x2bb450u;

    // 0x2bb450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bb454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bb458: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bb458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bb45c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bb45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb460: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bb464: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2bb464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb468: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x2bb468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb46c: 0xa2110015  sb          $s1, 0x15($s0)
    ctx->pc = 0x2bb46cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 17));
    // 0x2bb470: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2BB470u;
    SET_GPR_U32(ctx, 31, 0x2BB478u);
    ctx->pc = 0x2BB474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB470u;
    // 0x2bb474: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2BB470u, 0x2BB478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB478u;
label_2bb478:
    // 0x2bb478: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2bb478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2bb47c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2bb47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2bb480: 0x24a50188  addiu       $a1, $a1, 0x188
    ctx->pc = 0x2bb480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 392));
    // 0x2bb484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb488: 0xc0aebee  jal         func_2BAFB8
    ctx->pc = 0x2BB488u;
    SET_GPR_U32(ctx, 31, 0x2BB490u);
    ctx->pc = 0x2BB48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB488u;
    // 0x2bb48c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFB8u, 0x2BB488u, 0x2BB490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB490u;
label_2bb490:
    // 0x2bb490: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB490u;
    {
        const bool branch_taken_0x2bb490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB490u;
        // 0x2bb494: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb490) {
            ctx->pc = 0x2BB4A8u;
            goto label_2bb4a8;
        }
    }
    ctx->pc = 0x2BB498u;
    // 0x2bb498: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2bb498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2bb49c: 0xa2110014  sb          $s1, 0x14($s0)
    ctx->pc = 0x2bb49cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 17));
    // 0x2bb4a0: 0x24420128  addiu       $v0, $v0, 0x128
    ctx->pc = 0x2bb4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    // 0x2bb4a4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2bb4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_2bb4a8:
    // 0x2bb4a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb4ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2bb4acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bb4b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bb4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4B4u;
        // 0x2bb4b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB4BCu;
    // 0x2bb4bc: 0x0  nop
    ctx->pc = 0x2bb4bcu;
    // NOP
    ctx->pc = 0x2bb4c0u;
}
