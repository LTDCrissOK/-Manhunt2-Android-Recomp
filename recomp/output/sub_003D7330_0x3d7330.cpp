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

// Function: sub_003D7330
// Address: 0x3d7330 - 0x3d73c8
void sub_003D7330_0x3d7330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7330_0x3d7330");
#endif

    switch (ctx->pc) {
        case 0x3d7330u: goto label_3d7330;
        case 0x3d7334u: goto label_3d7334;
        case 0x3d7338u: goto label_3d7338;
        case 0x3d733cu: goto label_3d733c;
        case 0x3d7340u: goto label_3d7340;
        case 0x3d7344u: goto label_3d7344;
        case 0x3d7348u: goto label_3d7348;
        case 0x3d734cu: goto label_3d734c;
        case 0x3d7350u: goto label_3d7350;
        case 0x3d7354u: goto label_3d7354;
        case 0x3d7358u: goto label_3d7358;
        case 0x3d735cu: goto label_3d735c;
        case 0x3d7360u: goto label_3d7360;
        case 0x3d7364u: goto label_3d7364;
        case 0x3d7368u: goto label_3d7368;
        case 0x3d736cu: goto label_3d736c;
        case 0x3d7370u: goto label_3d7370;
        case 0x3d7374u: goto label_3d7374;
        case 0x3d7378u: goto label_3d7378;
        case 0x3d737cu: goto label_3d737c;
        case 0x3d7380u: goto label_3d7380;
        case 0x3d7384u: goto label_3d7384;
        case 0x3d7388u: goto label_3d7388;
        case 0x3d738cu: goto label_3d738c;
        case 0x3d7390u: goto label_3d7390;
        case 0x3d7394u: goto label_3d7394;
        case 0x3d7398u: goto label_3d7398;
        case 0x3d739cu: goto label_3d739c;
        case 0x3d73a0u: goto label_3d73a0;
        case 0x3d73a4u: goto label_3d73a4;
        case 0x3d73a8u: goto label_3d73a8;
        case 0x3d73acu: goto label_3d73ac;
        case 0x3d73b0u: goto label_3d73b0;
        case 0x3d73b4u: goto label_3d73b4;
        case 0x3d73b8u: goto label_3d73b8;
        case 0x3d73bcu: goto label_3d73bc;
        case 0x3d73c0u: goto label_3d73c0;
        case 0x3d73c4u: goto label_3d73c4;
        default: break;
    }

    ctx->pc = 0x3d7330u;

label_3d7330:
    // 0x3d7330: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d7330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d7334:
    // 0x3d7334: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d7334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3d7338:
    // 0x3d7338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d7338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3d733c:
    // 0x3d733c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d733cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d7340:
    // 0x3d7340: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3d7340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_3d7344:
    // 0x3d7344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d7344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7348:
    // 0x3d7348: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3d7348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_3d734c:
    // 0x3d734c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x3d734cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3d7350:
    // 0x3d7350: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3d7350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_3d7354:
    // 0x3d7354: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x3d7354u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3d7358:
    // 0x3d7358: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d7358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3d735c:
    // 0x3d735c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3d735cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d7360:
    // 0x3d7360: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3d7360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3d7364:
    // 0x3d7364: 0xc0f5c96  jal         func_3D7258
label_3d7368:
    if (ctx->pc == 0x3D7368u) {
        ctx->pc = 0x3D7368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7364u;
        // 0x3d7368: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D736Cu;
        goto label_3d736c;
    }
    ctx->pc = 0x3D7364u;
    SET_GPR_U32(ctx, 31, 0x3D736Cu);
    ctx->pc = 0x3D7368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7364u;
    // 0x3d7368: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7258u, 0x3D7364u, 0x3D736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D736Cu;
label_3d736c:
    // 0x3d736c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3d7370:
    if (ctx->pc == 0x3D7370u) {
        ctx->pc = 0x3D7370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D736Cu;
        // 0x3d7370: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7374u;
        goto label_3d7374;
    }
    ctx->pc = 0x3D736Cu;
    {
        const bool branch_taken_0x3d736c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D736Cu;
        // 0x3d7370: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d736c) {
            ctx->pc = 0x3D73A0u;
            goto label_3d73a0;
        }
    }
    ctx->pc = 0x3D7374u;
label_3d7374:
    // 0x3d7374: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x3d7374u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d7378:
    // 0x3d7378: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d7378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d737c:
    // 0x3d737c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d737cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d7380:
    // 0x3d7380: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3d7380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d7384:
    // 0x3d7384: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x3d7384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_3d7388:
    // 0x3d7388: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3d7388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d738c:
    // 0x3d738c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x3d738cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d7390:
    // 0x3d7390: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3d7390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3d7394:
    // 0x3d7394: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3d7394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3d7398:
    // 0x3d7398: 0x40f809  jalr        $v0
label_3d739c:
    if (ctx->pc == 0x3D739Cu) {
        ctx->pc = 0x3D739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7398u;
        // 0x3d739c: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D73A0u;
        goto label_3d73a0;
    }
    ctx->pc = 0x3D7398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D73A0u);
        ctx->pc = 0x3D739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7398u;
        // 0x3d739c: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7398u, 0x3D73A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D73A0u;
label_3d73a0:
    // 0x3d73a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3d73a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3d73a4:
    // 0x3d73a4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3d73a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3d73a8:
    // 0x3d73a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3d73a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d73ac:
    // 0x3d73ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3d73acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d73b0:
    // 0x3d73b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d73b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d73b4:
    // 0x3d73b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d73b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d73b8:
    // 0x3d73b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d73b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d73bc:
    // 0x3d73bc: 0x3e00008  jr          $ra
label_3d73c0:
    if (ctx->pc == 0x3D73C0u) {
        ctx->pc = 0x3D73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D73BCu;
        // 0x3d73c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D73C4u;
        goto label_3d73c4;
    }
    ctx->pc = 0x3D73BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D73BCu;
        // 0x3d73c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D73BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D73C4u;
label_3d73c4:
    // 0x3d73c4: 0x0  nop
    ctx->pc = 0x3d73c4u;
    // NOP
    ctx->pc = 0x3d73c8u;
}
