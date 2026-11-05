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

// Function: sub_00228568
// Address: 0x228568 - 0x2286b8
void sub_00228568_0x228568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228568_0x228568");
#endif

    switch (ctx->pc) {
        case 0x228634u: goto label_228634;
        case 0x228698u: goto label_228698;
        default: break;
    }

    ctx->pc = 0x228568u;

    // 0x228568: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22856c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x228570: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x228570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x228574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228578: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x228578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22857c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22857cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x228580: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x228580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x228584: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x228584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x228588: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x228588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x22858c: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x22858cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x228590: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x228590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x228594: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228594u;
    {
        const bool branch_taken_0x228594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228594u;
        // 0x228598: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228594) {
            ctx->pc = 0x2285ACu;
            goto label_2285ac;
        }
    }
    ctx->pc = 0x22859Cu;
    // 0x22859c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22859Cu;
    {
        const bool branch_taken_0x22859c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22859c) {
            ctx->pc = 0x2285ACu;
            goto label_2285ac;
        }
    }
    ctx->pc = 0x2285A4u;
    // 0x2285a4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2285A4u;
    {
        const bool branch_taken_0x2285a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2285A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285A4u;
        // 0x2285a8: 0xae0004f0  sw          $zero, 0x4F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285a4) {
            ctx->pc = 0x228698u;
            goto label_228698;
        }
    }
    ctx->pc = 0x2285ACu;
label_2285ac:
    // 0x2285ac: 0x10a00037  beqz        $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2285ACu;
    {
        const bool branch_taken_0x2285ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2285B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285ACu;
        // 0x2285b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285ac) {
            ctx->pc = 0x22868Cu;
            goto label_22868c;
        }
    }
    ctx->pc = 0x2285B4u;
    // 0x2285b4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2285b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2285b8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2285b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2285bc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2285BCu;
    {
        const bool branch_taken_0x2285bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2285C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285BCu;
        // 0x2285c0: 0x8e110334  lw          $s1, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285bc) {
            ctx->pc = 0x22860Cu;
            goto label_22860c;
        }
    }
    ctx->pc = 0x2285C4u;
    // 0x2285c4: 0x8e240150  lw          $a0, 0x150($s1)
    ctx->pc = 0x2285c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2285c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2285c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2285cc: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x2285ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x2285d0: 0x2482ffbd  addiu       $v0, $a0, -0x43
    ctx->pc = 0x2285d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967229));
    // 0x2285d4: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2285d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2285d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2285D8u;
    {
        const bool branch_taken_0x2285d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2285DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285D8u;
        // 0x2285dc: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285d8) {
            ctx->pc = 0x2285F4u;
            goto label_2285f4;
        }
    }
    ctx->pc = 0x2285E0u;
    // 0x2285e0: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x2285e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x2285e4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2285E4u;
    {
        const bool branch_taken_0x2285e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2285E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285E4u;
        // 0x2285e8: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285e4) {
            ctx->pc = 0x2285F4u;
            goto label_2285f4;
        }
    }
    ctx->pc = 0x2285ECu;
    // 0x2285ec: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2285ECu;
    {
        const bool branch_taken_0x2285ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2285F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285ECu;
        // 0x2285f0: 0x5102b  sltu        $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285ec) {
            ctx->pc = 0x2285FCu;
            goto label_2285fc;
        }
    }
    ctx->pc = 0x2285F4u;
label_2285f4:
    // 0x2285f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2285f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2285f8: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x2285f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2285fc:
    // 0x2285fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2285FCu;
    {
        const bool branch_taken_0x2285fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285FCu;
        // 0x228600: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285fc) {
            ctx->pc = 0x228608u;
            goto label_228608;
        }
    }
    ctx->pc = 0x228604u;
    // 0x228604: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x228604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_228608:
    // 0x228608: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x228608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22860c:
    // 0x22860c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x22860cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x228610: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x228610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x228614: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x228614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x228618: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x228618u;
    {
        const bool branch_taken_0x228618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228618u;
        // 0x22861c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228618) {
            ctx->pc = 0x228654u;
            goto label_228654;
        }
    }
    ctx->pc = 0x228620u;
    // 0x228620: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x228620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x228624: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x228624u;
    {
        const bool branch_taken_0x228624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x228624) {
            ctx->pc = 0x228628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228624u;
            // 0x228628: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228658u;
            goto label_228658;
        }
    }
    ctx->pc = 0x22862Cu;
    // 0x22862c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x22862Cu;
    SET_GPR_U32(ctx, 31, 0x228634u);
    ctx->pc = 0x228630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22862Cu;
    // 0x228630: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x22862Cu, 0x228634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228634u;
label_228634:
    // 0x228634: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x228634u;
    {
        const bool branch_taken_0x228634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228634) {
            ctx->pc = 0x228638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228634u;
            // 0x228638: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228658u;
            goto label_228658;
        }
    }
    ctx->pc = 0x22863Cu;
    // 0x22863c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x22863cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x228640: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x228640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x228644: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x228644u;
    {
        const bool branch_taken_0x228644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228644u;
        // 0x228648: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228644) {
            ctx->pc = 0x228654u;
            goto label_228654;
        }
    }
    ctx->pc = 0x22864Cu;
    // 0x22864c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22864Cu;
    {
        const bool branch_taken_0x22864c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22864c) {
            ctx->pc = 0x228658u;
            goto label_228658;
        }
    }
    ctx->pc = 0x228654u;
label_228654:
    // 0x228654: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x228654u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228658:
    // 0x228658: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x228658u;
    {
        const bool branch_taken_0x228658 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x228658) {
            ctx->pc = 0x228668u;
            goto label_228668;
        }
    }
    ctx->pc = 0x228660u;
    // 0x228660: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x228660u;
    {
        const bool branch_taken_0x228660 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x228664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228660u;
        // 0x228664: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228660) {
            ctx->pc = 0x228680u;
            goto label_228680;
        }
    }
    ctx->pc = 0x228668u;
label_228668:
    // 0x228668: 0x56400009  bnel        $s2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x228668u;
    {
        const bool branch_taken_0x228668 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x228668) {
            ctx->pc = 0x22866Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228668u;
            // 0x22866c: 0xae0004f0  sw          $zero, 0x4F0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1264), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228690u;
            goto label_228690;
        }
    }
    ctx->pc = 0x228670u;
    // 0x228670: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x228670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x228674: 0xc44096c8  lwc1        $f0, -0x6938($v0)
    ctx->pc = 0x228674u;
    { uint32_t bits = FAST_READ32(0x3F96C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228678: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x228678u;
    {
        const bool branch_taken_0x228678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228678u;
        // 0x22867c: 0xe60004f0  swc1        $f0, 0x4F0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228678) {
            ctx->pc = 0x228690u;
            goto label_228690;
        }
    }
    ctx->pc = 0x228680u;
label_228680:
    // 0x228680: 0xc44096c4  lwc1        $f0, -0x693C($v0)
    ctx->pc = 0x228680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228684: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x228684u;
    {
        const bool branch_taken_0x228684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228684u;
        // 0x228688: 0xe60004f0  swc1        $f0, 0x4F0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228684) {
            ctx->pc = 0x228690u;
            goto label_228690;
        }
    }
    ctx->pc = 0x22868Cu;
label_22868c:
    // 0x22868c: 0xae0004f0  sw          $zero, 0x4F0($s0)
    ctx->pc = 0x22868cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1264), GPR_U32(ctx, 0));
label_228690:
    // 0x228690: 0xc08ba82  jal         func_22EA08
    ctx->pc = 0x228690u;
    SET_GPR_U32(ctx, 31, 0x228698u);
    ctx->pc = 0x228694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228690u;
    // 0x228694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA08u, 0x228690u, 0x228698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228698u;
label_228698:
    // 0x228698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22869c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22869cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2286a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2286a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2286a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2286a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2286a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2286a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2286ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2286ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2286B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286ACu;
        // 0x2286b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2286ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2286B4u;
    // 0x2286b4: 0x0  nop
    ctx->pc = 0x2286b4u;
    // NOP
    ctx->pc = 0x2286b8u;
}
