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

// Function: sub_00164820
// Address: 0x164820 - 0x1648b0
void sub_00164820_0x164820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164820_0x164820");
#endif

    switch (ctx->pc) {
        case 0x164844u: goto label_164844;
        default: break;
    }

    ctx->pc = 0x164820u;

    // 0x164820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164828: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x164828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16482c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16482cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164830: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x164830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x164834: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x164834u;
    {
        const bool branch_taken_0x164834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164834) {
            ctx->pc = 0x164838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164834u;
            // 0x164838: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1648A4u;
            goto label_1648a4;
        }
    }
    ctx->pc = 0x16483Cu;
    // 0x16483c: 0xc04f03a  jal         func_13C0E8
    ctx->pc = 0x16483Cu;
    SET_GPR_U32(ctx, 31, 0x164844u);
    ctx->pc = 0x13C0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0E8u, 0x16483Cu, 0x164844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164844u;
label_164844:
    // 0x164844: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x164844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x164848: 0xae0002e4  sw          $zero, 0x2E4($s0)
    ctx->pc = 0x164848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 0));
    // 0x16484c: 0x7e0002f0  sq          $zero, 0x2F0($s0)
    ctx->pc = 0x16484cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), GPR_VEC(ctx, 0));
    // 0x164850: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x164850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x164854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164858: 0xae020304  sw          $v0, 0x304($s0)
    ctx->pc = 0x164858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 2));
    // 0x16485c: 0xae0303c0  sw          $v1, 0x3C0($s0)
    ctx->pc = 0x16485cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 3));
    // 0x164860: 0xa2000300  sb          $zero, 0x300($s0)
    ctx->pc = 0x164860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 768), (uint8_t)GPR_U32(ctx, 0));
    // 0x164864: 0xae000398  sw          $zero, 0x398($s0)
    ctx->pc = 0x164864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
    // 0x164868: 0xae00039c  sw          $zero, 0x39C($s0)
    ctx->pc = 0x164868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
    // 0x16486c: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x16486cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
    // 0x164870: 0xae0003a4  sw          $zero, 0x3A4($s0)
    ctx->pc = 0x164870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 0));
    // 0x164874: 0xae0003ac  sw          $zero, 0x3AC($s0)
    ctx->pc = 0x164874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 0));
    // 0x164878: 0xae0003a8  sw          $zero, 0x3A8($s0)
    ctx->pc = 0x164878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
    // 0x16487c: 0xae0003b0  sw          $zero, 0x3B0($s0)
    ctx->pc = 0x16487cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
    // 0x164880: 0xae0003b4  sw          $zero, 0x3B4($s0)
    ctx->pc = 0x164880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 0));
    // 0x164884: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x164884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
    // 0x164888: 0xae0003bc  sw          $zero, 0x3BC($s0)
    ctx->pc = 0x164888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 956), GPR_U32(ctx, 0));
    // 0x16488c: 0xae0003c4  sw          $zero, 0x3C4($s0)
    ctx->pc = 0x16488cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
    // 0x164890: 0x7e0003d0  sq          $zero, 0x3D0($s0)
    ctx->pc = 0x164890u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 976), GPR_VEC(ctx, 0));
    // 0x164894: 0x7e0003e0  sq          $zero, 0x3E0($s0)
    ctx->pc = 0x164894u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 992), GPR_VEC(ctx, 0));
    // 0x164898: 0xae0003f0  sw          $zero, 0x3F0($s0)
    ctx->pc = 0x164898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 0));
    // 0x16489c: 0x7e000400  sq          $zero, 0x400($s0)
    ctx->pc = 0x16489cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1024), GPR_VEC(ctx, 0));
    // 0x1648a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1648a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1648a4:
    // 0x1648a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1648a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1648a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1648A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1648ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648A8u;
        // 0x1648ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1648A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1648B0u;
}
