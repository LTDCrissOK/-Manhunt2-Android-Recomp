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

// Function: sub_0010D128
// Address: 0x10d128 - 0x10d3b8
void sub_0010D128_0x10d128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D128_0x10d128");
#endif

    switch (ctx->pc) {
        case 0x10d160u: goto label_10d160;
        case 0x10d190u: goto label_10d190;
        case 0x10d1a0u: goto label_10d1a0;
        case 0x10d1b4u: goto label_10d1b4;
        case 0x10d1c8u: goto label_10d1c8;
        case 0x10d1d4u: goto label_10d1d4;
        case 0x10d1dcu: goto label_10d1dc;
        case 0x10d1e8u: goto label_10d1e8;
        case 0x10d1f8u: goto label_10d1f8;
        case 0x10d244u: goto label_10d244;
        case 0x10d270u: goto label_10d270;
        case 0x10d278u: goto label_10d278;
        case 0x10d288u: goto label_10d288;
        case 0x10d2bcu: goto label_10d2bc;
        case 0x10d2d0u: goto label_10d2d0;
        case 0x10d2d8u: goto label_10d2d8;
        case 0x10d2e8u: goto label_10d2e8;
        case 0x10d2f4u: goto label_10d2f4;
        case 0x10d314u: goto label_10d314;
        case 0x10d324u: goto label_10d324;
        case 0x10d330u: goto label_10d330;
        case 0x10d338u: goto label_10d338;
        case 0x10d34cu: goto label_10d34c;
        case 0x10d368u: goto label_10d368;
        case 0x10d384u: goto label_10d384;
        default: break;
    }

    ctx->pc = 0x10d128u;

    // 0x10d128: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10d128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10d12c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10d130: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x10d130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x10d134: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10d134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d138: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x10d138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x10d13c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x10d13cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d140: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10d140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10d144: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x10d144u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d148: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x10d148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10d14c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d150: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10d150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10d154: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10d154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10d158: 0xc05a6bc  jal         func_169AF0
    ctx->pc = 0x10D158u;
    SET_GPR_U32(ctx, 31, 0x10D160u);
    ctx->pc = 0x10D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D158u;
    // 0x10d15c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AF0u, 0x10D158u, 0x10D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D160u;
label_10d160:
    // 0x10d160: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10d160u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d164: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x10d164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x10d168: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10D168u;
    {
        const bool branch_taken_0x10d168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D168u;
        // 0x10d16c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d168) {
            ctx->pc = 0x10D1A4u;
            goto label_10d1a4;
        }
    }
    ctx->pc = 0x10D170u;
    // 0x10d170: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x10d170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x10d174: 0x2442a780  addiu       $v0, $v0, -0x5880
    ctx->pc = 0x10d174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944640));
    // 0x10d178: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10d178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d17c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10d17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d180: 0x800008  jr          $a0
    ctx->pc = 0x10D180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10D188u: goto label_10d188;
            case 0x10D198u: goto label_10d198;
            case 0x10D1A4u: goto label_10d1a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D180u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10D188u;
label_10d188:
    // 0x10d188: 0xc05a6c6  jal         func_169B18
    ctx->pc = 0x10D188u;
    SET_GPR_U32(ctx, 31, 0x10D190u);
    ctx->pc = 0x10D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D188u;
    // 0x10d18c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B18u, 0x10D188u, 0x10D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D190u;
label_10d190:
    // 0x10d190: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10D190u;
    {
        const bool branch_taken_0x10d190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D190u;
        // 0x10d194: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d190) {
            ctx->pc = 0x10D1A4u;
            goto label_10d1a4;
        }
    }
    ctx->pc = 0x10D198u;
label_10d198:
    // 0x10d198: 0xc05a6d0  jal         func_169B40
    ctx->pc = 0x10D198u;
    SET_GPR_U32(ctx, 31, 0x10D1A0u);
    ctx->pc = 0x10D19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D198u;
    // 0x10d19c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B40u, 0x10D198u, 0x10D1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1A0u;
label_10d1a0:
    // 0x10d1a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10d1a4:
    // 0x10d1a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10d1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d1a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10d1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d1ac: 0xc0433b2  jal         func_10CEC8
    ctx->pc = 0x10D1ACu;
    SET_GPR_U32(ctx, 31, 0x10D1B4u);
    ctx->pc = 0x10D1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D1ACu;
    // 0x10d1b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEC8u, 0x10D1ACu, 0x10D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1B4u;
label_10d1b4:
    // 0x10d1b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10d1b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d1b8: 0x12200076  beqz        $s1, . + 4 + (0x76 << 2)
    ctx->pc = 0x10D1B8u;
    {
        const bool branch_taken_0x10d1b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D1B8u;
        // 0x10d1bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d1b8) {
            ctx->pc = 0x10D394u;
            goto label_10d394;
        }
    }
    ctx->pc = 0x10D1C0u;
    // 0x10d1c0: 0xc05a788  jal         func_169E20
    ctx->pc = 0x10D1C0u;
    SET_GPR_U32(ctx, 31, 0x10D1C8u);
    ctx->pc = 0x10D1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D1C0u;
    // 0x10d1c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E20u, 0x10D1C0u, 0x10D1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1C8u;
label_10d1c8:
    // 0x10d1c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10d1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d1cc: 0xc05a648  jal         func_169920
    ctx->pc = 0x10D1CCu;
    SET_GPR_U32(ctx, 31, 0x10D1D4u);
    ctx->pc = 0x10D1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D1CCu;
    // 0x10d1d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169920u, 0x10D1CCu, 0x10D1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1D4u;
label_10d1d4:
    // 0x10d1d4: 0xc05a6da  jal         func_169B68
    ctx->pc = 0x10D1D4u;
    SET_GPR_U32(ctx, 31, 0x10D1DCu);
    ctx->pc = 0x10D1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D1D4u;
    // 0x10d1d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B68u, 0x10D1D4u, 0x10D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1DCu;
label_10d1dc:
    // 0x10d1dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d1e0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x10D1E0u;
    SET_GPR_U32(ctx, 31, 0x10D1E8u);
    ctx->pc = 0x10D1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D1E0u;
    // 0x10d1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x10D1E0u, 0x10D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1E8u;
label_10d1e8:
    // 0x10d1e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10D1E8u;
    {
        const bool branch_taken_0x10d1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D1E8u;
        // 0x10d1ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d1e8) {
            ctx->pc = 0x10D244u;
            goto label_10d244;
        }
    }
    ctx->pc = 0x10D1F0u;
    // 0x10d1f0: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10D1F0u;
    SET_GPR_U32(ctx, 31, 0x10D1F8u);
    ctx->pc = 0x10D1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D1F0u;
    // 0x10d1f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10D1F0u, 0x10D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1F8u;
label_10d1f8:
    // 0x10d1f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10d1f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d1fc: 0x38620030  xori        $v0, $v1, 0x30
    ctx->pc = 0x10d1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)48);
    // 0x10d200: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10D200u;
    {
        const bool branch_taken_0x10d200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D200u;
        // 0x10d204: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d200) {
            ctx->pc = 0x10D244u;
            goto label_10d244;
        }
    }
    ctx->pc = 0x10D208u;
    // 0x10d208: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x10d208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10d20c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10d20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d210: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10d210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10d214: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10d214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10d218: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x10d218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10d21c: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x10d21cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x10d220: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D220u;
    {
        const bool branch_taken_0x10d220 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d220) {
            ctx->pc = 0x10D224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D220u;
            // 0x10d224: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D248u;
            goto label_10d248;
        }
    }
    ctx->pc = 0x10D228u;
    // 0x10d228: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x10d228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10d22c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10d22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d230: 0x5200b  movn        $a0, $zero, $a1
    ctx->pc = 0x10d230u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x10d234: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D234u;
    {
        const bool branch_taken_0x10d234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D234u;
        // 0x10d238: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d234) {
            ctx->pc = 0x10D248u;
            goto label_10d248;
        }
    }
    ctx->pc = 0x10D23Cu;
    // 0x10d23c: 0xc05a616  jal         func_169858
    ctx->pc = 0x10D23Cu;
    SET_GPR_U32(ctx, 31, 0x10D244u);
    ctx->pc = 0x10D240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D23Cu;
    // 0x10d240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169858u, 0x10D23Cu, 0x10D244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D244u;
label_10d244:
    // 0x10d244: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x10d244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_10d248:
    // 0x10d248: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10D248u;
    {
        const bool branch_taken_0x10d248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D248u;
        // 0x10d24c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d248) {
            ctx->pc = 0x10D288u;
            goto label_10d288;
        }
    }
    ctx->pc = 0x10D250u;
    // 0x10d250: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x10d250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x10d254: 0x2442a7c0  addiu       $v0, $v0, -0x5840
    ctx->pc = 0x10d254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944704));
    // 0x10d258: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10d258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d25c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10d25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d260: 0x800008  jr          $a0
    ctx->pc = 0x10D260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10D268u: goto label_10d268;
            case 0x10D288u: goto label_10d288;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D260u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10D268u;
label_10d268:
    // 0x10d268: 0xc05a786  jal         func_169E18
    ctx->pc = 0x10D268u;
    SET_GPR_U32(ctx, 31, 0x10D270u);
    ctx->pc = 0x10D26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D268u;
    // 0x10d26c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E18u, 0x10D268u, 0x10D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D270u;
label_10d270:
    // 0x10d270: 0xc0460e4  jal         func_118390
    ctx->pc = 0x10D270u;
    SET_GPR_U32(ctx, 31, 0x10D278u);
    ctx->pc = 0x10D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D270u;
    // 0x10d274: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x10D270u, 0x10D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D278u;
label_10d278:
    // 0x10d278: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D278u;
    {
        const bool branch_taken_0x10d278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D278u;
        // 0x10d27c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d278) {
            ctx->pc = 0x10D28Cu;
            goto label_10d28c;
        }
    }
    ctx->pc = 0x10D280u;
    // 0x10d280: 0xc05a5f6  jal         func_1697D8
    ctx->pc = 0x10D280u;
    SET_GPR_U32(ctx, 31, 0x10D288u);
    ctx->pc = 0x10D284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D280u;
    // 0x10d284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697D8u, 0x10D280u, 0x10D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D288u;
label_10d288:
    // 0x10d288: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10d288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10d28c:
    // 0x10d28c: 0x56700006  bnel        $s3, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D28Cu;
    {
        const bool branch_taken_0x10d28c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x10d28c) {
            ctx->pc = 0x10D290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D28Cu;
            // 0x10d290: 0x8e4300c0  lw          $v1, 0xC0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D2A8u;
            goto label_10d2a8;
        }
    }
    ctx->pc = 0x10D294u;
    // 0x10d294: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x10d294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x10d298: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x10d298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x10d29c: 0x8e4300bc  lw          $v1, 0xBC($s2)
    ctx->pc = 0x10d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x10d2a0: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x10d2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
    // 0x10d2a4: 0x8e4300c0  lw          $v1, 0xC0($s2)
    ctx->pc = 0x10d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_10d2a8:
    // 0x10d2a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d2ac: 0xae23008c  sw          $v1, 0x8C($s1)
    ctx->pc = 0x10d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
    // 0x10d2b0: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x10d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x10d2b4: 0xc05a786  jal         func_169E18
    ctx->pc = 0x10D2B4u;
    SET_GPR_U32(ctx, 31, 0x10D2BCu);
    ctx->pc = 0x10D2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D2B4u;
    // 0x10d2b8: 0xae220090  sw          $v0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E18u, 0x10D2B4u, 0x10D2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D2BCu;
label_10d2bc:
    // 0x10d2bc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x10D2BCu;
    {
        const bool branch_taken_0x10d2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2BCu;
        // 0x10d2c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2bc) {
            ctx->pc = 0x10D390u;
            goto label_10d390;
        }
    }
    ctx->pc = 0x10D2C4u;
    // 0x10d2c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10d2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d2c8: 0xc0433ec  jal         func_10CFB0
    ctx->pc = 0x10D2C8u;
    SET_GPR_U32(ctx, 31, 0x10D2D0u);
    ctx->pc = 0x10D2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D2C8u;
    // 0x10d2cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CFB0u, 0x10D2C8u, 0x10D2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D2D0u;
label_10d2d0:
    // 0x10d2d0: 0xc05a602  jal         func_169808
    ctx->pc = 0x10D2D0u;
    SET_GPR_U32(ctx, 31, 0x10D2D8u);
    ctx->pc = 0x10D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D2D0u;
    // 0x10d2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169808u, 0x10D2D0u, 0x10D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D2D8u;
label_10d2d8:
    // 0x10d2d8: 0x14500015  bne         $v0, $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10D2D8u;
    {
        const bool branch_taken_0x10d2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x10d2d8) {
            ctx->pc = 0x10D330u;
            goto label_10d330;
        }
    }
    ctx->pc = 0x10D2E0u;
    // 0x10d2e0: 0xc05a6d0  jal         func_169B40
    ctx->pc = 0x10D2E0u;
    SET_GPR_U32(ctx, 31, 0x10D2E8u);
    ctx->pc = 0x10D2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D2E0u;
    // 0x10d2e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B40u, 0x10D2E0u, 0x10D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D2E8u;
label_10d2e8:
    // 0x10d2e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d2ec: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x10D2ECu;
    SET_GPR_U32(ctx, 31, 0x10D2F4u);
    ctx->pc = 0x10D2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D2ECu;
    // 0x10d2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x10D2ECu, 0x10D2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D2F4u;
label_10d2f4:
    // 0x10d2f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10D2F4u;
    {
        const bool branch_taken_0x10d2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2F4u;
        // 0x10d2f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2f4) {
            ctx->pc = 0x10D330u;
            goto label_10d330;
        }
    }
    ctx->pc = 0x10D2FCu;
    // 0x10d2fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10d300: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x10d300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x10d304: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10d304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d308: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x10d308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d30c: 0xc042ed4  jal         func_10BB50
    ctx->pc = 0x10D30Cu;
    SET_GPR_U32(ctx, 31, 0x10D314u);
    ctx->pc = 0x10D310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D30Cu;
    // 0x10d310: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB50u, 0x10D30Cu, 0x10D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D314u;
label_10d314:
    // 0x10d314: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D314u;
    {
        const bool branch_taken_0x10d314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D314u;
        // 0x10d318: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d314) {
            ctx->pc = 0x10D330u;
            goto label_10d330;
        }
    }
    ctx->pc = 0x10D31Cu;
    // 0x10d31c: 0xc05a61a  jal         func_169868
    ctx->pc = 0x10D31Cu;
    SET_GPR_U32(ctx, 31, 0x10D324u);
    ctx->pc = 0x10D320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D31Cu;
    // 0x10d320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169868u, 0x10D31Cu, 0x10D324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D324u;
label_10d324:
    // 0x10d324: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x10d324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10d328: 0xc05a61e  jal         func_169878
    ctx->pc = 0x10D328u;
    SET_GPR_U32(ctx, 31, 0x10D330u);
    ctx->pc = 0x10D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D328u;
    // 0x10d32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169878u, 0x10D328u, 0x10D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D330u;
label_10d330:
    // 0x10d330: 0xc05a6e4  jal         func_169B90
    ctx->pc = 0x10D330u;
    SET_GPR_U32(ctx, 31, 0x10D338u);
    ctx->pc = 0x10D334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D330u;
    // 0x10d334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B90u, 0x10D330u, 0x10D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D338u;
label_10d338:
    // 0x10d338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d33c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10D33Cu;
    {
        const bool branch_taken_0x10d33c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D33Cu;
        // 0x10d340: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d33c) {
            ctx->pc = 0x10D394u;
            goto label_10d394;
        }
    }
    ctx->pc = 0x10D344u;
    // 0x10d344: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x10D344u;
    SET_GPR_U32(ctx, 31, 0x10D34Cu);
    ctx->pc = 0x10D348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D344u;
    // 0x10d348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x10D344u, 0x10D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D34Cu;
label_10d34c:
    // 0x10d34c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10D34Cu;
    {
        const bool branch_taken_0x10d34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D34Cu;
        // 0x10d350: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d34c) {
            ctx->pc = 0x10D394u;
            goto label_10d394;
        }
    }
    ctx->pc = 0x10D354u;
    // 0x10d354: 0x56a00010  bnel        $s5, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x10D354u;
    {
        const bool branch_taken_0x10d354 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d354) {
            ctx->pc = 0x10D358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D354u;
            // 0x10d358: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D398u;
            goto label_10d398;
        }
    }
    ctx->pc = 0x10D35Cu;
    // 0x10d35c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10d35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d360: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10D360u;
    SET_GPR_U32(ctx, 31, 0x10D368u);
    ctx->pc = 0x10D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D360u;
    // 0x10d364: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10D360u, 0x10D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D368u;
label_10d368:
    // 0x10d368: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10d368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10d36c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d370: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10d370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10d374: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10d374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10d378: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x10d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10d37c: 0xc05a602  jal         func_169808
    ctx->pc = 0x10D37Cu;
    SET_GPR_U32(ctx, 31, 0x10D384u);
    ctx->pc = 0x10D380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D37Cu;
    // 0x10d380: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169808u, 0x10D37Cu, 0x10D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D384u;
label_10d384:
    // 0x10d384: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10d384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10d388: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x10D388u;
    {
        const bool branch_taken_0x10d388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10d388) {
            ctx->pc = 0x10D38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D388u;
            // 0x10d38c: 0xae300088  sw          $s0, 0x88($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D390u;
            goto label_10d390;
        }
    }
    ctx->pc = 0x10D390u;
label_10d390:
    // 0x10d390: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10d390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d394:
    // 0x10d394: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10d394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10d398:
    // 0x10d398: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10d398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d39c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10d39cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d3a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x10d3a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10d3a4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x10d3a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d3a8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x10d3a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10d3ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10d3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3B0u;
        // 0x10d3b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D3B8u;
}
