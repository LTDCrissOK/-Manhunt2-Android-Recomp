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

// Function: sub_003A6020
// Address: 0x3a6020 - 0x3a61b0
void sub_003A6020_0x3a6020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6020_0x3a6020");
#endif

    switch (ctx->pc) {
        case 0x3a6084u: goto label_3a6084;
        case 0x3a6098u: goto label_3a6098;
        case 0x3a60d0u: goto label_3a60d0;
        case 0x3a6114u: goto label_3a6114;
        case 0x3a612cu: goto label_3a612c;
        case 0x3a614cu: goto label_3a614c;
        case 0x3a6154u: goto label_3a6154;
        case 0x3a616cu: goto label_3a616c;
        default: break;
    }

    ctx->pc = 0x3a6020u;

    // 0x3a6020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a6020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a6024: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a6024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a6028: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a6028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a602c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a6030: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a6030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6034: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a6034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a6038: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3a6038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a603c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a6040: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a6040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a6044: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3a6044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3a6048: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A6048u;
    {
        const bool branch_taken_0x3a6048 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6048u;
        // 0x3a604c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6048) {
            ctx->pc = 0x3A6060u;
            goto label_3a6060;
        }
    }
    ctx->pc = 0x3A6050u;
    // 0x3a6050: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a6050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a6054: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A6054u;
    {
        const bool branch_taken_0x3a6054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6054u;
        // 0x3a6058: 0x24a5ddd0  addiu       $a1, $a1, -0x2230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6054) {
            ctx->pc = 0x3A607Cu;
            goto label_3a607c;
        }
    }
    ctx->pc = 0x3A605Cu;
    // 0x3a605c: 0x0  nop
    ctx->pc = 0x3a605cu;
    // NOP
label_3a6060:
    // 0x3a6060: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6060u;
    {
        const bool branch_taken_0x3a6060 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x3A6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6060u;
        // 0x3a6064: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6060) {
            ctx->pc = 0x3A6070u;
            goto label_3a6070;
        }
    }
    ctx->pc = 0x3A6068u;
    // 0x3a6068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6068u;
    {
        const bool branch_taken_0x3a6068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6068u;
        // 0x3a606c: 0x24a5dde8  addiu       $a1, $a1, -0x2218 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6068) {
            ctx->pc = 0x3A607Cu;
            goto label_3a607c;
        }
    }
    ctx->pc = 0x3A6070u;
label_3a6070:
    // 0x3a6070: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A6070u;
    {
        const bool branch_taken_0x3a6070 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6070u;
        // 0x3a6074: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6070) {
            ctx->pc = 0x3A6090u;
            goto label_3a6090;
        }
    }
    ctx->pc = 0x3A6078u;
    // 0x3a6078: 0x24a5de08  addiu       $a1, $a1, -0x21F8
    ctx->pc = 0x3a6078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958600));
label_3a607c:
    // 0x3a607c: 0xc0e960a  jal         func_3A5828
    ctx->pc = 0x3A607Cu;
    SET_GPR_U32(ctx, 31, 0x3A6084u);
    ctx->pc = 0x3A5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5828u, 0x3A607Cu, 0x3A6084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6084u;
label_3a6084:
    // 0x3a6084: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3A6084u;
    {
        const bool branch_taken_0x3a6084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6084u;
        // 0x3a6088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6084) {
            ctx->pc = 0x3A618Cu;
            goto label_3a618c;
        }
    }
    ctx->pc = 0x3A608Cu;
    // 0x3a608c: 0x0  nop
    ctx->pc = 0x3a608cu;
    // NOP
label_3a6090:
    // 0x3a6090: 0xc0e9616  jal         func_3A5858
    ctx->pc = 0x3A6090u;
    SET_GPR_U32(ctx, 31, 0x3A6098u);
    ctx->pc = 0x3A6094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6090u;
    // 0x3a6094: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5858u, 0x3A6090u, 0x3A6098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6098u;
label_3a6098:
    // 0x3a6098: 0x54540003  bnel        $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6098u;
    {
        const bool branch_taken_0x3a6098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x3a6098) {
            ctx->pc = 0x3A609Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6098u;
            // 0x3a609c: 0x82230002  lb          $v1, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A60A8u;
            goto label_3a60a8;
        }
    }
    ctx->pc = 0x3A60A0u;
    // 0x3a60a0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3A60A0u;
    {
        const bool branch_taken_0x3a60a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60A0u;
        // 0x3a60a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a60a0) {
            ctx->pc = 0x3A618Cu;
            goto label_3a618c;
        }
    }
    ctx->pc = 0x3A60A8u;
label_3a60a8:
    // 0x3a60a8: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x3a60a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a60ac: 0x10750037  beq         $v1, $s5, . + 4 + (0x37 << 2)
    ctx->pc = 0x3A60ACu;
    {
        const bool branch_taken_0x3a60ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x3A60B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60ACu;
        // 0x3a60b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a60ac) {
            ctx->pc = 0x3A618Cu;
            goto label_3a618c;
        }
    }
    ctx->pc = 0x3A60B4u;
    // 0x3a60b4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A60B4u;
    {
        const bool branch_taken_0x3a60b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a60b4) {
            ctx->pc = 0x3A60C8u;
            goto label_3a60c8;
        }
    }
    ctx->pc = 0x3A60BCu;
    // 0x3a60bc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3A60BCu;
    {
        const bool branch_taken_0x3a60bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60BCu;
        // 0x3a60c0: 0xa2340002  sb          $s4, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a60bc) {
            ctx->pc = 0x3A618Cu;
            goto label_3a618c;
        }
    }
    ctx->pc = 0x3A60C4u;
    // 0x3a60c4: 0x0  nop
    ctx->pc = 0x3a60c4u;
    // NOP
label_3a60c8:
    // 0x3a60c8: 0xc0e89f0  jal         func_3A27C0
    ctx->pc = 0x3A60C8u;
    SET_GPR_U32(ctx, 31, 0x3A60D0u);
    ctx->pc = 0x3A27C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A27C0u, 0x3A60C8u, 0x3A60D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A60D0u;
label_3a60d0:
    // 0x3a60d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a60d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a60d4: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3A60D4u;
    {
        const bool branch_taken_0x3a60d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A60D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60D4u;
        // 0x3a60d8: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a60d4) {
            ctx->pc = 0x3A618Cu;
            goto label_3a618c;
        }
    }
    ctx->pc = 0x3A60DCu;
    // 0x3a60dc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3a60dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3a60e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a60e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a60e4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3a60e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3a60e8: 0x1282c0  sll         $s0, $s2, 11
    ctx->pc = 0x3a60e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x3a60ec: 0xde270008  ld          $a3, 0x8($s1)
    ctx->pc = 0x3a60ecu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a60f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3a60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a60f4: 0xae330020  sw          $s3, 0x20($s1)
    ctx->pc = 0x3a60f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 19));
    // 0x3a60f8: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x3a60f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a60fc: 0xf0302b  sltu        $a2, $a3, $s0
    ctx->pc = 0x3a60fcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3a6100: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x3a6100u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x3a6104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a6104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6108: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x3a6108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x3a610c: 0xc0e962c  jal         func_3A58B0
    ctx->pc = 0x3A610Cu;
    SET_GPR_U32(ctx, 31, 0x3A6114u);
    ctx->pc = 0x3A6110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A610Cu;
    // 0x3a6110: 0xe6800b  movn        $s0, $a3, $a2 (Delay Slot)
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58B0u, 0x3A610Cu, 0x3A6114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6114u;
label_3a6114:
    // 0x3a6114: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x3a6114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x3a6118: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x3a6118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3a611c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3a611cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6120: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x3a6120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3a6124: 0xc0e8a76  jal         func_3A29D8
    ctx->pc = 0x3A6124u;
    SET_GPR_U32(ctx, 31, 0x3A612Cu);
    ctx->pc = 0x3A6128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6124u;
    // 0x3a6128: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A29D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A29D8u, 0x3A6124u, 0x3A612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A612Cu;
label_3a612c:
    // 0x3a612c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3A612Cu;
    {
        const bool branch_taken_0x3a612c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A612Cu;
        // 0x3a6130: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a612c) {
            ctx->pc = 0x3A6190u;
            goto label_3a6190;
        }
    }
    ctx->pc = 0x3A6134u;
    // 0x3a6134: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a6134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a6138: 0x8c503d50  lw          $s0, 0x3D50($v0)
    ctx->pc = 0x3a6138u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x413D50u));
    // 0x3a613c: 0x56140010  bnel        $s0, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A613Cu;
    {
        const bool branch_taken_0x3a613c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x3a613c) {
            ctx->pc = 0x3A6140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A613Cu;
            // 0x3a6140: 0xa2350002  sb          $s5, 0x2($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6180u;
            goto label_3a6180;
        }
    }
    ctx->pc = 0x3A6144u;
    // 0x3a6144: 0xc0e8cea  jal         func_3A33A8
    ctx->pc = 0x3A6144u;
    SET_GPR_U32(ctx, 31, 0x3A614Cu);
    ctx->pc = 0x3A33A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A33A8u, 0x3A6144u, 0x3A614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A614Cu;
label_3a614c:
    // 0x3a614c: 0xc0e8ca4  jal         func_3A3290
    ctx->pc = 0x3A614Cu;
    SET_GPR_U32(ctx, 31, 0x3A6154u);
    ctx->pc = 0x3A3290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3290u, 0x3A614Cu, 0x3A6154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6154u;
label_3a6154:
    // 0x3a6154: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3a6154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3a6158: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3a6158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3a615c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x3a615cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x3a6160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a6160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a6164: 0xc0e8a12  jal         func_3A2848
    ctx->pc = 0x3A6164u;
    SET_GPR_U32(ctx, 31, 0x3A616Cu);
    ctx->pc = 0x3A6168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6164u;
    // 0x3a6168: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2848u, 0x3A6164u, 0x3A616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A616Cu;
label_3a616c:
    // 0x3a616c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x3a616cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x3a6170: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3a6170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3a6174: 0xa2300002  sb          $s0, 0x2($s1)
    ctx->pc = 0x3a6174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x3a6178: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6178u;
    {
        const bool branch_taken_0x3a6178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6178u;
        // 0x3a617c: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6178) {
            ctx->pc = 0x3A6188u;
            goto label_3a6188;
        }
    }
    ctx->pc = 0x3A6180u;
label_3a6180:
    // 0x3a6180: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x3a6180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x3a6184: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3a6184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3a6188:
    // 0x3a6188: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x3a6188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_3a618c:
    // 0x3a618c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a618cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a6190:
    // 0x3a6190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a6190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a6194: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a6194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6198: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a6198u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a619c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a619cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a61a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3a61a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a61a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a61a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a61a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A61A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A61A8u;
        // 0x3a61ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A61A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A61B0u;
}
