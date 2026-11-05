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

// Function: sub_002796A0
// Address: 0x2796a0 - 0x2797a8
void sub_002796A0_0x2796a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002796A0_0x2796a0");
#endif

    switch (ctx->pc) {
        case 0x2796e4u: goto label_2796e4;
        case 0x2796ecu: goto label_2796ec;
        case 0x2796fcu: goto label_2796fc;
        case 0x279714u: goto label_279714;
        case 0x27971cu: goto label_27971c;
        case 0x27972cu: goto label_27972c;
        case 0x279744u: goto label_279744;
        case 0x27974cu: goto label_27974c;
        case 0x27975cu: goto label_27975c;
        case 0x279774u: goto label_279774;
        case 0x27977cu: goto label_27977c;
        default: break;
    }

    ctx->pc = 0x2796a0u;

    // 0x2796a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2796a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2796a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2796a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2796a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2796a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2796ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2796acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2796b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2796b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2796b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2796b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2796b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2796b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2796bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2796bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2796c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2796c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2796c4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2796c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2796c8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2796c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2796cc: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2796ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2796d0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2796d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2796d4: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x2796d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2796d8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2796d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2796dc: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x2796DCu;
    SET_GPR_U32(ctx, 31, 0x2796E4u);
    ctx->pc = 0x2796E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2796DCu;
    // 0x2796e0: 0x160b02d  daddu       $s6, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x2796DCu, 0x2796E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2796E4u;
label_2796e4:
    // 0x2796e4: 0xc09e834  jal         func_27A0D0
    ctx->pc = 0x2796E4u;
    SET_GPR_U32(ctx, 31, 0x2796ECu);
    ctx->pc = 0x2796E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2796E4u;
    // 0x2796e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A0D0u, 0x2796E4u, 0x2796ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2796ECu;
label_2796ec:
    // 0x2796ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2796ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2796f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2796f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2796f4: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2796F4u;
    SET_GPR_U32(ctx, 31, 0x2796FCu);
    ctx->pc = 0x2796F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2796F4u;
    // 0x2796f8: 0x24a60004  addiu       $a2, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2796F4u, 0x2796FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2796FCu;
label_2796fc:
    // 0x2796fc: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x2796fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279700: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x279700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279708: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x279708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27970c: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x27970Cu;
    SET_GPR_U32(ctx, 31, 0x279714u);
    ctx->pc = 0x279710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27970Cu;
    // 0x279710: 0xae030114  sw          $v1, 0x114($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x27970Cu, 0x279714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279714u;
label_279714:
    // 0x279714: 0xc09e834  jal         func_27A0D0
    ctx->pc = 0x279714u;
    SET_GPR_U32(ctx, 31, 0x27971Cu);
    ctx->pc = 0x279718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279714u;
    // 0x279718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A0D0u, 0x279714u, 0x27971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27971Cu;
label_27971c:
    // 0x27971c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27971cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279724: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x279724u;
    SET_GPR_U32(ctx, 31, 0x27972Cu);
    ctx->pc = 0x279728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279724u;
    // 0x279728: 0x24a60004  addiu       $a2, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x279724u, 0x27972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27972Cu;
label_27972c:
    // 0x27972c: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x27972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279730: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x279730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279738: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x279738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27973c: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x27973Cu;
    SET_GPR_U32(ctx, 31, 0x279744u);
    ctx->pc = 0x279740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27973Cu;
    // 0x279740: 0xae030114  sw          $v1, 0x114($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x27973Cu, 0x279744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279744u;
label_279744:
    // 0x279744: 0xc09e834  jal         func_27A0D0
    ctx->pc = 0x279744u;
    SET_GPR_U32(ctx, 31, 0x27974Cu);
    ctx->pc = 0x279748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279744u;
    // 0x279748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A0D0u, 0x279744u, 0x27974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27974Cu;
label_27974c:
    // 0x27974c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27974cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279754: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x279754u;
    SET_GPR_U32(ctx, 31, 0x27975Cu);
    ctx->pc = 0x279758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279754u;
    // 0x279758: 0x24a60004  addiu       $a2, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x279754u, 0x27975Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27975Cu;
label_27975c:
    // 0x27975c: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x27975cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279760: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x279760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279768: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x279768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27976c: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x27976Cu;
    SET_GPR_U32(ctx, 31, 0x279774u);
    ctx->pc = 0x279770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27976Cu;
    // 0x279770: 0xae030114  sw          $v1, 0x114($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x27976Cu, 0x279774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279774u;
label_279774:
    // 0x279774: 0xc09e834  jal         func_27A0D0
    ctx->pc = 0x279774u;
    SET_GPR_U32(ctx, 31, 0x27977Cu);
    ctx->pc = 0x279778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279774u;
    // 0x279778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A0D0u, 0x279774u, 0x27977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27977Cu;
label_27977c:
    // 0x27977c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27977cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279780: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x279780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x279784: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x279784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279788: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x279788u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27978c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27978cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279790: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x279790u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x279794: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x279794u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279798: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x279798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27979c: 0x3e00008  jr          $ra
    ctx->pc = 0x27979Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2797A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27979Cu;
        // 0x2797a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27979Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2797A4u;
    // 0x2797a4: 0x0  nop
    ctx->pc = 0x2797a4u;
    // NOP
    ctx->pc = 0x2797a8u;
}
