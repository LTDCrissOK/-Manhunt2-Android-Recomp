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

// Function: sub_003A30B8
// Address: 0x3a30b8 - 0x3a3290
void sub_003A30B8_0x3a30b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A30B8_0x3a30b8");
#endif

    switch (ctx->pc) {
        case 0x3a3110u: goto label_3a3110;
        case 0x3a3150u: goto label_3a3150;
        case 0x3a3164u: goto label_3a3164;
        case 0x3a3170u: goto label_3a3170;
        case 0x3a3190u: goto label_3a3190;
        case 0x3a31a0u: goto label_3a31a0;
        case 0x3a31acu: goto label_3a31ac;
        case 0x3a320cu: goto label_3a320c;
        case 0x3a321cu: goto label_3a321c;
        case 0x3a322cu: goto label_3a322c;
        case 0x3a3248u: goto label_3a3248;
        default: break;
    }

    ctx->pc = 0x3a30b8u;

    // 0x3a30b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a30b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a30bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a30bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a30c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3a30c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3a30c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a30c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a30c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a30c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a30cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a30ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a30d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3a30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a30d4: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3A30D4u;
    {
        const bool branch_taken_0x3a30d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30D4u;
        // 0x3a30d8: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a30d4) {
            ctx->pc = 0x3A3134u;
            goto label_3a3134;
        }
    }
    ctx->pc = 0x3A30DCu;
    // 0x3a30dc: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x3a30dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a30e0: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x3a30e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3a30e4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A30E4u;
    {
        const bool branch_taken_0x3a30e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a30e4) {
            ctx->pc = 0x3A30E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A30E4u;
            // 0x3a30e8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3134u;
            goto label_3a3134;
        }
    }
    ctx->pc = 0x3A30ECu;
    // 0x3a30ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a30ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a30f0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3a30f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3a30f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a30f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a30f8: 0x8c63d3e0  lw          $v1, -0x2C20($v1)
    ctx->pc = 0x3a30f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956000)));
    // 0x3a30fc: 0x600008  jr          $v1
    ctx->pc = 0x3A30FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A3108u: goto label_3a3108;
            case 0x3A3128u: goto label_3a3128;
            case 0x3A3130u: goto label_3a3130;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A30FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A3104u;
    // 0x3a3104: 0x0  nop
    ctx->pc = 0x3a3104u;
    // NOP
label_3a3108:
    // 0x3a3108: 0xc0e8aba  jal         func_3A2AE8
    ctx->pc = 0x3A3108u;
    SET_GPR_U32(ctx, 31, 0x3A3110u);
    ctx->pc = 0x3A310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3108u;
    // 0x3a310c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2AE8u, 0x3A3108u, 0x3A3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3110u;
label_3a3110:
    // 0x3a3110: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3a3110u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a3114: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a3114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a3118: 0x24631e24  addiu       $v1, $v1, 0x1E24
    ctx->pc = 0x3a3118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7716));
    // 0x3a311c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a311cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x411E24u));
    // 0x3a3120: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a3120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a3124: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3a3124u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x411E24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411E24u, _value); } while (0);
label_3a3128:
    // 0x3a3128: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3a3128u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a312c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a312cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a3130:
    // 0x3a3130: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3a3130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3a3134:
    // 0x3a3134: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x3a3134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3a3138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a3138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a313c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a313cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a3140: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3A3140u;
    {
        const bool branch_taken_0x3a3140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a3140) {
            ctx->pc = 0x3A3144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3140u;
            // 0x3a3144: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A31F4u;
            goto label_3a31f4;
        }
    }
    ctx->pc = 0x3A3148u;
    // 0x3a3148: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A3148u;
    SET_GPR_U32(ctx, 31, 0x3A3150u);
    ctx->pc = 0x3A314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3148u;
    // 0x3a314c: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A3148u, 0x3A3150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3150u;
label_3a3150:
    // 0x3a3150: 0xde250028  ld          $a1, 0x28($s1)
    ctx->pc = 0x3a3150u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3a3154: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3a3154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3a3158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a3158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a315c: 0xc0e8d5c  jal         func_3A3570
    ctx->pc = 0x3A315Cu;
    SET_GPR_U32(ctx, 31, 0x3A3164u);
    ctx->pc = 0x3A3160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A315Cu;
    // 0x3a3160: 0x52af8  dsll        $a1, $a1, 11 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3570u, 0x3A315Cu, 0x3A3164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3164u;
label_3a3164:
    // 0x3a3164: 0x24042001  addiu       $a0, $zero, 0x2001
    ctx->pc = 0x3a3164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8193));
    // 0x3a3168: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A3168u;
    SET_GPR_U32(ctx, 31, 0x3A3170u);
    ctx->pc = 0x3A316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3168u;
    // 0x3a316c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A3168u, 0x3A3170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3170u;
label_3a3170:
    // 0x3a3170: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3170u;
    {
        const bool branch_taken_0x3a3170 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3A3174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3170u;
        // 0x3a3174: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3170) {
            ctx->pc = 0x3A3188u;
            goto label_3a3188;
        }
    }
    ctx->pc = 0x3A3178u;
    // 0x3a3178: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x3a3178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3a317c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3a317cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3a3180: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x3a3180u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a3184: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x3a3184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_3a3188:
    // 0x3a3188: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A3188u;
    SET_GPR_U32(ctx, 31, 0x3A3190u);
    ctx->pc = 0x3A318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3188u;
    // 0x3a318c: 0x24042100  addiu       $a0, $zero, 0x2100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A3188u, 0x3A3190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3190u;
label_3a3190:
    // 0x3a3190: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3a3190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3a3194: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x3a3194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3a3198: 0xc0e8dd8  jal         func_3A3760
    ctx->pc = 0x3A3198u;
    SET_GPR_U32(ctx, 31, 0x3A31A0u);
    ctx->pc = 0x3A319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3198u;
    // 0x3a319c: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3760u, 0x3A3198u, 0x3A31A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A31A0u;
label_3a31a0:
    // 0x3a31a0: 0x24042101  addiu       $a0, $zero, 0x2101
    ctx->pc = 0x3a31a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8449));
    // 0x3a31a4: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A31A4u;
    SET_GPR_U32(ctx, 31, 0x3A31ACu);
    ctx->pc = 0x3A31A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A31A4u;
    // 0x3a31a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A31A4u, 0x3A31ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A31ACu;
label_3a31ac:
    // 0x3a31ac: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A31ACu;
    {
        const bool branch_taken_0x3a31ac = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3A31B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A31ACu;
        // 0x3a31b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a31ac) {
            ctx->pc = 0x3A31D8u;
            goto label_3a31d8;
        }
    }
    ctx->pc = 0x3A31B4u;
    // 0x3a31b4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a31b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a31b8: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x3a31b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a31bc: 0x24631e20  addiu       $v1, $v1, 0x1E20
    ctx->pc = 0x3a31bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7712));
    // 0x3a31c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3a31c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a31c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x411E20u));
    // 0x3a31c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a31cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3a31ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x411E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411E20u, _value); } while (0);
    // 0x3a31d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A31D0u;
    {
        const bool branch_taken_0x3a31d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A31D0u;
        // 0x3a31d4: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a31d0) {
            ctx->pc = 0x3A31F4u;
            goto label_3a31f4;
        }
    }
    ctx->pc = 0x3A31D8u;
label_3a31d8:
    // 0x3a31d8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x3a31d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3a31dc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3a31dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3a31e0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3a31e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3a31e4: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x3a31e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a31e8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3a31e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3a31ec: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x3a31ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x3a31f0: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x3a31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_3a31f4:
    // 0x3a31f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a31f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a31f8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a31f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a31fc: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A31FCu;
    {
        const bool branch_taken_0x3a31fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A3200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A31FCu;
        // 0x3a3200: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a31fc) {
            ctx->pc = 0x3A3274u;
            goto label_3a3274;
        }
    }
    ctx->pc = 0x3A3204u;
    // 0x3a3204: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A3204u;
    SET_GPR_U32(ctx, 31, 0x3A320Cu);
    ctx->pc = 0x3A3208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3204u;
    // 0x3a3208: 0x24042200  addiu       $a0, $zero, 0x2200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A3204u, 0x3A320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A320Cu;
label_3a320c:
    // 0x3a320c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3a320cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3a3210: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a3210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3214: 0xc0e8d8a  jal         func_3A3628
    ctx->pc = 0x3A3214u;
    SET_GPR_U32(ctx, 31, 0x3A321Cu);
    ctx->pc = 0x3A3218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3214u;
    // 0x3a3218: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3628u, 0x3A3214u, 0x3A321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A321Cu;
label_3a321c:
    // 0x3a321c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A321Cu;
    {
        const bool branch_taken_0x3a321c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3a321c) {
            ctx->pc = 0x3A3240u;
            goto label_3a3240;
        }
    }
    ctx->pc = 0x3A3224u;
    // 0x3a3224: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A3224u;
    SET_GPR_U32(ctx, 31, 0x3A322Cu);
    ctx->pc = 0x3A3228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3224u;
    // 0x3a3228: 0x24042201  addiu       $a0, $zero, 0x2201 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8705));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A3224u, 0x3A322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A322Cu;
label_3a322c:
    // 0x3a322c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3a322cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3a3230: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a3230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a3234: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x3a3234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a3238: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A3238u;
    {
        const bool branch_taken_0x3a3238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3238u;
        // 0x3a323c: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3238) {
            ctx->pc = 0x3A3270u;
            goto label_3a3270;
        }
    }
    ctx->pc = 0x3A3240u;
label_3a3240:
    // 0x3a3240: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A3240u;
    SET_GPR_U32(ctx, 31, 0x3A3248u);
    ctx->pc = 0x3A3244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3240u;
    // 0x3a3244: 0x24042202  addiu       $a0, $zero, 0x2202 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8706));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A3240u, 0x3A3248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3248u;
label_3a3248:
    // 0x3a3248: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3a3248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a324c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A324Cu;
    {
        const bool branch_taken_0x3a324c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A324Cu;
        // 0x3a3250: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a324c) {
            ctx->pc = 0x3A3274u;
            goto label_3a3274;
        }
    }
    ctx->pc = 0x3A3254u;
    // 0x3a3254: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a3254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a3258: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a3258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a325c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x3a325cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a3260: 0x24631e24  addiu       $v1, $v1, 0x1E24
    ctx->pc = 0x3a3260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7716));
    // 0x3a3264: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a3264u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x411E24u));
    // 0x3a3268: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a3268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a326c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3a326cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x411E24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411E24u, _value); } while (0);
label_3a3270:
    // 0x3a3270: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a3270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3274:
    // 0x3a3274: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a3274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a3278: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a3278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a327c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A327Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A327Cu;
        // 0x3a3280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A327Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3284u;
    // 0x3a3284: 0x0  nop
    ctx->pc = 0x3a3284u;
    // NOP
    // 0x3a3288: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x3a3288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x3a328c: 0x0  nop
    ctx->pc = 0x3a328cu;
    // NOP
    ctx->pc = 0x3a3290u;
}
