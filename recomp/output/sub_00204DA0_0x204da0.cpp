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

// Function: sub_00204DA0
// Address: 0x204da0 - 0x204fc0
void sub_00204DA0_0x204da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204DA0_0x204da0");
#endif

    switch (ctx->pc) {
        case 0x204df0u: goto label_204df0;
        case 0x204e10u: goto label_204e10;
        case 0x204e6cu: goto label_204e6c;
        case 0x204e7cu: goto label_204e7c;
        case 0x204e94u: goto label_204e94;
        case 0x204f08u: goto label_204f08;
        case 0x204f1cu: goto label_204f1c;
        case 0x204f4cu: goto label_204f4c;
        case 0x204f5cu: goto label_204f5c;
        case 0x204f70u: goto label_204f70;
        case 0x204f94u: goto label_204f94;
        default: break;
    }

    ctx->pc = 0x204da0u;

    // 0x204da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x204da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x204da4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x204da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x204da8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x204da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x204dac: 0x24421530  addiu       $v0, $v0, 0x1530
    ctx->pc = 0x204dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5424));
    // 0x204db0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x204db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204db4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x204db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x204db8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x204db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x204dbc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x204dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204dc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x204dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x204dc4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x204dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204dc8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x204dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x204dcc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x204dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204dd0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x204dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x204dd4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x204dd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204dd8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x204dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x204ddc: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x204ddcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204de0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x204de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x204de4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x204de4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204de8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x204DE8u;
    SET_GPR_U32(ctx, 31, 0x204DF0u);
    ctx->pc = 0x204DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204DE8u;
    // 0x204dec: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x204DE8u, 0x204DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DF0u;
label_204df0:
    // 0x204df0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x204df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x204df4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x204df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x204df8: 0x246314f8  addiu       $v1, $v1, 0x14F8
    ctx->pc = 0x204df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5368));
    // 0x204dfc: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x204dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    // 0x204e00: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x204E00u;
    {
        const bool branch_taken_0x204e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E00u;
        // 0x204e04: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e00) {
            ctx->pc = 0x204E8Cu;
            goto label_204e8c;
        }
    }
    ctx->pc = 0x204E08u;
    // 0x204e08: 0xc081710  jal         func_205C40
    ctx->pc = 0x204E08u;
    SET_GPR_U32(ctx, 31, 0x204E10u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x204E08u, 0x204E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E10u;
label_204e10:
    // 0x204e10: 0x16400014  bnez        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x204E10u;
    {
        const bool branch_taken_0x204e10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x204E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E10u;
        // 0x204e14: 0x341085c0  ori         $s0, $zero, 0x85C0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e10) {
            ctx->pc = 0x204E64u;
            goto label_204e64;
        }
    }
    ctx->pc = 0x204E18u;
    // 0x204e18: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x204e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x204e1c: 0x240661a8  addiu       $a2, $zero, 0x61A8
    ctx->pc = 0x204e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25000));
    // 0x204e20: 0x283001a  div         $zero, $s4, $v1
    ctx->pc = 0x204e20u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x204e24: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x204e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x204e28: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x204E28u;
    {
        const bool branch_taken_0x204e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x204e28) {
            ctx->pc = 0x204E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204E28u;
            // 0x204e2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x204E30u;
            goto label_204e30;
        }
    }
    ctx->pc = 0x204E30u;
label_204e30:
    // 0x204e30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x204e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204e34: 0x340785e4  ori         $a3, $zero, 0x85E4
    ctx->pc = 0x204e34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34276);
    // 0x204e38: 0x1012  mflo        $v0
    ctx->pc = 0x204e38u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x204e3c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x204e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x204e40: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x204e40u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x204e44: 0x1012  mflo        $v0
    ctx->pc = 0x204e44u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x204e48: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x204e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x204e4c: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x204e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x204e50: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x204e50u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x204e54: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x204e54u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x204e58: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x204e58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x204e5c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x204e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x204e60: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x204e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_204e64:
    // 0x204e64: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x204E64u;
    SET_GPR_U32(ctx, 31, 0x204E6Cu);
    ctx->pc = 0x204E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E64u;
    // 0x204e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x204E64u, 0x204E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E6Cu;
label_204e6c:
    // 0x204e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x204e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e74: 0xc0e6c3a  jal         func_39B0E8
    ctx->pc = 0x204E74u;
    SET_GPR_U32(ctx, 31, 0x204E7Cu);
    ctx->pc = 0x204E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E74u;
    // 0x204e78: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B0E8u, 0x204E74u, 0x204E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E7Cu;
label_204e7c:
    // 0x204e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204e80: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x204e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x204e84: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x204E84u;
    {
        const bool branch_taken_0x204e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E84u;
        // 0x204e88: 0xa2230020  sb          $v1, 0x20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e84) {
            ctx->pc = 0x204F24u;
            goto label_204f24;
        }
    }
    ctx->pc = 0x204E8Cu;
label_204e8c:
    // 0x204e8c: 0xc081710  jal         func_205C40
    ctx->pc = 0x204E8Cu;
    SET_GPR_U32(ctx, 31, 0x204E94u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x204E8Cu, 0x204E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E94u;
label_204e94:
    // 0x204e94: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x204E94u;
    {
        const bool branch_taken_0x204e94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E94u;
        // 0x204e98: 0x240240c0  addiu       $v0, $zero, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e94) {
            ctx->pc = 0x204EA4u;
            goto label_204ea4;
        }
    }
    ctx->pc = 0x204E9Cu;
    // 0x204e9c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x204E9Cu;
    {
        const bool branch_taken_0x204e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E9Cu;
        // 0x204ea0: 0x2621018  mult        $v0, $s3, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e9c) {
            ctx->pc = 0x204EFCu;
            goto label_204efc;
        }
    }
    ctx->pc = 0x204EA4u;
label_204ea4:
    // 0x204ea4: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x204ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x204ea8: 0x240761a8  addiu       $a3, $zero, 0x61A8
    ctx->pc = 0x204ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25000));
    // 0x204eac: 0x283001a  div         $zero, $s4, $v1
    ctx->pc = 0x204eacu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x204eb0: 0x240540c0  addiu       $a1, $zero, 0x40C0
    ctx->pc = 0x204eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16576));
    // 0x204eb4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x204eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x204eb8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x204EB8u;
    {
        const bool branch_taken_0x204eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x204eb8) {
            ctx->pc = 0x204EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204EB8u;
            // 0x204ebc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x204EC0u;
            goto label_204ec0;
        }
    }
    ctx->pc = 0x204EC0u;
label_204ec0:
    // 0x204ec0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x204ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204ec4: 0x1012  mflo        $v0
    ctx->pc = 0x204ec4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x204ec8: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x204ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x204ecc: 0x2652818  mult        $a1, $s3, $a1
    ctx->pc = 0x204eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x204ed0: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x204ed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x204ed4: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x204ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x204ed8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x204ed8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x204edc: 0x1012  mflo        $v0
    ctx->pc = 0x204edcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x204ee0: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x204ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x204ee4: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x204ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x204ee8: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x204ee8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x204eec: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x204eecu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x204ef0: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x204ef0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x204ef4: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x204ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x204ef8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x204ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_204efc:
    // 0x204efc: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x204efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x204f00: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x204F00u;
    SET_GPR_U32(ctx, 31, 0x204F08u);
    ctx->pc = 0x204F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F00u;
    // 0x204f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x204F00u, 0x204F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F08u;
label_204f08:
    // 0x204f08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x204f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x204f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f10: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x204f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x204f14: 0xc0e6b5a  jal         func_39AD68
    ctx->pc = 0x204F14u;
    SET_GPR_U32(ctx, 31, 0x204F1Cu);
    ctx->pc = 0x204F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F14u;
    // 0x204f18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AD68u, 0x204F14u, 0x204F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F1Cu;
label_204f1c:
    // 0x204f1c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x204f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x204f20: 0xa2200020  sb          $zero, 0x20($s1)
    ctx->pc = 0x204f20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
label_204f24:
    // 0x204f24: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x204F24u;
    {
        const bool branch_taken_0x204f24 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F24u;
        // 0x204f28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f24) {
            ctx->pc = 0x204F4Cu;
            goto label_204f4c;
        }
    }
    ctx->pc = 0x204F2Cu;
    // 0x204f2c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x204f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x204f30: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x204f30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x204f34: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x204f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x204f38: 0xa06093c0  sb          $zero, -0x6C40($v1)
    ctx->pc = 0x204f38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F93C0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F93C0u, _value); } while (0);
    // 0x204f3c: 0x24a55640  addiu       $a1, $a1, 0x5640
    ctx->pc = 0x204f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22080));
    // 0x204f40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x204f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f44: 0xc0e7296  jal         func_39CA58
    ctx->pc = 0x204F44u;
    SET_GPR_U32(ctx, 31, 0x204F4Cu);
    ctx->pc = 0x204F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F44u;
    // 0x204f48: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CA58u, 0x204F44u, 0x204F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F4Cu;
label_204f4c:
    // 0x204f4c: 0x52c0000a  beql        $s6, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x204F4Cu;
    {
        const bool branch_taken_0x204f4c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x204f4c) {
            ctx->pc = 0x204F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204F4Cu;
            // 0x204f50: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204F54u;
    // 0x204f54: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x204F54u;
    SET_GPR_U32(ctx, 31, 0x204F5Cu);
    ctx->pc = 0x204F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F54u;
    // 0x204f58: 0x24043000  addiu       $a0, $zero, 0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x204F54u, 0x204F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F5Cu;
label_204f5c:
    // 0x204f5c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x204f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x204f60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x204f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f64: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x204f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x204f68: 0xc0e784c  jal         func_39E130
    ctx->pc = 0x204F68u;
    SET_GPR_U32(ctx, 31, 0x204F70u);
    ctx->pc = 0x204F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F68u;
    // 0x204f6c: 0x24063000  addiu       $a2, $zero, 0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E130u, 0x204F68u, 0x204F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F70u;
label_204f70:
    // 0x204f70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204F70u;
    {
        const bool branch_taken_0x204f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F70u;
        // 0x204f74: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f70) {
            ctx->pc = 0x204F7Cu;
            goto label_204f7c;
        }
    }
    ctx->pc = 0x204F78u;
label_204f78:
    // 0x204f78: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x204f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_204f7c:
    // 0x204f7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x204f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f80: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x204f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x204f84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x204f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x204f88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x204f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204f8c: 0xc0e70a0  jal         func_39C280
    ctx->pc = 0x204F8Cu;
    SET_GPR_U32(ctx, 31, 0x204F94u);
    ctx->pc = 0x204F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F8Cu;
    // 0x204f90: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C280u, 0x204F8Cu, 0x204F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F94u;
label_204f94:
    // 0x204f94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x204f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204f9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x204f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x204fa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x204fa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204fa4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x204fa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204fa8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x204fa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204fac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x204facu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x204fb0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x204fb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204fb4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x204fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x204FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FB8u;
        // 0x204fbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204FC0u;
}
