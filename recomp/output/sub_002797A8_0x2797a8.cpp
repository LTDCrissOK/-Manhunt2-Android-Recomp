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

// Function: sub_002797A8
// Address: 0x2797a8 - 0x279818
void sub_002797A8_0x2797a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002797A8_0x2797a8");
#endif

    switch (ctx->pc) {
        case 0x2797ccu: goto label_2797cc;
        case 0x2797dcu: goto label_2797dc;
        case 0x2797f4u: goto label_2797f4;
        case 0x2797fcu: goto label_2797fc;
        default: break;
    }

    ctx->pc = 0x2797a8u;

    // 0x2797a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2797a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2797ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2797acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2797b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2797b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2797b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2797b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2797b8: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x2797b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2797bc: 0x8fb20048  lw          $s2, 0x48($sp)
    ctx->pc = 0x2797bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2797c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2797c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2797c4: 0xc09e5a8  jal         func_2796A0
    ctx->pc = 0x2797C4u;
    SET_GPR_U32(ctx, 31, 0x2797CCu);
    ctx->pc = 0x2797C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2797C4u;
    // 0x2797c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2796A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2796A0u, 0x2797C4u, 0x2797CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797CCu;
label_2797cc:
    // 0x2797cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2797ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2797d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797d4: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2797D4u;
    SET_GPR_U32(ctx, 31, 0x2797DCu);
    ctx->pc = 0x2797D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2797D4u;
    // 0x2797d8: 0x24a60004  addiu       $a2, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2797D4u, 0x2797DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797DCu;
label_2797dc:
    // 0x2797dc: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x2797dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2797e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2797e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2797e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2797e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2797ec: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x2797ECu;
    SET_GPR_U32(ctx, 31, 0x2797F4u);
    ctx->pc = 0x2797F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2797ECu;
    // 0x2797f0: 0xae030114  sw          $v1, 0x114($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x2797ECu, 0x2797F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797F4u;
label_2797f4:
    // 0x2797f4: 0xc09e834  jal         func_27A0D0
    ctx->pc = 0x2797F4u;
    SET_GPR_U32(ctx, 31, 0x2797FCu);
    ctx->pc = 0x2797F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2797F4u;
    // 0x2797f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A0D0u, 0x2797F4u, 0x2797FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797FCu;
label_2797fc:
    // 0x2797fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2797fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279804: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x279804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279808: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x279808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27980c: 0x3e00008  jr          $ra
    ctx->pc = 0x27980Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27980Cu;
        // 0x279810: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27980Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279814u;
    // 0x279814: 0x0  nop
    ctx->pc = 0x279814u;
    // NOP
    ctx->pc = 0x279818u;
}
