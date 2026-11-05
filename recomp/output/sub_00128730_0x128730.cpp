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

// Function: sub_00128730
// Address: 0x128730 - 0x1289d0
void sub_00128730_0x128730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128730_0x128730");
#endif

    switch (ctx->pc) {
        case 0x12877cu: goto label_12877c;
        case 0x128788u: goto label_128788;
        case 0x1287acu: goto label_1287ac;
        case 0x1287b8u: goto label_1287b8;
        case 0x1287c8u: goto label_1287c8;
        case 0x1287e4u: goto label_1287e4;
        case 0x1287f0u: goto label_1287f0;
        case 0x128808u: goto label_128808;
        case 0x128824u: goto label_128824;
        case 0x128848u: goto label_128848;
        case 0x128858u: goto label_128858;
        case 0x128860u: goto label_128860;
        case 0x128900u: goto label_128900;
        case 0x12891cu: goto label_12891c;
        case 0x12899cu: goto label_12899c;
        default: break;
    }

    ctx->pc = 0x128730u;

    // 0x128730: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x128730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x128734: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x128734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x128738: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x128738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x12873c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x12873cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x128740: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x128740u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128744: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x128744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x128748: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x128748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x12874c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x12874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x128750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x128750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128754: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x128754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x128758: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x128758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x12875c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x12875cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x128760: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x128760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x128764: 0x8c540214  lw          $s4, 0x214($v0)
    ctx->pc = 0x128764u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x489C1Cu));
    // 0x128768: 0x1280008f  beqz        $s4, . + 4 + (0x8F << 2)
    ctx->pc = 0x128768u;
    {
        const bool branch_taken_0x128768 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128768u;
        // 0x12876c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128768) {
            ctx->pc = 0x1289A8u;
            goto label_1289a8;
        }
    }
    ctx->pc = 0x128770u;
    // 0x128770: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128774: 0xc043958  jal         func_10E560
    ctx->pc = 0x128774u;
    SET_GPR_U32(ctx, 31, 0x12877Cu);
    ctx->pc = 0x128778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128774u;
    // 0x128778: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x128774u, 0x12877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12877Cu;
label_12877c:
    // 0x12877c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12877cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128780: 0xc049696  jal         func_125A58
    ctx->pc = 0x128780u;
    SET_GPR_U32(ctx, 31, 0x128788u);
    ctx->pc = 0x128784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128780u;
    // 0x128784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125A58u, 0x128780u, 0x128788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128788u;
label_128788:
    // 0x128788: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128788u;
    {
        const bool branch_taken_0x128788 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128788u;
        // 0x12878c: 0x2c430001  sltiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128788) {
            ctx->pc = 0x128798u;
            goto label_128798;
        }
    }
    ctx->pc = 0x128790u;
    // 0x128790: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x128790u;
    {
        const bool branch_taken_0x128790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x128790) {
            ctx->pc = 0x128794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128790u;
            // 0x128794: 0x2e720001  sltiu       $s2, $s3, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x128798u;
            goto label_128798;
        }
    }
    ctx->pc = 0x128798u;
label_128798:
    // 0x128798: 0x92220fd8  lbu         $v0, 0xFD8($s1)
    ctx->pc = 0x128798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4056)));
    // 0x12879c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x12879Cu;
    {
        const bool branch_taken_0x12879c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1287A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12879Cu;
        // 0x1287a0: 0x2429024  and         $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12879c) {
            ctx->pc = 0x1287D0u;
            goto label_1287d0;
        }
    }
    ctx->pc = 0x1287A4u;
    // 0x1287a4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1287A4u;
    SET_GPR_U32(ctx, 31, 0x1287ACu);
    ctx->pc = 0x1287A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1287A4u;
    // 0x1287a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1287A4u, 0x1287ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1287ACu;
label_1287ac:
    // 0x1287ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1287acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287b0: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1287B0u;
    SET_GPR_U32(ctx, 31, 0x1287B8u);
    ctx->pc = 0x1287B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1287B0u;
    // 0x1287b4: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1287B0u, 0x1287B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1287B8u;
label_1287b8:
    // 0x1287b8: 0xae220fac  sw          $v0, 0xFAC($s1)
    ctx->pc = 0x1287b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4012), GPR_U32(ctx, 2));
    // 0x1287bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1287bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287c0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1287C0u;
    SET_GPR_U32(ctx, 31, 0x1287C8u);
    ctx->pc = 0x1287C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1287C0u;
    // 0x1287c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1287C0u, 0x1287C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1287C8u;
label_1287c8:
    // 0x1287c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1287C8u;
    {
        const bool branch_taken_0x1287c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1287c8) {
            ctx->pc = 0x128808u;
            goto label_128808;
        }
    }
    ctx->pc = 0x1287D0u;
label_1287d0:
    // 0x1287d0: 0x8e220fac  lw          $v0, 0xFAC($s1)
    ctx->pc = 0x1287d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4012)));
    // 0x1287d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1287D4u;
    {
        const bool branch_taken_0x1287d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1287d4) {
            ctx->pc = 0x128808u;
            goto label_128808;
        }
    }
    ctx->pc = 0x1287DCu;
    // 0x1287dc: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1287DCu;
    SET_GPR_U32(ctx, 31, 0x1287E4u);
    ctx->pc = 0x1287E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1287DCu;
    // 0x1287e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1287DCu, 0x1287E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1287E4u;
label_1287e4:
    // 0x1287e4: 0x8e250fac  lw          $a1, 0xFAC($s1)
    ctx->pc = 0x1287e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4012)));
    // 0x1287e8: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x1287E8u;
    SET_GPR_U32(ctx, 31, 0x1287F0u);
    ctx->pc = 0x1287ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1287E8u;
    // 0x1287ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x1287E8u, 0x1287F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1287F0u;
label_1287f0:
    // 0x1287f0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1287F0u;
    {
        const bool branch_taken_0x1287f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1287f0) {
            ctx->pc = 0x1287F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1287F0u;
            // 0x1287f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1287FCu;
            goto label_1287fc;
        }
    }
    ctx->pc = 0x1287F8u;
    // 0x1287f8: 0xae200fac  sw          $zero, 0xFAC($s1)
    ctx->pc = 0x1287f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4012), GPR_U32(ctx, 0));
label_1287fc:
    // 0x1287fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1287fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128800: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x128800u;
    SET_GPR_U32(ctx, 31, 0x128808u);
    ctx->pc = 0x128804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128800u;
    // 0x128804: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x128800u, 0x128808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128808u;
label_128808:
    // 0x128808: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x128808u;
    {
        const bool branch_taken_0x128808 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x128808) {
            ctx->pc = 0x12881Cu;
            goto label_12881c;
        }
    }
    ctx->pc = 0x128810u;
    // 0x128810: 0x8e220fa4  lw          $v0, 0xFA4($s1)
    ctx->pc = 0x128810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4004)));
    // 0x128814: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x128814u;
    {
        const bool branch_taken_0x128814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128814u;
        // 0x128818: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128814) {
            ctx->pc = 0x1289ACu;
            goto label_1289ac;
        }
    }
    ctx->pc = 0x12881Cu;
label_12881c:
    // 0x12881c: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x12881Cu;
    SET_GPR_U32(ctx, 31, 0x128824u);
    ctx->pc = 0x128820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12881Cu;
    // 0x128820: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x12881Cu, 0x128824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128824u;
label_128824:
    // 0x128824: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x128824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128828: 0x12600060  beqz        $s3, . + 4 + (0x60 << 2)
    ctx->pc = 0x128828u;
    {
        const bool branch_taken_0x128828 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128828u;
        // 0x12882c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128828) {
            ctx->pc = 0x1289ACu;
            goto label_1289ac;
        }
    }
    ctx->pc = 0x128830u;
    // 0x128830: 0x8e220fa4  lw          $v0, 0xFA4($s1)
    ctx->pc = 0x128830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4004)));
    // 0x128834: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x128834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128838: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x128838u;
    {
        const bool branch_taken_0x128838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128838u;
        // 0x12883c: 0x26300f94  addiu       $s0, $s1, 0xF94 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3988));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128838) {
            ctx->pc = 0x128888u;
            goto label_128888;
        }
    }
    ctx->pc = 0x128840u;
    // 0x128840: 0xc041924  jal         func_106490
    ctx->pc = 0x128840u;
    SET_GPR_U32(ctx, 31, 0x128848u);
    ctx->pc = 0x128844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128840u;
    // 0x128844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106490u, 0x128840u, 0x128848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128848u;
label_128848:
    // 0x128848: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x128848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12884c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12884Cu;
    {
        const bool branch_taken_0x12884c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12884Cu;
        // 0x128850: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12884c) {
            ctx->pc = 0x128870u;
            goto label_128870;
        }
    }
    ctx->pc = 0x128854u;
    // 0x128854: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x128854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_128858:
    // 0x128858: 0xc0f6ec0  jal         func_3DBB00
    ctx->pc = 0x128858u;
    SET_GPR_U32(ctx, 31, 0x128860u);
    ctx->pc = 0x12885Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128858u;
    // 0x12885c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBB00u, 0x128858u, 0x128860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128860u;
label_128860:
    // 0x128860: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x128860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x128864: 0x0  nop
    ctx->pc = 0x128864u;
    // NOP
    // 0x128868: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x128868u;
    {
        const bool branch_taken_0x128868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128868) {
            ctx->pc = 0x12886Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128868u;
            // 0x12886c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128858;
        }
    }
    ctx->pc = 0x128870u;
label_128870:
    // 0x128870: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x128870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x128874: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x128874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x128878: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x128878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12887c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12887cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x128880: 0xae200fa4  sw          $zero, 0xFA4($s1)
    ctx->pc = 0x128880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4004), GPR_U32(ctx, 0));
    // 0x128884: 0xae200fa8  sw          $zero, 0xFA8($s1)
    ctx->pc = 0x128884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4008), GPR_U32(ctx, 0));
label_128888:
    // 0x128888: 0x12400047  beqz        $s2, . + 4 + (0x47 << 2)
    ctx->pc = 0x128888u;
    {
        const bool branch_taken_0x128888 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128888u;
        // 0x12888c: 0x26a39a08  addiu       $v1, $s5, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128888) {
            ctx->pc = 0x1289A8u;
            goto label_1289a8;
        }
    }
    ctx->pc = 0x128890u;
    // 0x128890: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x128890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x128894: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128898: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x128898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12889c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x12889cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x1288a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1288A0u;
    {
        const bool branch_taken_0x1288a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1288a0) {
            ctx->pc = 0x1288A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1288A0u;
            // 0x1288a4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1288B0u;
            goto label_1288b0;
        }
    }
    ctx->pc = 0x1288A8u;
    // 0x1288a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1288A8u;
    {
        const bool branch_taken_0x1288a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1288ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288A8u;
        // 0x1288ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1288a8) {
            ctx->pc = 0x1288B8u;
            goto label_1288b8;
        }
    }
    ctx->pc = 0x1288B0u;
label_1288b0:
    // 0x1288b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1288b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1288b4: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x1288b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1288b8:
    // 0x1288b8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1288b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1288bc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1288bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1288c0: 0x24423d20  addiu       $v0, $v0, 0x3D20
    ctx->pc = 0x1288c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    // 0x1288c4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1288c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1288c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1288c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1288cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1288ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B3D24u));
    // 0x1288d0: 0x26340f94  addiu       $s4, $s1, 0xF94
    ctx->pc = 0x1288d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 3988));
    // 0x1288d4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1288d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1288d8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1288d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1288dc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1288dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1288e0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1288e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1288e4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1288e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1288e8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1288e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1288ec: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1288ECu;
    {
        const bool branch_taken_0x1288ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1288F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288ECu;
        // 0x1288f0: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1288ec) {
            ctx->pc = 0x128980u;
            goto label_128980;
        }
    }
    ctx->pc = 0x1288F4u;
    // 0x1288f4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1288f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1288f8: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1288f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1288fc: 0x0  nop
    ctx->pc = 0x1288fcu;
    // NOP
label_128900:
    // 0x128900: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x128900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x128904: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128908: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x128908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12890c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x12890cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x128910: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x128910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128914: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x128914u;
    SET_GPR_U32(ctx, 31, 0x12891Cu);
    ctx->pc = 0x128918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128914u;
    // 0x128918: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x128914u, 0x12891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12891Cu;
label_12891c:
    // 0x12891c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x12891cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128920: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x128920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x128924: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x128924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x128928: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x128928u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x12892c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x12892cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x128930: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x128930u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x128934: 0x46000004  c1          0x4
    ctx->pc = 0x128934u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x128938: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x128938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12893c: 0x0  nop
    ctx->pc = 0x12893cu;
    // NOP
    // 0x128940: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x128940u;
    {
        const bool branch_taken_0x128940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128940) {
            ctx->pc = 0x128944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128940u;
            // 0x128944: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x128948u;
            goto label_128948;
        }
    }
    ctx->pc = 0x128948u;
label_128948:
    // 0x128948: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x128948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12894c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12894Cu;
    {
        const bool branch_taken_0x12894c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12894c) {
            ctx->pc = 0x128950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12894Cu;
            // 0x128950: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128960u;
            goto label_128960;
        }
    }
    ctx->pc = 0x128954u;
    // 0x128954: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x128954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x128958: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128958u;
    {
        const bool branch_taken_0x128958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128958u;
        // 0x12895c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128958) {
            ctx->pc = 0x128970u;
            goto label_128970;
        }
    }
    ctx->pc = 0x128960u;
label_128960:
    // 0x128960: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x128960u;
    {
        const bool branch_taken_0x128960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128960u;
        // 0x128964: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128960) {
            ctx->pc = 0x128974u;
            goto label_128974;
        }
    }
    ctx->pc = 0x128968u;
    // 0x128968: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x128968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x12896c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x12896cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_128970:
    // 0x128970: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x128970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_128974:
    // 0x128974: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x128974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x128978: 0x1462ffe1  bne         $v1, $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x128978u;
    {
        const bool branch_taken_0x128978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128978u;
        // 0x12897c: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128978) {
            ctx->pc = 0x128900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128900;
        }
    }
    ctx->pc = 0x128980u;
label_128980:
    // 0x128980: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x128980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x128984: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x128984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x128988: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12898c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x12898cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x128990: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x128990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128994: 0xc04177c  jal         func_105DF0
    ctx->pc = 0x128994u;
    SET_GPR_U32(ctx, 31, 0x12899Cu);
    ctx->pc = 0x128998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128994u;
    // 0x128998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105DF0u, 0x128994u, 0x12899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12899Cu;
label_12899c:
    // 0x12899c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12899cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1289a0: 0xae330fa8  sw          $s3, 0xFA8($s1)
    ctx->pc = 0x1289a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4008), GPR_U32(ctx, 19));
    // 0x1289a4: 0xae220fa4  sw          $v0, 0xFA4($s1)
    ctx->pc = 0x1289a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4004), GPR_U32(ctx, 2));
label_1289a8:
    // 0x1289a8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1289a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1289ac:
    // 0x1289ac: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1289acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1289b0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1289b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1289b4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1289b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1289b8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1289b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1289bc: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1289bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1289c0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1289c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1289c4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1289c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1289c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1289C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1289CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289C8u;
        // 0x1289cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1289C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1289D0u;
}
