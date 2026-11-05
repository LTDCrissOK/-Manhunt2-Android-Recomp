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

// Function: sub_00285100
// Address: 0x285100 - 0x285210
void sub_00285100_0x285100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285100_0x285100");
#endif

    switch (ctx->pc) {
        case 0x285130u: goto label_285130;
        case 0x285158u: goto label_285158;
        case 0x28516cu: goto label_28516c;
        case 0x285178u: goto label_285178;
        case 0x285180u: goto label_285180;
        case 0x285198u: goto label_285198;
        case 0x2851acu: goto label_2851ac;
        case 0x2851d0u: goto label_2851d0;
        case 0x2851dcu: goto label_2851dc;
        case 0x2851ecu: goto label_2851ec;
        default: break;
    }

    ctx->pc = 0x285100u;

    // 0x285100: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x285100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x285104: 0xffb101d8  sd          $s1, 0x1D8($sp)
    ctx->pc = 0x285104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 17));
    // 0x285108: 0xffb001d0  sd          $s0, 0x1D0($sp)
    ctx->pc = 0x285108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 16));
    // 0x28510c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28510cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285110: 0xffb201e0  sd          $s2, 0x1E0($sp)
    ctx->pc = 0x285110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 18));
    // 0x285114: 0xffb301e8  sd          $s3, 0x1E8($sp)
    ctx->pc = 0x285114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 19));
    // 0x285118: 0xffb401f0  sd          $s4, 0x1F0($sp)
    ctx->pc = 0x285118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 20));
    // 0x28511c: 0xffbf01f8  sd          $ra, 0x1F8($sp)
    ctx->pc = 0x28511cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 31));
    // 0x285120: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x285120u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x285124: 0x3c120047  lui         $s2, 0x47
    ctx->pc = 0x285124u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)71 << 16));
    // 0x285128: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x285128u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x28512c: 0x0  nop
    ctx->pc = 0x28512cu;
    // NOP
label_285130:
    // 0x285130: 0x2a220080  slti        $v0, $s1, 0x80
    ctx->pc = 0x285130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x285134: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x285134u;
    {
        const bool branch_taken_0x285134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285134u;
        // 0x285138: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285134) {
            ctx->pc = 0x285160u;
            goto label_285160;
        }
    }
    ctx->pc = 0x28513Cu;
    // 0x28513c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x28513cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x285140: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x285140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x285144: 0x24848f20  addiu       $a0, $a0, -0x70E0
    ctx->pc = 0x285144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938400));
    // 0x285148: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x285148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28514c: 0x24a5a998  addiu       $a1, $a1, -0x5668
    ctx->pc = 0x28514cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945176));
    // 0x285150: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x285150u;
    SET_GPR_U32(ctx, 31, 0x285158u);
    ctx->pc = 0x285154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285150u;
    // 0x285154: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x285150u, 0x285158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285158u;
label_285158:
    // 0x285158: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x285158u;
    {
        const bool branch_taken_0x285158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285158) {
            ctx->pc = 0x28515Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285158u;
            // 0x28515c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285130;
        }
    }
    ctx->pc = 0x285160u;
label_285160:
    // 0x285160: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x285160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285164: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x285164u;
    SET_GPR_U32(ctx, 31, 0x28516Cu);
    ctx->pc = 0x285168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285164u;
    // 0x285168: 0x2605ec20  addiu       $a1, $s0, -0x13E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x285164u, 0x28516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28516Cu;
label_28516c:
    // 0x28516c: 0x2645a9a0  addiu       $a1, $s2, -0x5660
    ctx->pc = 0x28516cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945184));
    // 0x285170: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x285170u;
    SET_GPR_U32(ctx, 31, 0x285178u);
    ctx->pc = 0x285174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285170u;
    // 0x285174: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x285170u, 0x285178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285178u;
label_285178:
    // 0x285178: 0xc0f3bf6  jal         func_3CEFD8
    ctx->pc = 0x285178u;
    SET_GPR_U32(ctx, 31, 0x285180u);
    ctx->pc = 0x28517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285178u;
    // 0x28517c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CEFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CEFD8u, 0x285178u, 0x285180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285180u;
label_285180:
    // 0x285180: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x285180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285184: 0x6400019  bltz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x285184u;
    {
        const bool branch_taken_0x285184 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x285188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285184u;
        // 0x285188: 0x27b30080  addiu       $s3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285184) {
            ctx->pc = 0x2851ECu;
            goto label_2851ec;
        }
    }
    ctx->pc = 0x28518Cu;
    // 0x28518c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28518Cu;
    {
        const bool branch_taken_0x28518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28518Cu;
        // 0x285190: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28518c) {
            ctx->pc = 0x2851D4u;
            goto label_2851d4;
        }
    }
    ctx->pc = 0x285194u;
    // 0x285194: 0x0  nop
    ctx->pc = 0x285194u;
    // NOP
label_285198:
    // 0x285198: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x285198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x28519c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28519Cu;
    {
        const bool branch_taken_0x28519c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2851A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28519Cu;
        // 0x2851a0: 0x27b000c0  addiu       $s0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28519c) {
            ctx->pc = 0x2851D0u;
            goto label_2851d0;
        }
    }
    ctx->pc = 0x2851A4u;
    // 0x2851a4: 0xc0a13fe  jal         func_284FF8
    ctx->pc = 0x2851A4u;
    SET_GPR_U32(ctx, 31, 0x2851ACu);
    ctx->pc = 0x2851A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2851A4u;
    // 0x2851a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284FF8u, 0x2851A4u, 0x2851ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2851ACu;
label_2851ac:
    // 0x2851ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2851ACu;
    {
        const bool branch_taken_0x2851ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2851B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851ACu;
        // 0x2851b0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851ac) {
            ctx->pc = 0x2851D0u;
            goto label_2851d0;
        }
    }
    ctx->pc = 0x2851B4u;
    // 0x2851b4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2851b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2851b8: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2851b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2851bc: 0x24848f20  addiu       $a0, $a0, -0x70E0
    ctx->pc = 0x2851bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938400));
    // 0x2851c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2851c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2851c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2851c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2851c8: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x2851C8u;
    SET_GPR_U32(ctx, 31, 0x2851D0u);
    ctx->pc = 0x2851CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2851C8u;
    // 0x2851cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x2851C8u, 0x2851D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2851D0u;
label_2851d0:
    // 0x2851d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2851d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2851d4:
    // 0x2851d4: 0xc0f3c82  jal         func_3CF208
    ctx->pc = 0x2851D4u;
    SET_GPR_U32(ctx, 31, 0x2851DCu);
    ctx->pc = 0x2851D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2851D4u;
    // 0x2851d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF208u, 0x2851D4u, 0x2851DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2851DCu;
label_2851dc:
    // 0x2851dc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2851DCu;
    {
        const bool branch_taken_0x2851dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2851E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851DCu;
        // 0x2851e0: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851dc) {
            ctx->pc = 0x285198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285198;
        }
    }
    ctx->pc = 0x2851E4u;
    // 0x2851e4: 0xc0f3c28  jal         func_3CF0A0
    ctx->pc = 0x2851E4u;
    SET_GPR_U32(ctx, 31, 0x2851ECu);
    ctx->pc = 0x2851E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2851E4u;
    // 0x2851e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF0A0u, 0x2851E4u, 0x2851ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2851ECu;
label_2851ec:
    // 0x2851ec: 0xae9190d8  sw          $s1, -0x6F28($s4)
    ctx->pc = 0x2851ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294938840), GPR_U32(ctx, 17));
    // 0x2851f0: 0xdfb001d0  ld          $s0, 0x1D0($sp)
    ctx->pc = 0x2851f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2851f4: 0xdfb101d8  ld          $s1, 0x1D8($sp)
    ctx->pc = 0x2851f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2851f8: 0xdfb201e0  ld          $s2, 0x1E0($sp)
    ctx->pc = 0x2851f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2851fc: 0xdfb301e8  ld          $s3, 0x1E8($sp)
    ctx->pc = 0x2851fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x285200: 0xdfb401f0  ld          $s4, 0x1F0($sp)
    ctx->pc = 0x285200u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x285204: 0xdfbf01f8  ld          $ra, 0x1F8($sp)
    ctx->pc = 0x285204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x285208: 0x3e00008  jr          $ra
    ctx->pc = 0x285208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285208u;
        // 0x28520c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285210u;
}
