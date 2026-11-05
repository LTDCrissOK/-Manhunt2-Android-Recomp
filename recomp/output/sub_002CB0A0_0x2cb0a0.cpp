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

// Function: sub_002CB0A0
// Address: 0x2cb0a0 - 0x2cb250
void sub_002CB0A0_0x2cb0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB0A0_0x2cb0a0");
#endif

    switch (ctx->pc) {
        case 0x2cb140u: goto label_2cb140;
        case 0x2cb16cu: goto label_2cb16c;
        case 0x2cb1fcu: goto label_2cb1fc;
        default: break;
    }

    ctx->pc = 0x2cb0a0u;

    // 0x2cb0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb0a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb0a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cb0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cb0ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cb0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2cb0b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb0b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cb0b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cb0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb0bc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CB0BCu;
    {
        const bool branch_taken_0x2cb0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0BCu;
        // 0x2cb0c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0bc) {
            ctx->pc = 0x2CB0F8u;
            goto label_2cb0f8;
        }
    }
    ctx->pc = 0x2CB0C4u;
    // 0x2cb0c4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2cb0c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cb0c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB0C8u;
    {
        const bool branch_taken_0x2cb0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0C8u;
        // 0x2cb0cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0c8) {
            ctx->pc = 0x2CB0E0u;
            goto label_2cb0e0;
        }
    }
    ctx->pc = 0x2CB0D0u;
    // 0x2cb0d0: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x2CB0D0u;
    {
        const bool branch_taken_0x2cb0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0D0u;
        // 0x2cb0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0d0) {
            ctx->pc = 0x2CB23Cu;
            goto label_2cb23c;
        }
    }
    ctx->pc = 0x2CB0D8u;
    // 0x2cb0d8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2CB0D8u;
    {
        const bool branch_taken_0x2cb0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0D8u;
        // 0x2cb0dc: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0d8) {
            ctx->pc = 0x2CB178u;
            goto label_2cb178;
        }
    }
    ctx->pc = 0x2CB0E0u;
label_2cb0e0:
    // 0x2cb0e0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CB0E0u;
    {
        const bool branch_taken_0x2cb0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CB0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0E0u;
        // 0x2cb0e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0e0) {
            ctx->pc = 0x2CB130u;
            goto label_2cb130;
        }
    }
    ctx->pc = 0x2CB0E8u;
    // 0x2cb0e8: 0x10620054  beq         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2CB0E8u;
    {
        const bool branch_taken_0x2cb0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CB0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0E8u;
        // 0x2cb0ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0e8) {
            ctx->pc = 0x2CB23Cu;
            goto label_2cb23c;
        }
    }
    ctx->pc = 0x2CB0F0u;
    // 0x2cb0f0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2CB0F0u;
    {
        const bool branch_taken_0x2cb0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0F0u;
        // 0x2cb0f4: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0f0) {
            ctx->pc = 0x2CB178u;
            goto label_2cb178;
        }
    }
    ctx->pc = 0x2CB0F8u;
label_2cb0f8:
    // 0x2cb0f8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2cb0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2cb0fc: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2cb0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2cb100: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CB100u;
    {
        const bool branch_taken_0x2cb100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb100) {
            ctx->pc = 0x2CB104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB100u;
            // 0x2cb104: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB108u;
            goto label_2cb108;
        }
    }
    ctx->pc = 0x2CB108u;
label_2cb108:
    // 0x2cb108: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2cb108u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cb10c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x2cb10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2cb110: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2cb110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb114: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2cb114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2cb118: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2cb118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2cb11c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2cb11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2cb120: 0x2810  mfhi        $a1
    ctx->pc = 0x2cb120u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2cb124: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2cb124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2cb128: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2CB128u;
    {
        const bool branch_taken_0x2cb128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB128u;
        // 0x2cb12c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb128) {
            ctx->pc = 0x2CB174u;
            goto label_2cb174;
        }
    }
    ctx->pc = 0x2CB130u;
label_2cb130:
    // 0x2cb130: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cb130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb134: 0x34058100  ori         $a1, $zero, 0x8100
    ctx->pc = 0x2cb134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x2cb138: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CB138u;
    SET_GPR_U32(ctx, 31, 0x2CB140u);
    ctx->pc = 0x2CB13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB138u;
    // 0x2cb13c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CB138u, 0x2CB140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB140u;
label_2cb140:
    // 0x2cb140: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x2cb140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x2cb144: 0x8e090044  lw          $t1, 0x44($s0)
    ctx->pc = 0x2cb144u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2cb148: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2cb148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2cb14c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cb14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb150: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cb150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cb154: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x2cb154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2cb158: 0x494823  subu        $t1, $v0, $t1
    ctx->pc = 0x2cb158u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2cb15c: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x2cb15cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2cb160: 0x37a7000c  ori         $a3, $sp, 0xC
    ctx->pc = 0x2cb160u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x2cb164: 0xc0b2c94  jal         func_2CB250
    ctx->pc = 0x2CB164u;
    SET_GPR_U32(ctx, 31, 0x2CB16Cu);
    ctx->pc = 0x2CB168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB164u;
    // 0x2cb168: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB250u, 0x2CB164u, 0x2CB16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB16Cu;
label_2cb16c:
    // 0x2cb16c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CB16Cu;
    {
        const bool branch_taken_0x2cb16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB16Cu;
        // 0x2cb170: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb16c) {
            ctx->pc = 0x2CB178u;
            goto label_2cb178;
        }
    }
    ctx->pc = 0x2CB174u;
label_2cb174:
    // 0x2cb174: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x2cb174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2cb178:
    // 0x2cb178: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cb178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cb17c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2cb17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2cb180: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x2cb180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2cb184: 0xa4282a  slt         $a1, $a1, $a0
    ctx->pc = 0x2cb184u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2cb188: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2cb188u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cb18c: 0x248303ff  addiu       $v1, $a0, 0x3FF
    ctx->pc = 0x2cb18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
    // 0x2cb190: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2cb190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2cb194: 0x85180b  movn        $v1, $a0, $a1
    ctx->pc = 0x2cb194u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2cb198: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x2cb198u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cb19c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CB19Cu;
    {
        const bool branch_taken_0x2cb19c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb19c) {
            ctx->pc = 0x2CB1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB19Cu;
            // 0x2cb1a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB1A4u;
            goto label_2cb1a4;
        }
    }
    ctx->pc = 0x2CB1A4u;
label_2cb1a4:
    // 0x2cb1a4: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x2cb1a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x2cb1a8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2cb1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cb1ac: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x2cb1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x2cb1b0: 0x8fac000c  lw          $t4, 0xC($sp)
    ctx->pc = 0x2cb1b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2cb1b4: 0x8e0a0030  lw          $t2, 0x30($s0)
    ctx->pc = 0x2cb1b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2cb1b8: 0xac2021  addu        $a0, $a1, $t4
    ctx->pc = 0x2cb1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2cb1bc: 0x28840400  slti        $a0, $a0, 0x400
    ctx->pc = 0x2cb1bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2cb1c0: 0x3810  mfhi        $a3
    ctx->pc = 0x2cb1c0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2cb1c4: 0xc74823  subu        $t1, $a2, $a3
    ctx->pc = 0x2cb1c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2cb1c8: 0x1474021  addu        $t0, $t2, $a3
    ctx->pc = 0x2cb1c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2cb1cc: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x2cb1ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2cb1d0: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x2cb1d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x2cb1d4: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CB1D4u;
    {
        const bool branch_taken_0x2cb1d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1D4u;
        // 0x2cb1d8: 0x695823  subu        $t3, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1d4) {
            ctx->pc = 0x2CB200u;
            goto label_2cb200;
        }
    }
    ctx->pc = 0x2CB1DCu;
    // 0x2cb1dc: 0x12b1021  addu        $v0, $t1, $t3
    ctx->pc = 0x2cb1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x2cb1e0: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x2cb1e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2cb1e4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB1E4u;
    {
        const bool branch_taken_0x2cb1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb1e4) {
            ctx->pc = 0x2CB1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB1E4u;
            // 0x2cb1e8: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB204u;
            goto label_2cb204;
        }
    }
    ctx->pc = 0x2CB1ECu;
    // 0x2cb1ec: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2cb1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cb1f0: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2cb1f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb1f4: 0xc0b2cbe  jal         func_2CB2F8
    ctx->pc = 0x2CB1F4u;
    SET_GPR_U32(ctx, 31, 0x2CB1FCu);
    ctx->pc = 0x2CB1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB1F4u;
    // 0x2cb1f8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB2F8u, 0x2CB1F4u, 0x2CB1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB1FCu;
label_2cb1fc:
    // 0x2cb1fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cb1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb200:
    // 0x2cb200: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2cb200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2cb204:
    // 0x2cb204: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cb204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb208: 0x8e060048  lw          $a2, 0x48($s0)
    ctx->pc = 0x2cb208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2cb20c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2cb20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2cb210: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x2cb210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2cb214: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x2cb214u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cb218: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2cb218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2cb21c: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x2cb21cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2cb220: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2cb220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2cb224: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x2cb224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    // 0x2cb228: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x2cb228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x2cb22c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CB22Cu;
    {
        const bool branch_taken_0x2cb22c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb22c) {
            ctx->pc = 0x2CB230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB22Cu;
            // 0x2cb230: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB234u;
            goto label_2cb234;
        }
    }
    ctx->pc = 0x2CB234u;
label_2cb234:
    // 0x2cb234: 0x3810  mfhi        $a3
    ctx->pc = 0x2cb234u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2cb238: 0xae07004c  sw          $a3, 0x4C($s0)
    ctx->pc = 0x2cb238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 7));
label_2cb23c:
    // 0x2cb23c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cb23cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb240: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2cb240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cb244: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb248: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB248u;
        // 0x2cb24c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB250u;
}
