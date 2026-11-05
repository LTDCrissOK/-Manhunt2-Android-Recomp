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

// Function: sub_002866C0
// Address: 0x2866c0 - 0x2868d8
void sub_002866C0_0x2866c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002866C0_0x2866c0");
#endif

    switch (ctx->pc) {
        case 0x286778u: goto label_286778;
        case 0x286780u: goto label_286780;
        case 0x286834u: goto label_286834;
        case 0x286880u: goto label_286880;
        case 0x2868a4u: goto label_2868a4;
        default: break;
    }

    ctx->pc = 0x2866c0u;

    // 0x2866c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2866c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2866c4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2866c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2866c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2866cc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2866ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2866d0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2866d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2866d4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2866d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866d8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2866d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2866dc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2866dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866e0: 0x1042018  mult        $a0, $t0, $a0
    ctx->pc = 0x2866e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2866e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2866e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2866e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2866e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2866ec: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x2866ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2866f0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2866f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2866f4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2866f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2866f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2866fc: 0x2352821  addu        $a1, $s1, $s5
    ctx->pc = 0x2866fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x286700: 0xa060ffff  sb          $zero, -0x1($v1)
    ctx->pc = 0x286700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 0));
    // 0x286704: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x286704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x286708: 0xa0a0ffff  sb          $zero, -0x1($a1)
    ctx->pc = 0x286708u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 0));
    // 0x28670c: 0x24428f20  addiu       $v0, $v0, -0x70E0
    ctx->pc = 0x28670cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938400));
    // 0x286710: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x286710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286714: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x286714u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286718: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x286718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x28671c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28671Cu;
    {
        const bool branch_taken_0x28671c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28671Cu;
        // 0x286720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28671c) {
            ctx->pc = 0x286730u;
            goto label_286730;
        }
    }
    ctx->pc = 0x286724u;
    // 0x286724: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x286724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x286728: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x286728u;
    {
        const bool branch_taken_0x286728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286728u;
        // 0x28672c: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286728) {
            ctx->pc = 0x286790u;
            goto label_286790;
        }
    }
    ctx->pc = 0x286730u;
label_286730:
    // 0x286730: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x286730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x286734: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x286734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x286738: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x286738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x28673c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28673Cu;
    {
        const bool branch_taken_0x28673c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28673Cu;
        // 0x286740: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28673c) {
            ctx->pc = 0x286790u;
            goto label_286790;
        }
    }
    ctx->pc = 0x286744u;
    // 0x286744: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x286744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x286748: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x286748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x28674c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x28674cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x286750: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x286750u;
    {
        const bool branch_taken_0x286750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286750u;
        // 0x286754: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286750) {
            ctx->pc = 0x286790u;
            goto label_286790;
        }
    }
    ctx->pc = 0x286758u;
    // 0x286758: 0x82030003  lb          $v1, 0x3($s0)
    ctx->pc = 0x286758u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x28675c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28675Cu;
    {
        const bool branch_taken_0x28675c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28675Cu;
        // 0x286760: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28675c) {
            ctx->pc = 0x286794u;
            goto label_286794;
        }
    }
    ctx->pc = 0x286764u;
    // 0x286764: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x286764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286768: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x286768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28676c: 0xa3a00003  sb          $zero, 0x3($sp)
    ctx->pc = 0x28676cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x286770: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x286770u;
    SET_GPR_U32(ctx, 31, 0x286778u);
    ctx->pc = 0x286774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286770u;
    // 0x286774: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x286770u, 0x286778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286778u;
label_286778:
    // 0x286778: 0xc0f02a8  jal         func_3C0AA0
    ctx->pc = 0x286778u;
    SET_GPR_U32(ctx, 31, 0x286780u);
    ctx->pc = 0x28677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286778u;
    // 0x28677c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0AA0u, 0x286778u, 0x286780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286780u;
label_286780:
    // 0x286780: 0x82030004  lb          $v1, 0x4($s0)
    ctx->pc = 0x286780u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x286784: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x286784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286788: 0x38630032  xori        $v1, $v1, 0x32
    ctx->pc = 0x286788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)50);
    // 0x28678c: 0x2c650001  sltiu       $a1, $v1, 0x1
    ctx->pc = 0x28678cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_286790:
    // 0x286790: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x286790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_286794:
    // 0x286794: 0x1662002e  bne         $s3, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x286794u;
    {
        const bool branch_taken_0x286794 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x286798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286794u;
        // 0x286798: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286794) {
            ctx->pc = 0x286850u;
            goto label_286850;
        }
    }
    ctx->pc = 0x28679Cu;
    // 0x28679c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x28679cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2867a0: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x2867a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2867a4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2867A4u;
    {
        const bool branch_taken_0x2867a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2867A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867A4u;
        // 0x2867a8: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867a4) {
            ctx->pc = 0x2867B4u;
            goto label_2867b4;
        }
    }
    ctx->pc = 0x2867ACu;
    // 0x2867ac: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2867ACu;
    {
        const bool branch_taken_0x2867ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2867ac) {
            ctx->pc = 0x286850u;
            goto label_286850;
        }
    }
    ctx->pc = 0x2867B4u;
label_2867b4:
    // 0x2867b4: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2867b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2867b8: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2867b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2867bc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2867bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2867c0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2867C0u;
    {
        const bool branch_taken_0x2867c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2867c0) {
            ctx->pc = 0x286850u;
            goto label_286850;
        }
    }
    ctx->pc = 0x2867C8u;
    // 0x2867c8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x2867c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2867cc: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2867ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2867d0: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2867d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2867d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2867D4u;
    {
        const bool branch_taken_0x2867d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2867D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867D4u;
        // 0x2867d8: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867d4) {
            ctx->pc = 0x286850u;
            goto label_286850;
        }
    }
    ctx->pc = 0x2867DCu;
    // 0x2867dc: 0x82030003  lb          $v1, 0x3($s0)
    ctx->pc = 0x2867dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2867e0: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2867E0u;
    {
        const bool branch_taken_0x2867e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2867E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867E0u;
        // 0x2867e4: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867e0) {
            ctx->pc = 0x286850u;
            goto label_286850;
        }
    }
    ctx->pc = 0x2867E8u;
    // 0x2867e8: 0x82030004  lb          $v1, 0x4($s0)
    ctx->pc = 0x2867e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2867ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2867ECu;
    {
        const bool branch_taken_0x2867ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2867F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867ECu;
        // 0x2867f0: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867ec) {
            ctx->pc = 0x2867FCu;
            goto label_2867fc;
        }
    }
    ctx->pc = 0x2867F4u;
    // 0x2867f4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2867F4u;
    {
        const bool branch_taken_0x2867f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2867f4) {
            ctx->pc = 0x286850u;
            goto label_286850;
        }
    }
    ctx->pc = 0x2867FCu;
label_2867fc:
    // 0x2867fc: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x2867fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x286800: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x286800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x286804: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x286804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x286808: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x286808u;
    {
        const bool branch_taken_0x286808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286808u;
        // 0x28680c: 0x48600  sll         $s0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286808) {
            ctx->pc = 0x286850u;
            goto label_286850;
        }
    }
    ctx->pc = 0x286810u;
    // 0x286810: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x286810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x286814: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x286814u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x286818: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x286818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x28681c: 0x2610ffd0  addiu       $s0, $s0, -0x30
    ctx->pc = 0x28681cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
    // 0x286820: 0x24c6aa10  addiu       $a2, $a2, -0x55F0
    ctx->pc = 0x286820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945296));
    // 0x286824: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x286824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286828: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28682c: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x28682Cu;
    SET_GPR_U32(ctx, 31, 0x286834u);
    ctx->pc = 0x286830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28682Cu;
    // 0x286830: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x28682Cu, 0x286834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286834u;
label_286834:
    // 0x286834: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x286834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x286838: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x286838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x28683c: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x28683cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x286840: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x286840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286844: 0x24c6aa18  addiu       $a2, $a2, -0x55E8
    ctx->pc = 0x286844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945304));
    // 0x286848: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x286848u;
    {
        const bool branch_taken_0x286848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286848u;
        // 0x28684c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286848) {
            ctx->pc = 0x28689Cu;
            goto label_28689c;
        }
    }
    ctx->pc = 0x286850u;
label_286850:
    // 0x286850: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x286850u;
    {
        const bool branch_taken_0x286850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x286854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286850u;
        // 0x286854: 0x2630ffff  addiu       $s0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286850) {
            ctx->pc = 0x286868u;
            goto label_286868;
        }
    }
    ctx->pc = 0x286858u;
    // 0x286858: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x286858u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x28685c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28685cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286860: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x286860u;
    {
        const bool branch_taken_0x286860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286860u;
        // 0x286864: 0x24c6aa28  addiu       $a2, $a2, -0x55D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286860) {
            ctx->pc = 0x286874u;
            goto label_286874;
        }
    }
    ctx->pc = 0x286868u;
label_286868:
    // 0x286868: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x286868u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x28686c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28686cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286870: 0x24c6aa30  addiu       $a2, $a2, -0x55D0
    ctx->pc = 0x286870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945328));
label_286874:
    // 0x286874: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x286874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286878: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x286878u;
    SET_GPR_U32(ctx, 31, 0x286880u);
    ctx->pc = 0x28687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286878u;
    // 0x28687c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x286878u, 0x286880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286880u;
label_286880:
    // 0x286880: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x286880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286884: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x286884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x286888: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x286888u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x28688c: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x28688cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x286890: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x286890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286894: 0x24c6aa38  addiu       $a2, $a2, -0x55C8
    ctx->pc = 0x286894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945336));
    // 0x286898: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x286898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28689c:
    // 0x28689c: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x28689Cu;
    SET_GPR_U32(ctx, 31, 0x2868A4u);
    ctx->pc = 0x2868A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28689Cu;
    // 0x2868a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x28689Cu, 0x2868A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2868A4u;
label_2868a4:
    // 0x2868a4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2868a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2868a8: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x2868a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x2868ac: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2868acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2868b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2868b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2868b4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2868b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2868b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2868b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2868bc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2868bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2868c0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2868c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2868c4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2868c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2868c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2868c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2868cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2868CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2868D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868CCu;
        // 0x2868d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2868CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2868D4u;
    // 0x2868d4: 0x0  nop
    ctx->pc = 0x2868d4u;
    // NOP
    ctx->pc = 0x2868d8u;
}
