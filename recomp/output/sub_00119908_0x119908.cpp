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

// Function: sub_00119908
// Address: 0x119908 - 0x119a28
void sub_00119908_0x119908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119908_0x119908");
#endif

    switch (ctx->pc) {
        case 0x119940u: goto label_119940;
        case 0x119958u: goto label_119958;
        case 0x119974u: goto label_119974;
        case 0x11998cu: goto label_11998c;
        case 0x1199acu: goto label_1199ac;
        case 0x1199c0u: goto label_1199c0;
        case 0x1199d0u: goto label_1199d0;
        case 0x1199f4u: goto label_1199f4;
        case 0x119a04u: goto label_119a04;
        default: break;
    }

    ctx->pc = 0x119908u;

    // 0x119908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11990c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11990cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119910: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x119910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x119914: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x119914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119918: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x119918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11991c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11991cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119920: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x119920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x119924: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x119924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119928: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x119928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x11992c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x11992cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119930: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119934: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x119938: 0xc046c94  jal         func_11B250
    ctx->pc = 0x119938u;
    SET_GPR_U32(ctx, 31, 0x119940u);
    ctx->pc = 0x11993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119938u;
    // 0x11993c: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B250u, 0x119938u, 0x119940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119940u;
label_119940:
    // 0x119940: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x119940u;
    {
        const bool branch_taken_0x119940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119940) {
            ctx->pc = 0x119944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119940u;
            // 0x119944: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119A08u;
            goto label_119a08;
        }
    }
    ctx->pc = 0x119948u;
    // 0x119948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11994c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11994cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119950: 0xc046c20  jal         func_11B080
    ctx->pc = 0x119950u;
    SET_GPR_U32(ctx, 31, 0x119958u);
    ctx->pc = 0x119954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119950u;
    // 0x119954: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B080u, 0x119950u, 0x119958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119958u;
label_119958:
    // 0x119958: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11995c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x11995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x119960: 0x12220028  beq         $s1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x119960u;
    {
        const bool branch_taken_0x119960 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x119964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119960u;
        // 0x119964: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119960) {
            ctx->pc = 0x119A04u;
            goto label_119a04;
        }
    }
    ctx->pc = 0x119968u;
    // 0x119968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11996c: 0xc046c76  jal         func_11B1D8
    ctx->pc = 0x11996Cu;
    SET_GPR_U32(ctx, 31, 0x119974u);
    ctx->pc = 0x119970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11996Cu;
    // 0x119970: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B1D8u, 0x11996Cu, 0x119974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119974u;
label_119974:
    // 0x119974: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119978: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x119978u;
    {
        const bool branch_taken_0x119978 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119978u;
        // 0x11997c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119978) {
            ctx->pc = 0x119A04u;
            goto label_119a04;
        }
    }
    ctx->pc = 0x119980u;
    // 0x119980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119984: 0xc046e1e  jal         func_11B878
    ctx->pc = 0x119984u;
    SET_GPR_U32(ctx, 31, 0x11998Cu);
    ctx->pc = 0x119988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119984u;
    // 0x119988: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B878u, 0x119984u, 0x11998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11998Cu;
label_11998c:
    // 0x11998c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11998Cu;
    {
        const bool branch_taken_0x11998c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11998Cu;
        // 0x119990: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11998c) {
            ctx->pc = 0x1199ACu;
            goto label_1199ac;
        }
    }
    ctx->pc = 0x119994u;
    // 0x119994: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x119994u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11999c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11999cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1199a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1199a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1199a4: 0xc046b42  jal         func_11AD08
    ctx->pc = 0x1199A4u;
    SET_GPR_U32(ctx, 31, 0x1199ACu);
    ctx->pc = 0x1199A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1199A4u;
    // 0x1199a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD08u, 0x1199A4u, 0x1199ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1199ACu;
label_1199ac:
    // 0x1199ac: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1199ACu;
    {
        const bool branch_taken_0x1199ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199ACu;
        // 0x1199b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199ac) {
            ctx->pc = 0x1199C0u;
            goto label_1199c0;
        }
    }
    ctx->pc = 0x1199B4u;
    // 0x1199b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1199b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1199b8: 0xc046dc6  jal         func_11B718
    ctx->pc = 0x1199B8u;
    SET_GPR_U32(ctx, 31, 0x1199C0u);
    ctx->pc = 0x1199BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1199B8u;
    // 0x1199bc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B718u, 0x1199B8u, 0x1199C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1199C0u;
label_1199c0:
    // 0x1199c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1199c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1199c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1199c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1199c8: 0xc046de6  jal         func_11B798
    ctx->pc = 0x1199C8u;
    SET_GPR_U32(ctx, 31, 0x1199D0u);
    ctx->pc = 0x1199CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1199C8u;
    // 0x1199cc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B798u, 0x1199C8u, 0x1199D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1199D0u;
label_1199d0:
    // 0x1199d0: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x1199d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1199d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1199D4u;
    {
        const bool branch_taken_0x1199d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199D4u;
        // 0x1199d8: 0x2a220007  slti        $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199d4) {
            ctx->pc = 0x119A04u;
            goto label_119a04;
        }
    }
    ctx->pc = 0x1199DCu;
    // 0x1199dc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1199DCu;
    {
        const bool branch_taken_0x1199dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1199E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199DCu;
        // 0x1199e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199dc) {
            ctx->pc = 0x119A08u;
            goto label_119a08;
        }
    }
    ctx->pc = 0x1199E4u;
    // 0x1199e4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1199e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1199e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1199e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1199ec: 0xc04785a  jal         func_11E168
    ctx->pc = 0x1199ECu;
    SET_GPR_U32(ctx, 31, 0x1199F4u);
    ctx->pc = 0x1199F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1199ECu;
    // 0x1199f0: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x1199ECu, 0x1199F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1199F4u;
label_1199f4:
    // 0x1199f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1199F4u;
    {
        const bool branch_taken_0x1199f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199F4u;
        // 0x1199f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199f4) {
            ctx->pc = 0x119A08u;
            goto label_119a08;
        }
    }
    ctx->pc = 0x1199FCu;
    // 0x1199fc: 0xc043a60  jal         func_10E980
    ctx->pc = 0x1199FCu;
    SET_GPR_U32(ctx, 31, 0x119A04u);
    ctx->pc = 0x119A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1199FCu;
    // 0x119a00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E980u, 0x1199FCu, 0x119A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A04u;
label_119a04:
    // 0x119a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_119a08:
    // 0x119a08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119a0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x119a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119a10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x119a10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x119a14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x119a14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119a18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x119a18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x119a1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119a20: 0x3e00008  jr          $ra
    ctx->pc = 0x119A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A20u;
        // 0x119a24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119A28u;
}
