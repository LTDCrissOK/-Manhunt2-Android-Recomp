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

// Function: sub_003C0960
// Address: 0x3c0960 - 0x3c09d0
void sub_003C0960_0x3c0960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0960_0x3c0960");
#endif

    switch (ctx->pc) {
        case 0x3c09a8u: goto label_3c09a8;
        default: break;
    }

    ctx->pc = 0x3c0960u;

    // 0x3c0960: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c0960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3c0964: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c0964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3c0968: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3c0968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3c096c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3c096cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0970: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c0970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0974: 0x8c48cddc  lw          $t0, -0x3224($v0)
    ctx->pc = 0x3c0974u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x42CDDCu));
    // 0x3c0978: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3c0978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c097c: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x3c097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x3c0980: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3c0980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3c0984: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c0984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0988: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3c0988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x3c098c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3c098cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0990: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3c0990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3c0994: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x3c0994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x3c0998: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x3c0998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x3c099c: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x3c099cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c09a0: 0xc0f0d10  jal         func_3C3440
    ctx->pc = 0x3C09A0u;
    SET_GPR_U32(ctx, 31, 0x3C09A8u);
    ctx->pc = 0x3C09A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C09A0u;
    // 0x3c09a4: 0xafa80054  sw          $t0, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3440u, 0x3C09A0u, 0x3C09A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C09A8u;
label_3c09a8:
    // 0x3c09a8: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x3c09a8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c09ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c09acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c09b0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3c09b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c09b4: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x3c09b4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x3c09b8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3c09b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c09bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3c09bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c09c0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3c09c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c09c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C09C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C09C4u;
        // 0x3c09c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C09C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C09CCu;
    // 0x3c09cc: 0x0  nop
    ctx->pc = 0x3c09ccu;
    // NOP
    ctx->pc = 0x3c09d0u;
}
