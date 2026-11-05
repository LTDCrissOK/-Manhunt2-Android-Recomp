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

// Function: sub_001448C0
// Address: 0x1448c0 - 0x144d68
void sub_001448C0_0x1448c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001448C0_0x1448c0");
#endif

    switch (ctx->pc) {
        case 0x1448fcu: goto label_1448fc;
        case 0x144904u: goto label_144904;
        case 0x144928u: goto label_144928;
        case 0x144934u: goto label_144934;
        case 0x1449d0u: goto label_1449d0;
        case 0x1449e0u: goto label_1449e0;
        case 0x1449ecu: goto label_1449ec;
        case 0x144a28u: goto label_144a28;
        case 0x144a40u: goto label_144a40;
        case 0x144a4cu: goto label_144a4c;
        case 0x144a60u: goto label_144a60;
        case 0x144a70u: goto label_144a70;
        case 0x144a7cu: goto label_144a7c;
        case 0x144abcu: goto label_144abc;
        case 0x144ad4u: goto label_144ad4;
        case 0x144adcu: goto label_144adc;
        case 0x144b08u: goto label_144b08;
        case 0x144b20u: goto label_144b20;
        case 0x144b30u: goto label_144b30;
        case 0x144b3cu: goto label_144b3c;
        case 0x144b7cu: goto label_144b7c;
        case 0x144b94u: goto label_144b94;
        case 0x144ba4u: goto label_144ba4;
        case 0x144bb0u: goto label_144bb0;
        case 0x144bc4u: goto label_144bc4;
        case 0x144bd4u: goto label_144bd4;
        case 0x144be0u: goto label_144be0;
        case 0x144c1cu: goto label_144c1c;
        case 0x144c34u: goto label_144c34;
        case 0x144c3cu: goto label_144c3c;
        case 0x144c68u: goto label_144c68;
        case 0x144c74u: goto label_144c74;
        case 0x144ce8u: goto label_144ce8;
        case 0x144cfcu: goto label_144cfc;
        case 0x144d2cu: goto label_144d2c;
        case 0x144d3cu: goto label_144d3c;
        case 0x144d4cu: goto label_144d4c;
        case 0x144d54u: goto label_144d54;
        default: break;
    }

    ctx->pc = 0x1448c0u;

    // 0x1448c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1448c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1448c4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1448c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1448c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1448c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1448cc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1448ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1448d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1448d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1448d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1448d8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1448d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1448dc: 0x2412005c  addiu       $s2, $zero, 0x5C
    ctx->pc = 0x1448dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1448e0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1448e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1448e4: 0x26110540  addiu       $s1, $s0, 0x540
    ctx->pc = 0x1448e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
    // 0x1448e8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1448e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1448ec: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1448ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1448f0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1448f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1448f4: 0xc04e86c  jal         func_13A1B0
    ctx->pc = 0x1448F4u;
    SET_GPR_U32(ctx, 31, 0x1448FCu);
    ctx->pc = 0x1448F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1448F4u;
    // 0x1448f8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1B0u, 0x1448F4u, 0x1448FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448FCu;
label_1448fc:
    // 0x1448fc: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1448FCu;
    SET_GPR_U32(ctx, 31, 0x144904u);
    ctx->pc = 0x144900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1448FCu;
    // 0x144900: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1448FCu, 0x144904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144904u;
label_144904:
    // 0x144904: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x144904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144908: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x144908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14490c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x14490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x144910: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x144910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144914: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x144914u;
    {
        const bool branch_taken_0x144914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144914) {
            ctx->pc = 0x144918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144914u;
            // 0x144918: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144958u;
            goto label_144958;
        }
    }
    ctx->pc = 0x14491Cu;
    // 0x14491c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x14491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x144920: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x144920u;
    SET_GPR_U32(ctx, 31, 0x144928u);
    ctx->pc = 0x144924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144920u;
    // 0x144924: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x144920u, 0x144928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144928u;
label_144928:
    // 0x144928: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14492c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x14492Cu;
    SET_GPR_U32(ctx, 31, 0x144934u);
    ctx->pc = 0x144930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14492Cu;
    // 0x144930: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x14492Cu, 0x144934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144934u;
label_144934:
    // 0x144934: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x144934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144938: 0x722018  mult        $a0, $v1, $s2
    ctx->pc = 0x144938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14493c: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x14493cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x144940: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x144940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x144944: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x144944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144948: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x144948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14494c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x14494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x144950: 0xac400544  sw          $zero, 0x544($v0)
    ctx->pc = 0x144950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1348), GPR_U32(ctx, 0));
    // 0x144954: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x144954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_144958:
    // 0x144958: 0x26130548  addiu       $s3, $s0, 0x548
    ctx->pc = 0x144958u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1352));
    // 0x14495c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14495cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x144960: 0x26140544  addiu       $s4, $s0, 0x544
    ctx->pc = 0x144960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1348));
    // 0x144964: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x144964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x144968: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x144968u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14496c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14496cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x144970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144974: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x144974u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144978: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x144978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x14497c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144980: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x144980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x144984: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x144984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x144988: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x144988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14498c: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x14498cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x144990: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x144990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x144994: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x144994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144998: 0x1095002e  beq         $a0, $s5, . + 4 + (0x2E << 2)
    ctx->pc = 0x144998u;
    {
        const bool branch_taken_0x144998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x14499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144998u;
        // 0x14499c: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144998) {
            ctx->pc = 0x144A54u;
            goto label_144a54;
        }
    }
    ctx->pc = 0x1449A0u;
    // 0x1449a0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1449A0u;
    {
        const bool branch_taken_0x1449a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1449A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449A0u;
        // 0x1449a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449a0) {
            ctx->pc = 0x1449C0u;
            goto label_1449c0;
        }
    }
    ctx->pc = 0x1449A8u;
    // 0x1449a8: 0x10820059  beq         $a0, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1449A8u;
    {
        const bool branch_taken_0x1449a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1449ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449A8u;
        // 0x1449ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449a8) {
            ctx->pc = 0x144B10u;
            goto label_144b10;
        }
    }
    ctx->pc = 0x1449B0u;
    // 0x1449b0: 0x10820081  beq         $a0, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x1449B0u;
    {
        const bool branch_taken_0x1449b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1449B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449B0u;
        // 0x1449b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449b0) {
            ctx->pc = 0x144BB8u;
            goto label_144bb8;
        }
    }
    ctx->pc = 0x1449B8u;
    // 0x1449b8: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x1449B8u;
    {
        const bool branch_taken_0x1449b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1449b8) {
            ctx->pc = 0x144C6Cu;
            goto label_144c6c;
        }
    }
    ctx->pc = 0x1449C0u;
label_1449c0:
    // 0x1449c0: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1449c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1449c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1449c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449c8: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x1449C8u;
    SET_GPR_U32(ctx, 31, 0x1449D0u);
    ctx->pc = 0x1449CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449C8u;
    // 0x1449cc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x1449C8u, 0x1449D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449D0u;
label_1449d0:
    // 0x1449d0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1449D0u;
    {
        const bool branch_taken_0x1449d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1449D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449D0u;
        // 0x1449d4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449d0) {
            ctx->pc = 0x144A1Cu;
            goto label_144a1c;
        }
    }
    ctx->pc = 0x1449D8u;
    // 0x1449d8: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x1449D8u;
    SET_GPR_U32(ctx, 31, 0x1449E0u);
    ctx->pc = 0x1449DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449D8u;
    // 0x1449dc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x1449D8u, 0x1449E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449E0u;
label_1449e0:
    // 0x1449e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1449e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449e4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1449E4u;
    SET_GPR_U32(ctx, 31, 0x1449ECu);
    ctx->pc = 0x1449E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449E4u;
    // 0x1449e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1449E4u, 0x1449ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449ECu;
label_1449ec:
    // 0x1449ec: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x1449ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1449f0: 0x722018  mult        $a0, $v1, $s2
    ctx->pc = 0x1449f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1449f4: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1449f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1449f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1449f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1449fc: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x1449fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144a00: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x144a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x144a04: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x144a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x144a08: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x144a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x144a0c: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x144a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144a10: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x144a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x144a14: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x144a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x144a18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x144a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_144a1c:
    // 0x144a1c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x144a1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144a20: 0xc04e866  jal         func_13A198
    ctx->pc = 0x144A20u;
    SET_GPR_U32(ctx, 31, 0x144A28u);
    ctx->pc = 0x144A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A20u;
    // 0x144a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x144A20u, 0x144A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A28u;
label_144a28:
    // 0x144a28: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x144a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x144a2c: 0x10430057  beq         $v0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x144A2Cu;
    {
        const bool branch_taken_0x144a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x144A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A2Cu;
        // 0x144a30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a2c) {
            ctx->pc = 0x144B8Cu;
            goto label_144b8c;
        }
    }
    ctx->pc = 0x144A34u;
    // 0x144a34: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x144a34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144a38: 0xc05107a  jal         func_1441E8
    ctx->pc = 0x144A38u;
    SET_GPR_U32(ctx, 31, 0x144A40u);
    ctx->pc = 0x144A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A38u;
    // 0x144a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1441E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1441E8u, 0x144A38u, 0x144A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A40u;
label_144a40:
    // 0x144a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a44: 0xc0511d2  jal         func_144748
    ctx->pc = 0x144A44u;
    SET_GPR_U32(ctx, 31, 0x144A4Cu);
    ctx->pc = 0x144A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A44u;
    // 0x144a48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144748u, 0x144A44u, 0x144A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A4Cu;
label_144a4c:
    // 0x144a4c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x144A4Cu;
    {
        const bool branch_taken_0x144a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A4Cu;
        // 0x144a50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a4c) {
            ctx->pc = 0x144C6Cu;
            goto label_144c6c;
        }
    }
    ctx->pc = 0x144A54u;
label_144a54:
    // 0x144a54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a58: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x144A58u;
    SET_GPR_U32(ctx, 31, 0x144A60u);
    ctx->pc = 0x144A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A58u;
    // 0x144a5c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x144A58u, 0x144A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A60u;
label_144a60:
    // 0x144a60: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x144A60u;
    {
        const bool branch_taken_0x144a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A60u;
        // 0x144a64: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a60) {
            ctx->pc = 0x144AB0u;
            goto label_144ab0;
        }
    }
    ctx->pc = 0x144A68u;
    // 0x144a68: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x144A68u;
    SET_GPR_U32(ctx, 31, 0x144A70u);
    ctx->pc = 0x144A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A68u;
    // 0x144a6c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x144A68u, 0x144A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A70u;
label_144a70:
    // 0x144a70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a74: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x144A74u;
    SET_GPR_U32(ctx, 31, 0x144A7Cu);
    ctx->pc = 0x144A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A74u;
    // 0x144a78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x144A74u, 0x144A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A7Cu;
label_144a7c:
    // 0x144a7c: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x144a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144a80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x144a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144a84: 0x722818  mult        $a1, $v1, $s2
    ctx->pc = 0x144a84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x144a88: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x144a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x144a8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x144a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x144a90: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x144a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144a94: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x144a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x144a98: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x144a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x144a9c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x144a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x144aa0: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x144aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144aa4: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x144aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x144aa8: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x144aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x144aac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x144aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_144ab0:
    // 0x144ab0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x144ab0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144ab4: 0xc04e866  jal         func_13A198
    ctx->pc = 0x144AB4u;
    SET_GPR_U32(ctx, 31, 0x144ABCu);
    ctx->pc = 0x144AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144AB4u;
    // 0x144ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x144AB4u, 0x144ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144ABCu;
label_144abc:
    // 0x144abc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x144abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x144ac0: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x144AC0u;
    {
        const bool branch_taken_0x144ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x144ac0) {
            ctx->pc = 0x144AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144AC0u;
            // 0x144ac4: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144AE0u;
            goto label_144ae0;
        }
    }
    ctx->pc = 0x144AC8u;
    // 0x144ac8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x144ac8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144acc: 0xc05107a  jal         func_1441E8
    ctx->pc = 0x144ACCu;
    SET_GPR_U32(ctx, 31, 0x144AD4u);
    ctx->pc = 0x144AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144ACCu;
    // 0x144ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1441E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1441E8u, 0x144ACCu, 0x144AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144AD4u;
label_144ad4:
    // 0x144ad4: 0xc0510f8  jal         func_1443E0
    ctx->pc = 0x144AD4u;
    SET_GPR_U32(ctx, 31, 0x144ADCu);
    ctx->pc = 0x144AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144AD4u;
    // 0x144ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1443E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1443E0u, 0x144AD4u, 0x144ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144ADCu;
label_144adc:
    // 0x144adc: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x144adcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_144ae0:
    // 0x144ae0: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x144ae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x144ae4: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x144ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x144ae8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x144ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144aec: 0x1475005f  bne         $v1, $s5, . + 4 + (0x5F << 2)
    ctx->pc = 0x144AECu;
    {
        const bool branch_taken_0x144aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x144AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AECu;
        // 0x144af0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144aec) {
            ctx->pc = 0x144C6Cu;
            goto label_144c6c;
        }
    }
    ctx->pc = 0x144AF4u;
    // 0x144af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144af8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x144af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144afc: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x144afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x144b00: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x144B00u;
    SET_GPR_U32(ctx, 31, 0x144B08u);
    ctx->pc = 0x144B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B00u;
    // 0x144b04: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x144B00u, 0x144B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B08u;
label_144b08:
    // 0x144b08: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x144B08u;
    {
        const bool branch_taken_0x144b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B08u;
        // 0x144b0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b08) {
            ctx->pc = 0x144C6Cu;
            goto label_144c6c;
        }
    }
    ctx->pc = 0x144B10u;
label_144b10:
    // 0x144b10: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x144b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x144b14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b18: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x144B18u;
    SET_GPR_U32(ctx, 31, 0x144B20u);
    ctx->pc = 0x144B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B18u;
    // 0x144b1c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x144B18u, 0x144B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B20u;
label_144b20:
    // 0x144b20: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x144B20u;
    {
        const bool branch_taken_0x144b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B20u;
        // 0x144b24: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b20) {
            ctx->pc = 0x144B70u;
            goto label_144b70;
        }
    }
    ctx->pc = 0x144B28u;
    // 0x144b28: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x144B28u;
    SET_GPR_U32(ctx, 31, 0x144B30u);
    ctx->pc = 0x144B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B28u;
    // 0x144b2c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x144B28u, 0x144B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B30u;
label_144b30:
    // 0x144b30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b34: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x144B34u;
    SET_GPR_U32(ctx, 31, 0x144B3Cu);
    ctx->pc = 0x144B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B34u;
    // 0x144b38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x144B34u, 0x144B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B3Cu;
label_144b3c:
    // 0x144b3c: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x144b3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144b40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x144b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x144b44: 0x722818  mult        $a1, $v1, $s2
    ctx->pc = 0x144b44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x144b48: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x144b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x144b4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x144b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x144b50: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x144b50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144b54: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x144b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x144b58: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x144b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x144b5c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x144b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x144b60: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x144b60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144b64: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x144b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x144b68: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x144b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x144b6c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x144b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_144b70:
    // 0x144b70: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x144b70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144b74: 0xc04e866  jal         func_13A198
    ctx->pc = 0x144B74u;
    SET_GPR_U32(ctx, 31, 0x144B7Cu);
    ctx->pc = 0x144B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B74u;
    // 0x144b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x144B74u, 0x144B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B7Cu;
label_144b7c:
    // 0x144b7c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x144b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x144b80: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x144B80u;
    {
        const bool branch_taken_0x144b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x144b80) {
            ctx->pc = 0x144B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144B80u;
            // 0x144b84: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144B9Cu;
            goto label_144b9c;
        }
    }
    ctx->pc = 0x144B88u;
    // 0x144b88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_144b8c:
    // 0x144b8c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x144B8Cu;
    SET_GPR_U32(ctx, 31, 0x144B94u);
    ctx->pc = 0x144B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B8Cu;
    // 0x144b90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x144B8Cu, 0x144B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B94u;
label_144b94:
    // 0x144b94: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x144B94u;
    {
        const bool branch_taken_0x144b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B94u;
        // 0x144b98: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b94) {
            ctx->pc = 0x144C78u;
            goto label_144c78;
        }
    }
    ctx->pc = 0x144B9Cu;
label_144b9c:
    // 0x144b9c: 0xc05107a  jal         func_1441E8
    ctx->pc = 0x144B9Cu;
    SET_GPR_U32(ctx, 31, 0x144BA4u);
    ctx->pc = 0x144BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B9Cu;
    // 0x144ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1441E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1441E8u, 0x144B9Cu, 0x144BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BA4u;
label_144ba4:
    // 0x144ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ba8: 0xc0511d2  jal         func_144748
    ctx->pc = 0x144BA8u;
    SET_GPR_U32(ctx, 31, 0x144BB0u);
    ctx->pc = 0x144BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BA8u;
    // 0x144bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144748u, 0x144BA8u, 0x144BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BB0u;
label_144bb0:
    // 0x144bb0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x144BB0u;
    {
        const bool branch_taken_0x144bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BB0u;
        // 0x144bb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144bb0) {
            ctx->pc = 0x144C6Cu;
            goto label_144c6c;
        }
    }
    ctx->pc = 0x144BB8u;
label_144bb8:
    // 0x144bb8: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x144bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x144bbc: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x144BBCu;
    SET_GPR_U32(ctx, 31, 0x144BC4u);
    ctx->pc = 0x144BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BBCu;
    // 0x144bc0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x144BBCu, 0x144BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BC4u;
label_144bc4:
    // 0x144bc4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x144BC4u;
    {
        const bool branch_taken_0x144bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BC4u;
        // 0x144bc8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144bc4) {
            ctx->pc = 0x144C10u;
            goto label_144c10;
        }
    }
    ctx->pc = 0x144BCCu;
    // 0x144bcc: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x144BCCu;
    SET_GPR_U32(ctx, 31, 0x144BD4u);
    ctx->pc = 0x144BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BCCu;
    // 0x144bd0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x144BCCu, 0x144BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BD4u;
label_144bd4:
    // 0x144bd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144bd8: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x144BD8u;
    SET_GPR_U32(ctx, 31, 0x144BE0u);
    ctx->pc = 0x144BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BD8u;
    // 0x144bdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x144BD8u, 0x144BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BE0u;
label_144be0:
    // 0x144be0: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x144be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144be4: 0x722018  mult        $a0, $v1, $s2
    ctx->pc = 0x144be4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x144be8: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x144be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x144bec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x144becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x144bf0: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x144bf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144bf4: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x144bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x144bf8: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x144bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x144bfc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x144bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x144c00: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x144c00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144c04: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x144c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x144c08: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x144c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x144c0c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x144c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_144c10:
    // 0x144c10: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x144c10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144c14: 0xc04e866  jal         func_13A198
    ctx->pc = 0x144C14u;
    SET_GPR_U32(ctx, 31, 0x144C1Cu);
    ctx->pc = 0x144C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C14u;
    // 0x144c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x144C14u, 0x144C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C1Cu;
label_144c1c:
    // 0x144c1c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x144c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x144c20: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x144C20u;
    {
        const bool branch_taken_0x144c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x144c20) {
            ctx->pc = 0x144C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144C20u;
            // 0x144c24: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144C40u;
            goto label_144c40;
        }
    }
    ctx->pc = 0x144C28u;
    // 0x144c28: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x144c28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144c2c: 0xc05107a  jal         func_1441E8
    ctx->pc = 0x144C2Cu;
    SET_GPR_U32(ctx, 31, 0x144C34u);
    ctx->pc = 0x144C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C2Cu;
    // 0x144c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1441E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1441E8u, 0x144C2Cu, 0x144C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C34u;
label_144c34:
    // 0x144c34: 0xc0510f8  jal         func_1443E0
    ctx->pc = 0x144C34u;
    SET_GPR_U32(ctx, 31, 0x144C3Cu);
    ctx->pc = 0x144C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C34u;
    // 0x144c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1443E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1443E0u, 0x144C34u, 0x144C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C3Cu;
label_144c3c:
    // 0x144c3c: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x144c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_144c40:
    // 0x144c40: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x144c40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x144c44: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x144c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x144c48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x144c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144c4c: 0x14750007  bne         $v1, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x144C4Cu;
    {
        const bool branch_taken_0x144c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x144C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C4Cu;
        // 0x144c50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c4c) {
            ctx->pc = 0x144C6Cu;
            goto label_144c6c;
        }
    }
    ctx->pc = 0x144C54u;
    // 0x144c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c58: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x144c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c5c: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x144c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x144c60: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x144C60u;
    SET_GPR_U32(ctx, 31, 0x144C68u);
    ctx->pc = 0x144C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C60u;
    // 0x144c64: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x144C60u, 0x144C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C68u;
label_144c68:
    // 0x144c68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_144c6c:
    // 0x144c6c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x144C6Cu;
    SET_GPR_U32(ctx, 31, 0x144C74u);
    ctx->pc = 0x144C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C6Cu;
    // 0x144c70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x144C6Cu, 0x144C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C74u;
label_144c74:
    // 0x144c74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x144c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_144c78:
    // 0x144c78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x144c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x144c7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x144c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144c80: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x144c80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x144c84: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x144c84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144c88: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x144c88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144c8c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x144c8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144c90: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x144c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x144c94: 0x3e00008  jr          $ra
    ctx->pc = 0x144C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C94u;
        // 0x144c98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144C9Cu;
    // 0x144c9c: 0x0  nop
    ctx->pc = 0x144c9cu;
    // NOP
    // 0x144ca0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x144ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x144ca4: 0x0  nop
    ctx->pc = 0x144ca4u;
    // NOP
    // 0x144ca8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x144ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x144cac: 0x0  nop
    ctx->pc = 0x144cacu;
    // NOP
    // 0x144cb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x144cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x144cb4: 0x0  nop
    ctx->pc = 0x144cb4u;
    // NOP
    // 0x144cb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x144cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x144cbc: 0x0  nop
    ctx->pc = 0x144cbcu;
    // NOP
    // 0x144cc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x144cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x144cc4: 0x0  nop
    ctx->pc = 0x144cc4u;
    // NOP
    // 0x144cc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x144cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x144ccc: 0x0  nop
    ctx->pc = 0x144cccu;
    // NOP
    // 0x144cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x144cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x144cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144cd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x144cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x144cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ce0: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x144CE0u;
    SET_GPR_U32(ctx, 31, 0x144CE8u);
    ctx->pc = 0x144CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144CE0u;
    // 0x144ce4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x144CE0u, 0x144CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CE8u;
label_144ce8:
    // 0x144ce8: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x144CE8u;
    {
        const bool branch_taken_0x144ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144ce8) {
            ctx->pc = 0x144CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144CE8u;
            // 0x144cec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144D58u;
            goto label_144d58;
        }
    }
    ctx->pc = 0x144CF0u;
    // 0x144cf0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x144cf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144cf4: 0xc04eb18  jal         func_13AC60
    ctx->pc = 0x144CF4u;
    SET_GPR_U32(ctx, 31, 0x144CFCu);
    ctx->pc = 0x144CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144CF4u;
    // 0x144cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC60u, 0x144CF4u, 0x144CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CFCu;
label_144cfc:
    // 0x144cfc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x144cfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d00: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x144d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x144d04: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x144D04u;
    {
        const bool branch_taken_0x144d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D04u;
        // 0x144d08: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144d04) {
            ctx->pc = 0x144D4Cu;
            goto label_144d4c;
        }
    }
    ctx->pc = 0x144D0Cu;
    // 0x144d0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x144d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x144d10: 0x2442e9e0  addiu       $v0, $v0, -0x1620
    ctx->pc = 0x144d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961632));
    // 0x144d14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x144d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x144d18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x144d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144d1c: 0x800008  jr          $a0
    ctx->pc = 0x144D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144D24u: goto label_144d24;
            case 0x144D34u: goto label_144d34;
            case 0x144D44u: goto label_144d44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144D1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x144D24u;
label_144d24:
    // 0x144d24: 0xc05135a  jal         func_144D68
    ctx->pc = 0x144D24u;
    SET_GPR_U32(ctx, 31, 0x144D2Cu);
    ctx->pc = 0x144D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D24u;
    // 0x144d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D68u, 0x144D24u, 0x144D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D2Cu;
label_144d2c:
    // 0x144d2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x144D2Cu;
    {
        const bool branch_taken_0x144d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144d2c) {
            ctx->pc = 0x144D4Cu;
            goto label_144d4c;
        }
    }
    ctx->pc = 0x144D34u;
label_144d34:
    // 0x144d34: 0xc05137a  jal         func_144DE8
    ctx->pc = 0x144D34u;
    SET_GPR_U32(ctx, 31, 0x144D3Cu);
    ctx->pc = 0x144D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D34u;
    // 0x144d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144DE8u, 0x144D34u, 0x144D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D3Cu;
label_144d3c:
    // 0x144d3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x144D3Cu;
    {
        const bool branch_taken_0x144d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144d3c) {
            ctx->pc = 0x144D4Cu;
            goto label_144d4c;
        }
    }
    ctx->pc = 0x144D44u;
label_144d44:
    // 0x144d44: 0xc051390  jal         func_144E40
    ctx->pc = 0x144D44u;
    SET_GPR_U32(ctx, 31, 0x144D4Cu);
    ctx->pc = 0x144D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D44u;
    // 0x144d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144E40u, 0x144D44u, 0x144D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D4Cu;
label_144d4c:
    // 0x144d4c: 0xc04e71a  jal         func_139C68
    ctx->pc = 0x144D4Cu;
    SET_GPR_U32(ctx, 31, 0x144D54u);
    ctx->pc = 0x144D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D4Cu;
    // 0x144d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C68u, 0x144D4Cu, 0x144D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D54u;
label_144d54:
    // 0x144d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x144d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_144d58:
    // 0x144d58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x144d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x144d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x144D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D5Cu;
        // 0x144d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144D64u;
    // 0x144d64: 0x0  nop
    ctx->pc = 0x144d64u;
    // NOP
    ctx->pc = 0x144d68u;
}
