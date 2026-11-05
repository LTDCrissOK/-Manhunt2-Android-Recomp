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

// Function: sub_003C7630
// Address: 0x3c7630 - 0x3c7768
void sub_003C7630_0x3c7630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7630_0x3c7630");
#endif

    switch (ctx->pc) {
        case 0x3c7690u: goto label_3c7690;
        case 0x3c76b4u: goto label_3c76b4;
        case 0x3c76d8u: goto label_3c76d8;
        case 0x3c76f0u: goto label_3c76f0;
        case 0x3c7718u: goto label_3c7718;
        case 0x3c7734u: goto label_3c7734;
        default: break;
    }

    ctx->pc = 0x3c7630u;

    // 0x3c7630: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c7630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3c7634: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3c7634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3c7638: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3c7638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3c763c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3c763cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7640: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3c7640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3c7644: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x3c7644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x3c7648: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c7648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3c764c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3c764cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c7650: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c7650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c7654: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3c7654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3c7658: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3c7658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c765c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3c765cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3c7660: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c7660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c7664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c7668: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c7668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c766c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C766Cu;
    {
        const bool branch_taken_0x3c766c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c766c) {
            ctx->pc = 0x3C7670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C766Cu;
            // 0x3c7670: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7674u;
            goto label_3c7674;
        }
    }
    ctx->pc = 0x3C7674u;
label_3c7674:
    // 0x3c7674: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3c7674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7678: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3c7678u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c767c: 0x1812  mflo        $v1
    ctx->pc = 0x3c767cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3c7680: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3c7680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c7684: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C7684u;
    {
        const bool branch_taken_0x3c7684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7684u;
        // 0x3c7688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7684) {
            ctx->pc = 0x3C76A8u;
            goto label_3c76a8;
        }
    }
    ctx->pc = 0x3C768Cu;
    // 0x3c768c: 0x0  nop
    ctx->pc = 0x3c768cu;
    // NOP
label_3c7690:
    // 0x3c7690: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3c7690u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3c7694: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3c7694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c7698: 0x0  nop
    ctx->pc = 0x3c7698u;
    // NOP
    // 0x3c769c: 0x0  nop
    ctx->pc = 0x3c769cu;
    // NOP
    // 0x3c76a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C76A0u;
    {
        const bool branch_taken_0x3c76a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C76A0u;
        // 0x3c76a4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c76a0) {
            ctx->pc = 0x3C7690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7690;
        }
    }
    ctx->pc = 0x3C76A8u;
label_3c76a8:
    // 0x3c76a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c76a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c76ac: 0xc0f1d12  jal         func_3C7448
    ctx->pc = 0x3C76ACu;
    SET_GPR_U32(ctx, 31, 0x3C76B4u);
    ctx->pc = 0x3C76B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C76ACu;
    // 0x3c76b0: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7448u, 0x3C76ACu, 0x3C76B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C76B4u;
label_3c76b4:
    // 0x3c76b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c76b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c76b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c76b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c76bc: 0xacb50014  sw          $s5, 0x14($a1)
    ctx->pc = 0x3c76bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 21));
    // 0x3c76c0: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x3c76c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c76c4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C76C4u;
    {
        const bool branch_taken_0x3c76c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C76C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C76C4u;
        // 0x3c76c8: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c76c4) {
            ctx->pc = 0x3C7708u;
            goto label_3c7708;
        }
    }
    ctx->pc = 0x3C76CCu;
    // 0x3c76cc: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x3c76ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x3c76d0: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x3c76d0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c76d4: 0x0  nop
    ctx->pc = 0x3c76d4u;
    // NOP
label_3c76d8:
    // 0x3c76d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c76d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c76dc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3c76dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3c76e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c76e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c76e4: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x3c76e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x3c76e8: 0xc0f1d4a  jal         func_3C7528
    ctx->pc = 0x3C76E8u;
    SET_GPR_U32(ctx, 31, 0x3C76F0u);
    ctx->pc = 0x3C76ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C76E8u;
    // 0x3c76ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7528u, 0x3C76E8u, 0x3C76F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C76F0u;
label_3c76f0:
    // 0x3c76f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c76f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c76f4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x3c76f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3c76f8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3C76F8u;
    {
        const bool branch_taken_0x3c76f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c76f8) {
            ctx->pc = 0x3C76FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C76F8u;
            // 0x3c76fc: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C76D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c76d8;
        }
    }
    ctx->pc = 0x3C7700u;
    // 0x3c7700: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C7700u;
    {
        const bool branch_taken_0x3c7700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7700u;
        // 0x3c7704: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7700) {
            ctx->pc = 0x3C770Cu;
            goto label_3c770c;
        }
    }
    ctx->pc = 0x3C7708u;
label_3c7708:
    // 0x3c7708: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x3c7708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_3c770c:
    // 0x3c770c: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x3c770cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3c7710: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C7710u;
    {
        const bool branch_taken_0x3c7710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7710u;
        // 0x3c7714: 0x2918823  subu        $s1, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7710) {
            ctx->pc = 0x3C773Cu;
            goto label_3c773c;
        }
    }
    ctx->pc = 0x3C7718u;
label_3c7718:
    // 0x3c7718: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x3c7718u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c771c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c771cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7720: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3c7720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3c7724: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c7724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c7728: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x3c7728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x3c772c: 0xc0f1d4a  jal         func_3C7528
    ctx->pc = 0x3C772Cu;
    SET_GPR_U32(ctx, 31, 0x3C7734u);
    ctx->pc = 0x3C7730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C772Cu;
    // 0x3c7730: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7528u, 0x3C772Cu, 0x3C7734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7734u;
label_3c7734:
    // 0x3c7734: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3C7734u;
    {
        const bool branch_taken_0x3c7734 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7734u;
        // 0x3c7738: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7734) {
            ctx->pc = 0x3C7718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7718;
        }
    }
    ctx->pc = 0x3C773Cu;
label_3c773c:
    // 0x3c773c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3c773cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c7740: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3c7740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7744: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3c7744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c7748: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c7748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c774c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c774cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c7750: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3c7750u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c7754: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3c7754u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c7758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c775c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C775Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C775Cu;
        // 0x3c7760: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C775Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7764u;
    // 0x3c7764: 0x0  nop
    ctx->pc = 0x3c7764u;
    // NOP
    ctx->pc = 0x3c7768u;
}
