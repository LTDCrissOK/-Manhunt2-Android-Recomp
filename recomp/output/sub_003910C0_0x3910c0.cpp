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

// Function: sub_003910C0
// Address: 0x3910c0 - 0x3913a8
void sub_003910C0_0x3910c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003910C0_0x3910c0");
#endif

    switch (ctx->pc) {
        case 0x391124u: goto label_391124;
        case 0x391128u: goto label_391128;
        case 0x391170u: goto label_391170;
        case 0x3912f8u: goto label_3912f8;
        case 0x391300u: goto label_391300;
        default: break;
    }

    ctx->pc = 0x3910c0u;

    // 0x3910c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3910c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3910c4: 0x44086800  mfc1        $t0, $f13
    ctx->pc = 0x3910c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3910c8: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x3910c8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x3910cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3910ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3910d0: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3910d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3910d4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3910d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3910d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3910d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3910dc: 0xe22824  and         $a1, $a3, $v0
    ctx->pc = 0x3910dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x3910e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3910e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3910e4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3910e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3910e8: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x3910e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3910ec: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x3910ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x3910f0: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x3910f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3910f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3910F4u;
    {
        const bool branch_taken_0x3910f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3910F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3910F4u;
        // 0x3910f8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3910f4) {
            ctx->pc = 0x391108u;
            goto label_391108;
        }
    }
    ctx->pc = 0x3910FCu;
    // 0x3910fc: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x3910fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x391100: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x391100u;
    {
        const bool branch_taken_0x391100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391100u;
        // 0x391104: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391100) {
            ctx->pc = 0x391114u;
            goto label_391114;
        }
    }
    ctx->pc = 0x391108u;
label_391108:
    // 0x391108: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x391108u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39110c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x39110Cu;
    {
        const bool branch_taken_0x39110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39110Cu;
        // 0x391110: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39110c) {
            ctx->pc = 0x391398u;
            goto label_391398;
        }
    }
    ctx->pc = 0x391114u;
label_391114:
    // 0x391114: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x391114u;
    {
        const bool branch_taken_0x391114 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x391118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391114u;
        // 0x391118: 0x71783  sra         $v0, $a3, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391114) {
            ctx->pc = 0x39112Cu;
            goto label_39112c;
        }
    }
    ctx->pc = 0x39111Cu;
    // 0x39111c: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x39111Cu;
    SET_GPR_U32(ctx, 31, 0x391124u);
    ctx->pc = 0x391120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39111Cu;
    // 0x391120: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x39111Cu, 0x391124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391124u;
label_391124:
    // 0x391124: 0x1000009d  b           . + 4 + (0x9D << 2)
label_391128:
    if (ctx->pc == 0x391128u) {
        ctx->pc = 0x391128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391124u;
        // 0x391128: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39112Cu;
        goto label_39112c;
    }
    ctx->pc = 0x391124u;
    {
        const bool branch_taken_0x391124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391124u;
        // 0x391128: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391124) {
            ctx->pc = 0x39139Cu;
            goto label_39139c;
        }
    }
    ctx->pc = 0x39112Cu;
label_39112c:
    // 0x39112c: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x39112cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x391130: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x391130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x391134: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x391134u;
    {
        const bool branch_taken_0x391134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x391138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391134u;
        // 0x391138: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391134) {
            ctx->pc = 0x391168u;
            goto label_391168;
        }
    }
    ctx->pc = 0x39113Cu;
    // 0x39113c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x391140: 0x1202004f  beq         $s0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x391140u;
    {
        const bool branch_taken_0x391140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x391144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391140u;
        // 0x391144: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391140) {
            ctx->pc = 0x391280u;
            goto label_391280;
        }
    }
    ctx->pc = 0x391148u;
    // 0x391148: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x391148u;
    {
        const bool branch_taken_0x391148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391148u;
        // 0x39114c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391148) {
            ctx->pc = 0x391160u;
            goto label_391160;
        }
    }
    ctx->pc = 0x391150u;
    // 0x391150: 0x12020050  beq         $s0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x391150u;
    {
        const bool branch_taken_0x391150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x391150) {
            ctx->pc = 0x391294u;
            goto label_391294;
        }
    }
    ctx->pc = 0x391158u;
    // 0x391158: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x391158u;
    {
        const bool branch_taken_0x391158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391158) {
            ctx->pc = 0x391168u;
            goto label_391168;
        }
    }
    ctx->pc = 0x391160u;
label_391160:
    // 0x391160: 0x601008e  bgez        $s0, . + 4 + (0x8E << 2)
    ctx->pc = 0x391160u;
    {
        const bool branch_taken_0x391160 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x391164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391160u;
        // 0x391164: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391160) {
            ctx->pc = 0x39139Cu;
            goto label_39139c;
        }
    }
    ctx->pc = 0x391168u;
label_391168:
    // 0x391168: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x391168u;
    {
        const bool branch_taken_0x391168 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x39116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391168u;
        // 0x39116c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391168) {
            ctx->pc = 0x391198u;
            goto label_391198;
        }
    }
    ctx->pc = 0x391170u;
label_391170:
    // 0x391170: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x391170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x391174: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x391174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x391178: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39117c: 0x4c10087  bgez        $a2, . + 4 + (0x87 << 2)
    ctx->pc = 0x39117Cu;
    {
        const bool branch_taken_0x39117c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x391180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39117Cu;
        // 0x391180: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39117c) {
            ctx->pc = 0x39139Cu;
            goto label_39139c;
        }
    }
    ctx->pc = 0x391184u;
    // 0x391184: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x391184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x391188: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x391188u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x39118c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39118cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391190: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x391190u;
    {
        const bool branch_taken_0x391190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391190u;
        // 0x391194: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391190) {
            ctx->pc = 0x3913A0u;
            goto label_3913a0;
        }
    }
    ctx->pc = 0x391198u;
label_391198:
    // 0x391198: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x391198u;
    {
        const bool branch_taken_0x391198 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x39119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391198u;
        // 0x39119c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391198) {
            ctx->pc = 0x3912A8u;
            goto label_3912a8;
        }
    }
    ctx->pc = 0x3911A0u;
    // 0x3911a0: 0x14850023  bne         $a0, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3911A0u;
    {
        const bool branch_taken_0x3911a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3911A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3911A0u;
        // 0x3911a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3911a0) {
            ctx->pc = 0x391230u;
            goto label_391230;
        }
    }
    ctx->pc = 0x3911A8u;
    // 0x3911a8: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3911A8u;
    {
        const bool branch_taken_0x3911a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3911ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3911A8u;
        // 0x3911ac: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3911a8) {
            ctx->pc = 0x3911F4u;
            goto label_3911f4;
        }
    }
    ctx->pc = 0x3911B0u;
    // 0x3911b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3911B0u;
    {
        const bool branch_taken_0x3911b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3911B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3911B0u;
        // 0x3911b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3911b0) {
            ctx->pc = 0x3911C8u;
            goto label_3911c8;
        }
    }
    ctx->pc = 0x3911B8u;
    // 0x3911b8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3911B8u;
    {
        const bool branch_taken_0x3911b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3911BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3911B8u;
        // 0x3911bc: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3911b8) {
            ctx->pc = 0x3911E0u;
            goto label_3911e0;
        }
    }
    ctx->pc = 0x3911C0u;
    // 0x3911c0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3911C0u;
    {
        const bool branch_taken_0x3911c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3911c0) {
            ctx->pc = 0x3912A8u;
            goto label_3912a8;
        }
    }
    ctx->pc = 0x3911C8u;
label_3911c8:
    // 0x3911c8: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3911C8u;
    {
        const bool branch_taken_0x3911c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3911CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3911C8u;
        // 0x3911cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3911c8) {
            ctx->pc = 0x391208u;
            goto label_391208;
        }
    }
    ctx->pc = 0x3911D0u;
    // 0x3911d0: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3911D0u;
    {
        const bool branch_taken_0x3911d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3911D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3911D0u;
        // 0x3911d4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3911d0) {
            ctx->pc = 0x39121Cu;
            goto label_39121c;
        }
    }
    ctx->pc = 0x3911D8u;
    // 0x3911d8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3911D8u;
    {
        const bool branch_taken_0x3911d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3911d8) {
            ctx->pc = 0x3912A8u;
            goto label_3912a8;
        }
    }
    ctx->pc = 0x3911E0u;
label_3911e0:
    // 0x3911e0: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x3911e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x3911e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3911e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3911e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3911e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3911ec: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x3911ECu;
    {
        const bool branch_taken_0x3911ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3911F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3911ECu;
        // 0x3911f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3911ec) {
            ctx->pc = 0x39139Cu;
            goto label_39139c;
        }
    }
    ctx->pc = 0x3911F4u;
label_3911f4:
    // 0x3911f4: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x3911f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x3911f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3911f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3911fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3911fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391200: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x391200u;
    {
        const bool branch_taken_0x391200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391200u;
        // 0x391204: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391200) {
            ctx->pc = 0x39139Cu;
            goto label_39139c;
        }
    }
    ctx->pc = 0x391208u;
label_391208:
    // 0x391208: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x391208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x39120c: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x39120cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x391210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391214: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x391214u;
    {
        const bool branch_taken_0x391214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391214u;
        // 0x391218: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391214) {
            ctx->pc = 0x39139Cu;
            goto label_39139c;
        }
    }
    ctx->pc = 0x39121Cu;
label_39121c:
    // 0x39121c: 0x3c01c016  lui         $at, 0xC016
    ctx->pc = 0x39121cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49174 << 16));
    // 0x391220: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x391220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x391224: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391228: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x391228u;
    {
        const bool branch_taken_0x391228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391228u;
        // 0x39122c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391228) {
            ctx->pc = 0x39139Cu;
            goto label_39139c;
        }
    }
    ctx->pc = 0x391230u;
label_391230:
    // 0x391230: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x391230u;
    {
        const bool branch_taken_0x391230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x391234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391230u;
        // 0x391234: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391230) {
            ctx->pc = 0x391274u;
            goto label_391274;
        }
    }
    ctx->pc = 0x391238u;
    // 0x391238: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x391238u;
    {
        const bool branch_taken_0x391238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391238u;
        // 0x39123c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391238) {
            ctx->pc = 0x391250u;
            goto label_391250;
        }
    }
    ctx->pc = 0x391240u;
    // 0x391240: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x391240u;
    {
        const bool branch_taken_0x391240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x391244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391240u;
        // 0x391244: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391240) {
            ctx->pc = 0x391268u;
            goto label_391268;
        }
    }
    ctx->pc = 0x391248u;
    // 0x391248: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x391248u;
    {
        const bool branch_taken_0x391248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391248) {
            ctx->pc = 0x3912A8u;
            goto label_3912a8;
        }
    }
    ctx->pc = 0x391250u;
label_391250:
    // 0x391250: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x391250u;
    {
        const bool branch_taken_0x391250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x391254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391250u;
        // 0x391254: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391250) {
            ctx->pc = 0x391280u;
            goto label_391280;
        }
    }
    ctx->pc = 0x391258u;
    // 0x391258: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x391258u;
    {
        const bool branch_taken_0x391258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x39125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391258u;
        // 0x39125c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391258) {
            ctx->pc = 0x391294u;
            goto label_391294;
        }
    }
    ctx->pc = 0x391260u;
    // 0x391260: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x391260u;
    {
        const bool branch_taken_0x391260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391260) {
            ctx->pc = 0x3912A8u;
            goto label_3912a8;
        }
    }
    ctx->pc = 0x391268u;
label_391268:
    // 0x391268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x391268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39126c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x39126Cu;
    {
        const bool branch_taken_0x39126c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39126Cu;
        // 0x391270: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39126c) {
            ctx->pc = 0x39139Cu;
            goto label_39139c;
        }
    }
    ctx->pc = 0x391274u;
label_391274:
    // 0x391274: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x391274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x391278: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x391278u;
    {
        const bool branch_taken_0x391278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391278u;
        // 0x39127c: 0xc4409d88  lwc1        $f0, -0x6278($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x391278) {
            ctx->pc = 0x391398u;
            goto label_391398;
        }
    }
    ctx->pc = 0x391280u;
label_391280:
    // 0x391280: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x391280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x391284: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x391284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x391288: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39128c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x39128Cu;
    {
        const bool branch_taken_0x39128c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39128Cu;
        // 0x391290: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39128c) {
            ctx->pc = 0x39139Cu;
            goto label_39139c;
        }
    }
    ctx->pc = 0x391294u;
label_391294:
    // 0x391294: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x391294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x391298: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x391298u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x39129c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39129cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3912a0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3912A0u;
    {
        const bool branch_taken_0x3912a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3912A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912A0u;
        // 0x3912a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3912a0) {
            ctx->pc = 0x39139Cu;
            goto label_39139c;
        }
    }
    ctx->pc = 0x3912A8u;
label_3912a8:
    // 0x3912a8: 0x1082ffb1  beq         $a0, $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x3912A8u;
    {
        const bool branch_taken_0x3912a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3912ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912A8u;
        // 0x3912ac: 0x851023  subu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3912a8) {
            ctx->pc = 0x391170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391170;
        }
    }
    ctx->pc = 0x3912B0u;
    // 0x3912b0: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x3912b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x3912b4: 0x2843003d  slti        $v1, $v0, 0x3D
    ctx->pc = 0x3912b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x3912b8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3912B8u;
    {
        const bool branch_taken_0x3912b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3912b8) {
            ctx->pc = 0x3912D0u;
            goto label_3912d0;
        }
    }
    ctx->pc = 0x3912C0u;
    // 0x3912c0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x3912c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x3912c4: 0x34630fdc  ori         $v1, $v1, 0xFDC
    ctx->pc = 0x3912c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4060);
    // 0x3912c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3912C8u;
    {
        const bool branch_taken_0x3912c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3912CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912C8u;
        // 0x3912cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3912c8) {
            ctx->pc = 0x391308u;
            goto label_391308;
        }
    }
    ctx->pc = 0x3912D0u;
label_3912d0:
    // 0x3912d0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3912D0u;
    {
        const bool branch_taken_0x3912d0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x3912D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912D0u;
        // 0x3912d4: 0x2842ffc4  slti        $v0, $v0, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3912d0) {
            ctx->pc = 0x3912E0u;
            goto label_3912e0;
        }
    }
    ctx->pc = 0x3912D8u;
    // 0x3912d8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3912D8u;
    {
        const bool branch_taken_0x3912d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3912DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912D8u;
        // 0x3912dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3912d8) {
            ctx->pc = 0x391304u;
            goto label_391304;
        }
    }
    ctx->pc = 0x3912E0u;
label_3912e0:
    // 0x3912e0: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x3912e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3912e4: 0x0  nop
    ctx->pc = 0x3912e4u;
    // NOP
    // 0x3912e8: 0x0  nop
    ctx->pc = 0x3912e8u;
    // NOP
    // 0x3912ec: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x3912ecu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3912f0: 0xc0e3f56  jal         func_38FD58
    ctx->pc = 0x3912F0u;
    SET_GPR_U32(ctx, 31, 0x3912F8u);
    ctx->pc = 0x38FD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD58u, 0x3912F0u, 0x3912F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3912F8u;
label_3912f8:
    // 0x3912f8: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x3912F8u;
    SET_GPR_U32(ctx, 31, 0x391300u);
    ctx->pc = 0x3912FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3912F8u;
    // 0x3912fc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x3912F8u, 0x391300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391300u;
label_391300:
    // 0x391300: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x391300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_391304:
    // 0x391304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x391304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391308:
    // 0x391308: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x391308u;
    {
        const bool branch_taken_0x391308 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x39130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391308u;
        // 0x39130c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391308) {
            ctx->pc = 0x391338u;
            goto label_391338;
        }
    }
    ctx->pc = 0x391310u;
    // 0x391310: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x391310u;
    {
        const bool branch_taken_0x391310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x391310) {
            ctx->pc = 0x391314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391310u;
            // 0x391314: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391328u;
            goto label_391328;
        }
    }
    ctx->pc = 0x391318u;
    // 0x391318: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x391318u;
    {
        const bool branch_taken_0x391318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x391318) {
            ctx->pc = 0x391340u;
            goto label_391340;
        }
    }
    ctx->pc = 0x391320u;
    // 0x391320: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x391320u;
    {
        const bool branch_taken_0x391320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391320) {
            ctx->pc = 0x391374u;
            goto label_391374;
        }
    }
    ctx->pc = 0x391328u;
label_391328:
    // 0x391328: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x391328u;
    {
        const bool branch_taken_0x391328 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x391328) {
            ctx->pc = 0x39134Cu;
            goto label_39134c;
        }
    }
    ctx->pc = 0x391330u;
    // 0x391330: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x391330u;
    {
        const bool branch_taken_0x391330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391330) {
            ctx->pc = 0x391374u;
            goto label_391374;
        }
    }
    ctx->pc = 0x391338u;
label_391338:
    // 0x391338: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x391338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39133c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x39133cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_391340:
    // 0x391340: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x391340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391344: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x391344u;
    {
        const bool branch_taken_0x391344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391344u;
        // 0x391348: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391344) {
            ctx->pc = 0x39139Cu;
            goto label_39139c;
        }
    }
    ctx->pc = 0x39134Cu;
label_39134c:
    // 0x39134c: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x39134cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x391350: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x391350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x391354: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391358: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x391358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x39135c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x39135cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x391360: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x391360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x391364: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x391364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391368: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x391368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x39136c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x39136Cu;
    {
        const bool branch_taken_0x39136c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39136Cu;
        // 0x391370: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39136c) {
            ctx->pc = 0x391398u;
            goto label_391398;
        }
    }
    ctx->pc = 0x391374u;
label_391374:
    // 0x391374: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x391374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x391378: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x391378u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x39137c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39137cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391380: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x391380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x391384: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x391384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x391388: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x391388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x39138c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x39138cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391390: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x391390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x391394: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x391394u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_391398:
    // 0x391398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x391398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39139c:
    // 0x39139c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39139cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3913a0:
    // 0x3913a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3913A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3913A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3913A0u;
        // 0x3913a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3913A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3913A8u;
}
