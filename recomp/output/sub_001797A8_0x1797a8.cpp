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

// Function: sub_001797A8
// Address: 0x1797a8 - 0x179838
void sub_001797A8_0x1797a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001797A8_0x1797a8");
#endif

    switch (ctx->pc) {
        case 0x1797ccu: goto label_1797cc;
        default: break;
    }

    ctx->pc = 0x1797a8u;

    // 0x1797a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1797a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1797ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1797acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1797b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1797b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1797b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1797b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1797b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1797bc: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1797BCu;
    {
        const bool branch_taken_0x1797bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1797bc) {
            ctx->pc = 0x1797C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1797BCu;
            // 0x1797c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17982Cu;
            goto label_17982c;
        }
    }
    ctx->pc = 0x1797C4u;
    // 0x1797c4: 0xc04f740  jal         func_13DD00
    ctx->pc = 0x1797C4u;
    SET_GPR_U32(ctx, 31, 0x1797CCu);
    ctx->pc = 0x13DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD00u, 0x1797C4u, 0x1797CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797CCu;
label_1797cc:
    // 0x1797cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1797ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1797d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1797d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1797d4: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x1797d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1797d8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1797d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1797dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1797dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1797e0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1797e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1797e4: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x1797e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1797e8: 0xe60005a4  swc1        $f0, 0x5A4($s0)
    ctx->pc = 0x1797e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1444), bits); }
    // 0x1797ec: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1797ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1797f0: 0xa2030531  sb          $v1, 0x531($s0)
    ctx->pc = 0x1797f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 3));
    // 0x1797f4: 0xae040588  sw          $a0, 0x588($s0)
    ctx->pc = 0x1797f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1416), GPR_U32(ctx, 4));
    // 0x1797f8: 0xae050594  sw          $a1, 0x594($s0)
    ctx->pc = 0x1797f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1428), GPR_U32(ctx, 5));
    // 0x1797fc: 0xae060598  sw          $a2, 0x598($s0)
    ctx->pc = 0x1797fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1432), GPR_U32(ctx, 6));
    // 0x179800: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x179800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x179804: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x179804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x179808: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x179808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x17980c: 0xa2000530  sb          $zero, 0x530($s0)
    ctx->pc = 0x17980cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1328), (uint8_t)GPR_U32(ctx, 0));
    // 0x179810: 0xa2000584  sb          $zero, 0x584($s0)
    ctx->pc = 0x179810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1412), (uint8_t)GPR_U32(ctx, 0));
    // 0x179814: 0xa2000585  sb          $zero, 0x585($s0)
    ctx->pc = 0x179814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1413), (uint8_t)GPR_U32(ctx, 0));
    // 0x179818: 0xae00058c  sw          $zero, 0x58C($s0)
    ctx->pc = 0x179818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 0));
    // 0x17981c: 0xae000590  sw          $zero, 0x590($s0)
    ctx->pc = 0x17981cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
    // 0x179820: 0xae00059c  sw          $zero, 0x59C($s0)
    ctx->pc = 0x179820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1436), GPR_U32(ctx, 0));
    // 0x179824: 0xe60005a0  swc1        $f0, 0x5A0($s0)
    ctx->pc = 0x179824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1440), bits); }
    // 0x179828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x179828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17982c:
    // 0x17982c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17982cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179830: 0x3e00008  jr          $ra
    ctx->pc = 0x179830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179830u;
        // 0x179834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179838u;
}
