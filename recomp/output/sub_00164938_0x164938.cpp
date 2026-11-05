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

// Function: sub_00164938
// Address: 0x164938 - 0x164b28
void sub_00164938_0x164938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164938_0x164938");
#endif

    switch (ctx->pc) {
        case 0x164970u: goto label_164970;
        case 0x164988u: goto label_164988;
        case 0x1649c0u: goto label_1649c0;
        case 0x1649d4u: goto label_1649d4;
        case 0x1649e8u: goto label_1649e8;
        case 0x1649fcu: goto label_1649fc;
        case 0x164a10u: goto label_164a10;
        case 0x164a24u: goto label_164a24;
        case 0x164a38u: goto label_164a38;
        case 0x164a88u: goto label_164a88;
        case 0x164ab0u: goto label_164ab0;
        case 0x164abcu: goto label_164abc;
        case 0x164accu: goto label_164acc;
        case 0x164af0u: goto label_164af0;
        case 0x164b00u: goto label_164b00;
        case 0x164b10u: goto label_164b10;
        default: break;
    }

    ctx->pc = 0x164938u;

    // 0x164938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x164938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16493c: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x16493cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x164940: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164944: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x164944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    // 0x164948: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16494c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16494cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164950: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x164950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x164954: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x164954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x164958: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x164958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16495c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x16495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x164960: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x164960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x164964: 0x8e0602e0  lw          $a2, 0x2E0($s0)
    ctx->pc = 0x164964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x164968: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x164968u;
    SET_GPR_U32(ctx, 31, 0x164970u);
    ctx->pc = 0x16496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164968u;
    // 0x16496c: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x164968u, 0x164970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164970u;
label_164970:
    // 0x164970: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x164970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164974: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x164974u;
    {
        const bool branch_taken_0x164974 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x164974) {
            ctx->pc = 0x164978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164974u;
            // 0x164978: 0x8e030304  lw          $v1, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164990u;
            goto label_164990;
        }
    }
    ctx->pc = 0x16497Cu;
    // 0x16497c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164980: 0xc04f098  jal         func_13C260
    ctx->pc = 0x164980u;
    SET_GPR_U32(ctx, 31, 0x164988u);
    ctx->pc = 0x164984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164980u;
    // 0x164984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C260u, 0x164980u, 0x164988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164988u;
label_164988:
    // 0x164988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x164988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16498c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x16498cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_164990:
    // 0x164990: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x164990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x164994: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x164994u;
    {
        const bool branch_taken_0x164994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164994u;
        // 0x164998: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164994) {
            ctx->pc = 0x164A2Cu;
            goto label_164a2c;
        }
    }
    ctx->pc = 0x16499Cu;
    // 0x16499c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16499cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1649a0: 0x2442ef20  addiu       $v0, $v0, -0x10E0
    ctx->pc = 0x1649a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962976));
    // 0x1649a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1649a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1649a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1649a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1649ac: 0x800008  jr          $a0
    ctx->pc = 0x1649ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1649B4u: goto label_1649b4;
            case 0x1649C8u: goto label_1649c8;
            case 0x1649DCu: goto label_1649dc;
            case 0x1649F0u: goto label_1649f0;
            case 0x164A04u: goto label_164a04;
            case 0x164A18u: goto label_164a18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1649ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1649B4u;
label_1649b4:
    // 0x1649b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1649b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649b8: 0xc0593aa  jal         func_164EA8
    ctx->pc = 0x1649B8u;
    SET_GPR_U32(ctx, 31, 0x1649C0u);
    ctx->pc = 0x1649BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649B8u;
    // 0x1649bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA8u, 0x1649B8u, 0x1649C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649C0u;
label_1649c0:
    // 0x1649c0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1649C0u;
    {
        const bool branch_taken_0x1649c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1649C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649C0u;
        // 0x1649c4: 0x8e0203b4  lw          $v0, 0x3B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1649c0) {
            ctx->pc = 0x164A3Cu;
            goto label_164a3c;
        }
    }
    ctx->pc = 0x1649C8u;
label_1649c8:
    // 0x1649c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1649c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649cc: 0xc05941e  jal         func_165078
    ctx->pc = 0x1649CCu;
    SET_GPR_U32(ctx, 31, 0x1649D4u);
    ctx->pc = 0x1649D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649CCu;
    // 0x1649d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165078u, 0x1649CCu, 0x1649D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649D4u;
label_1649d4:
    // 0x1649d4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1649D4u;
    {
        const bool branch_taken_0x1649d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1649D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649D4u;
        // 0x1649d8: 0x8e0203b4  lw          $v0, 0x3B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1649d4) {
            ctx->pc = 0x164A3Cu;
            goto label_164a3c;
        }
    }
    ctx->pc = 0x1649DCu;
label_1649dc:
    // 0x1649dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1649dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649e0: 0xc05948e  jal         func_165238
    ctx->pc = 0x1649E0u;
    SET_GPR_U32(ctx, 31, 0x1649E8u);
    ctx->pc = 0x1649E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649E0u;
    // 0x1649e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165238u, 0x1649E0u, 0x1649E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649E8u;
label_1649e8:
    // 0x1649e8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1649E8u;
    {
        const bool branch_taken_0x1649e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1649ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649E8u;
        // 0x1649ec: 0x8e0203b4  lw          $v0, 0x3B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1649e8) {
            ctx->pc = 0x164A3Cu;
            goto label_164a3c;
        }
    }
    ctx->pc = 0x1649F0u;
label_1649f0:
    // 0x1649f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1649f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649f4: 0xc0594bc  jal         func_1652F0
    ctx->pc = 0x1649F4u;
    SET_GPR_U32(ctx, 31, 0x1649FCu);
    ctx->pc = 0x1649F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649F4u;
    // 0x1649f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1652F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1652F0u, 0x1649F4u, 0x1649FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649FCu;
label_1649fc:
    // 0x1649fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1649FCu;
    {
        const bool branch_taken_0x1649fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649FCu;
        // 0x164a00: 0x8e0203b4  lw          $v0, 0x3B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1649fc) {
            ctx->pc = 0x164A3Cu;
            goto label_164a3c;
        }
    }
    ctx->pc = 0x164A04u;
label_164a04:
    // 0x164a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a08: 0xc059502  jal         func_165408
    ctx->pc = 0x164A08u;
    SET_GPR_U32(ctx, 31, 0x164A10u);
    ctx->pc = 0x164A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A08u;
    // 0x164a0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165408u, 0x164A08u, 0x164A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A10u;
label_164a10:
    // 0x164a10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x164A10u;
    {
        const bool branch_taken_0x164a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A10u;
        // 0x164a14: 0x8e0203b4  lw          $v0, 0x3B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a10) {
            ctx->pc = 0x164A3Cu;
            goto label_164a3c;
        }
    }
    ctx->pc = 0x164A18u;
label_164a18:
    // 0x164a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a1c: 0xc059548  jal         func_165520
    ctx->pc = 0x164A1Cu;
    SET_GPR_U32(ctx, 31, 0x164A24u);
    ctx->pc = 0x164A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A1Cu;
    // 0x164a20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165520u, 0x164A1Cu, 0x164A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A24u;
label_164a24:
    // 0x164a24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x164A24u;
    {
        const bool branch_taken_0x164a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A24u;
        // 0x164a28: 0x8e0203b4  lw          $v0, 0x3B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a24) {
            ctx->pc = 0x164A3Cu;
            goto label_164a3c;
        }
    }
    ctx->pc = 0x164A2Cu;
label_164a2c:
    // 0x164a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a30: 0xc05959e  jal         func_165678
    ctx->pc = 0x164A30u;
    SET_GPR_U32(ctx, 31, 0x164A38u);
    ctx->pc = 0x164A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A30u;
    // 0x164a34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x164A30u, 0x164A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A38u;
label_164a38:
    // 0x164a38: 0x8e0203b4  lw          $v0, 0x3B4($s0)
    ctx->pc = 0x164a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
label_164a3c:
    // 0x164a3c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x164A3Cu;
    {
        const bool branch_taken_0x164a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164a3c) {
            ctx->pc = 0x164A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164A3Cu;
            // 0x164a40: 0x8e030304  lw          $v1, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164A68u;
            goto label_164a68;
        }
    }
    ctx->pc = 0x164A44u;
    // 0x164a44: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x164a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x164a48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x164a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a4c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x164a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x164a50: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x164a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x164a54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x164A54u;
    {
        const bool branch_taken_0x164a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A54u;
        // 0x164a58: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a54) {
            ctx->pc = 0x164A60u;
            goto label_164a60;
        }
    }
    ctx->pc = 0x164A5Cu;
    // 0x164a5c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x164a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_164a60:
    // 0x164a60: 0xae0403b4  sw          $a0, 0x3B4($s0)
    ctx->pc = 0x164a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 4));
    // 0x164a64: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x164a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_164a68:
    // 0x164a68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164a6c: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x164A6Cu;
    {
        const bool branch_taken_0x164a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A6Cu;
        // 0x164a70: 0x8e120398  lw          $s2, 0x398($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a6c) {
            ctx->pc = 0x164AD4u;
            goto label_164ad4;
        }
    }
    ctx->pc = 0x164A74u;
    // 0x164a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x164a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164a7c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x164a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164a80: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x164A80u;
    SET_GPR_U32(ctx, 31, 0x164A88u);
    ctx->pc = 0x164A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A80u;
    // 0x164a84: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x164A80u, 0x164A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A88u;
label_164a88:
    // 0x164a88: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x164A88u;
    {
        const bool branch_taken_0x164a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164a88) {
            ctx->pc = 0x164A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164A88u;
            // 0x164a8c: 0x8e030304  lw          $v1, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164AD8u;
            goto label_164ad8;
        }
    }
    ctx->pc = 0x164A90u;
    // 0x164a90: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x164A90u;
    {
        const bool branch_taken_0x164a90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a90) {
            ctx->pc = 0x164AB4u;
            goto label_164ab4;
        }
    }
    ctx->pc = 0x164A98u;
    // 0x164a98: 0x8e0203b4  lw          $v0, 0x3B4($s0)
    ctx->pc = 0x164a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
    // 0x164a9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164A9Cu;
    {
        const bool branch_taken_0x164a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a9c) {
            ctx->pc = 0x164AB4u;
            goto label_164ab4;
        }
    }
    ctx->pc = 0x164AA4u;
    // 0x164aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164aa8: 0xc05976c  jal         func_165DB0
    ctx->pc = 0x164AA8u;
    SET_GPR_U32(ctx, 31, 0x164AB0u);
    ctx->pc = 0x164AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164AA8u;
    // 0x164aac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165DB0u, 0x164AA8u, 0x164AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164AB0u;
label_164ab0:
    // 0x164ab0: 0xae0003b4  sw          $zero, 0x3B4($s0)
    ctx->pc = 0x164ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 0));
label_164ab4:
    // 0x164ab4: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x164AB4u;
    SET_GPR_U32(ctx, 31, 0x164ABCu);
    ctx->pc = 0x164AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164AB4u;
    // 0x164ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x164AB4u, 0x164ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164ABCu;
label_164abc:
    // 0x164abc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x164abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x164ac0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x164ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ac4: 0xc042128  jal         func_1084A0
    ctx->pc = 0x164AC4u;
    SET_GPR_U32(ctx, 31, 0x164ACCu);
    ctx->pc = 0x164AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164AC4u;
    // 0x164ac8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x164AC4u, 0x164ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164ACCu;
label_164acc:
    // 0x164acc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x164ACCu;
    {
        const bool branch_taken_0x164acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164ACCu;
        // 0x164ad0: 0xae000398  sw          $zero, 0x398($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164acc) {
            ctx->pc = 0x164B10u;
            goto label_164b10;
        }
    }
    ctx->pc = 0x164AD4u;
label_164ad4:
    // 0x164ad4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x164ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_164ad8:
    // 0x164ad8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x164ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x164adc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x164ADCu;
    {
        const bool branch_taken_0x164adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x164adc) {
            ctx->pc = 0x164AF8u;
            goto label_164af8;
        }
    }
    ctx->pc = 0x164AE4u;
    // 0x164ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ae8: 0xc0597d2  jal         func_165F48
    ctx->pc = 0x164AE8u;
    SET_GPR_U32(ctx, 31, 0x164AF0u);
    ctx->pc = 0x164AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164AE8u;
    // 0x164aec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F48u, 0x164AE8u, 0x164AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164AF0u;
label_164af0:
    // 0x164af0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164af4: 0xae020398  sw          $v0, 0x398($s0)
    ctx->pc = 0x164af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 2));
label_164af8:
    // 0x164af8: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x164AF8u;
    SET_GPR_U32(ctx, 31, 0x164B00u);
    ctx->pc = 0x164AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164AF8u;
    // 0x164afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x164AF8u, 0x164B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B00u;
label_164b00:
    // 0x164b00: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x164b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x164b04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x164b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b08: 0xc042128  jal         func_1084A0
    ctx->pc = 0x164B08u;
    SET_GPR_U32(ctx, 31, 0x164B10u);
    ctx->pc = 0x164B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164B08u;
    // 0x164b0c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x164B08u, 0x164B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B10u;
label_164b10:
    // 0x164b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164b14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164b18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164b18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164b1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x164b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164b20: 0x3e00008  jr          $ra
    ctx->pc = 0x164B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B20u;
        // 0x164b24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164B28u;
}
