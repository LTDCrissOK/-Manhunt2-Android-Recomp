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

// Function: sub_003D4100
// Address: 0x3d4100 - 0x3d4268
void sub_003D4100_0x3d4100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4100_0x3d4100");
#endif

    switch (ctx->pc) {
        case 0x3d4120u: goto label_3d4120;
        case 0x3d4130u: goto label_3d4130;
        case 0x3d4200u: goto label_3d4200;
        case 0x3d4258u: goto label_3d4258;
        default: break;
    }

    ctx->pc = 0x3d4100u;

    // 0x3d4100: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d4100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3d4104: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x3d4104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x3d4108: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x3d4108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x3d410c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3d410cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3d4110: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x3d4110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x3d4114: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3d4114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3d4118: 0xc0f4eae  jal         func_3D3AB8
    ctx->pc = 0x3D4118u;
    SET_GPR_U32(ctx, 31, 0x3D4120u);
    ctx->pc = 0x3D411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4118u;
    // 0x3d411c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3AB8u, 0x3D4118u, 0x3D4120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4120u;
label_3d4120:
    // 0x3d4120: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3d4120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3d4124: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x3d4124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x3d4128: 0xc0f4eae  jal         func_3D3AB8
    ctx->pc = 0x3D4128u;
    SET_GPR_U32(ctx, 31, 0x3D4130u);
    ctx->pc = 0x3D412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4128u;
    // 0x3d412c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3AB8u, 0x3D4128u, 0x3D4130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4130u;
label_3d4130:
    // 0x3d4130: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x3d4130u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d4134: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x3d4134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d4138: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4138u;
    {
        const bool branch_taken_0x3d4138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4138u;
        // 0x3d413c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4138) {
            ctx->pc = 0x3D4148u;
            goto label_3d4148;
        }
    }
    ctx->pc = 0x3D4140u;
    // 0x3d4140: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3D4140u;
    {
        const bool branch_taken_0x3d4140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4140u;
        // 0x3d4144: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4140) {
            ctx->pc = 0x3D4250u;
            goto label_3d4250;
        }
    }
    ctx->pc = 0x3D4148u;
label_3d4148:
    // 0x3d4148: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x3d4148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d414c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x3d414cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d4150: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x3D4150u;
    {
        const bool branch_taken_0x3d4150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4150u;
        // 0x3d4154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4150) {
            ctx->pc = 0x3D4250u;
            goto label_3d4250;
        }
    }
    ctx->pc = 0x3D4158u;
    // 0x3d4158: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3d4158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d415c: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x3d415cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x3d4160: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x3d4160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3d4164: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3d4164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3d4168: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4168u;
    {
        const bool branch_taken_0x3d4168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4168u;
        // 0x3d416c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4168) {
            ctx->pc = 0x3D417Cu;
            goto label_3d417c;
        }
    }
    ctx->pc = 0x3D4170u;
    // 0x3d4170: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x3d4170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x3d4174: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D4174u;
    {
        const bool branch_taken_0x3d4174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4174u;
        // 0x3d4178: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4174) {
            ctx->pc = 0x3D4190u;
            goto label_3d4190;
        }
    }
    ctx->pc = 0x3D417Cu;
label_3d417c:
    // 0x3d417c: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x3D417Cu;
    {
        const bool branch_taken_0x3d417c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x3D4180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D417Cu;
        // 0x3d4180: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d417c) {
            ctx->pc = 0x3D4250u;
            goto label_3d4250;
        }
    }
    ctx->pc = 0x3D4184u;
    // 0x3d4184: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3d4184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3d4188: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3D4188u;
    {
        const bool branch_taken_0x3d4188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4188u;
        // 0x3d418c: 0x24448e30  addiu       $a0, $v0, -0x71D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4188) {
            ctx->pc = 0x3D4250u;
            goto label_3d4250;
        }
    }
    ctx->pc = 0x3D4190u;
label_3d4190:
    // 0x3d4190: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D4190u;
    {
        const bool branch_taken_0x3d4190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4190u;
        // 0x3d4194: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4190) {
            ctx->pc = 0x3D41A8u;
            goto label_3d41a8;
        }
    }
    ctx->pc = 0x3D4198u;
    // 0x3d4198: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x3d4198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x3d419c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d419cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d41a0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3D41A0u;
    {
        const bool branch_taken_0x3d41a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D41A0u;
        // 0x3d41a4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d41a0) {
            ctx->pc = 0x3D4250u;
            goto label_3d4250;
        }
    }
    ctx->pc = 0x3D41A8u;
label_3d41a8:
    // 0x3d41a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D41A8u;
    {
        const bool branch_taken_0x3d41a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D41ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D41A8u;
        // 0x3d41ac: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d41a8) {
            ctx->pc = 0x3D41C0u;
            goto label_3d41c0;
        }
    }
    ctx->pc = 0x3D41B0u;
    // 0x3d41b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d41b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d41b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d41b8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3D41B8u;
    {
        const bool branch_taken_0x3d41b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D41B8u;
        // 0x3d41bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d41b8) {
            ctx->pc = 0x3D4250u;
            goto label_3d4250;
        }
    }
    ctx->pc = 0x3D41C0u;
label_3d41c0:
    // 0x3d41c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3d41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3d41c4: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x3d41c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d41c8: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x3d41c8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d41cc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3d41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d41d0: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x3d41d0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d41d4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D41D4u;
    {
        const bool branch_taken_0x3d41d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D41D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D41D4u;
        // 0x3d41d8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d41d4) {
            ctx->pc = 0x3D41ECu;
            goto label_3d41ec;
        }
    }
    ctx->pc = 0x3D41DCu;
    // 0x3d41dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d41e0: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x3d41e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x3d41e4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3d41e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3d41e8: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x3d41e8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3d41ec:
    // 0x3d41ec: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3d41ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3d41f0: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x3d41f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x3d41f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D41F4u;
    {
        const bool branch_taken_0x3d41f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D41F4u;
        // 0x3d41f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d41f4) {
            ctx->pc = 0x3D4204u;
            goto label_3d4204;
        }
    }
    ctx->pc = 0x3D41FCu;
    // 0x3d41fc: 0x0  nop
    ctx->pc = 0x3d41fcu;
    // NOP
label_3d4200:
    // 0x3d4200: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x3d4200u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3d4204:
    // 0x3d4204: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4204u;
    {
        const bool branch_taken_0x3d4204 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4204) {
            ctx->pc = 0x3D4208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4204u;
            // 0x3d4208: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4218u;
            goto label_3d4218;
        }
    }
    ctx->pc = 0x3D420Cu;
    // 0x3d420c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3d420cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3d4210: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x3d4210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x3d4214: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x3d4214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_3d4218:
    // 0x3d4218: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D4218u;
    {
        const bool branch_taken_0x3d4218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4218u;
        // 0x3d421c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4218) {
            ctx->pc = 0x3D4200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4200;
        }
    }
    ctx->pc = 0x3D4220u;
    // 0x3d4220: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x3d4220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3d4224: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3d4224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3d4228: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D4228u;
    {
        const bool branch_taken_0x3d4228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d4228) {
            ctx->pc = 0x3D422Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4228u;
            // 0x3d422c: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D424Cu;
            goto label_3d424c;
        }
    }
    ctx->pc = 0x3D4230u;
    // 0x3d4230: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x3d4230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x3d4234: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4234u;
    {
        const bool branch_taken_0x3d4234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4234u;
        // 0x3d4238: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4234) {
            ctx->pc = 0x3D4244u;
            goto label_3d4244;
        }
    }
    ctx->pc = 0x3D423Cu;
    // 0x3d423c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D423Cu;
    {
        const bool branch_taken_0x3d423c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D423Cu;
        // 0x3d4240: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d423c) {
            ctx->pc = 0x3D4248u;
            goto label_3d4248;
        }
    }
    ctx->pc = 0x3D4244u;
label_3d4244:
    // 0x3d4244: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x3d4244u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_3d4248:
    // 0x3d4248: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x3d4248u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_3d424c:
    // 0x3d424c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3d424cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d4250:
    // 0x3d4250: 0xc0f4e62  jal         func_3D3988
    ctx->pc = 0x3D4250u;
    SET_GPR_U32(ctx, 31, 0x3D4258u);
    ctx->pc = 0x3D3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3988u, 0x3D4250u, 0x3D4258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4258u;
label_3d4258:
    // 0x3d4258: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3d4258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d425c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x3d425cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d4260: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4260u;
        // 0x3d4264: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4268u;
}
