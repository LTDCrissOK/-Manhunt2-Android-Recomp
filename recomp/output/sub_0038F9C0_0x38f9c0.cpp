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

// Function: sub_0038F9C0
// Address: 0x38f9c0 - 0x38fc70
void sub_0038F9C0_0x38f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F9C0_0x38f9c0");
#endif

    switch (ctx->pc) {
        case 0x38faa0u: goto label_38faa0;
        default: break;
    }

    ctx->pc = 0x38f9c0u;

    // 0x38f9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38f9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38f9c4: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x38f9c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x38f9c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38f9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38f9cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38f9ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f9d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38f9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38f9d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38f9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38f9d8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x38f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x38f9dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38f9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x38f9e0: 0x3c02507f  lui         $v0, 0x507F
    ctx->pc = 0x38f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20607 << 16));
    // 0x38f9e4: 0x2238024  and         $s0, $s1, $v1
    ctx->pc = 0x38f9e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x38f9e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38f9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38f9ec: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x38f9ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x38f9f0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x38F9F0u;
    {
        const bool branch_taken_0x38f9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9F0u;
        // 0x38f9f4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f9f0) {
            ctx->pc = 0x38FA44u;
            goto label_38fa44;
        }
    }
    ctx->pc = 0x38F9F8u;
    // 0x38f9f8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x38f9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x38f9fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38F9FCu;
    {
        const bool branch_taken_0x38f9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f9fc) {
            ctx->pc = 0x38FA10u;
            goto label_38fa10;
        }
    }
    ctx->pc = 0x38FA04u;
    // 0x38fa04: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x38FA04u;
    {
        const bool branch_taken_0x38fa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA04u;
        // 0x38fa08: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa04) {
            ctx->pc = 0x38FC54u;
            goto label_38fc54;
        }
    }
    ctx->pc = 0x38FA0Cu;
    // 0x38fa0c: 0x0  nop
    ctx->pc = 0x38fa0cu;
    // NOP
label_38fa10:
    // 0x38fa10: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38FA10u;
    {
        const bool branch_taken_0x38fa10 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x38FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA10u;
        // 0x38fa14: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa10) {
            ctx->pc = 0x38FA2Cu;
            goto label_38fa2c;
        }
    }
    ctx->pc = 0x38FA18u;
    // 0x38fa18: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x38fa18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x38fa1c: 0xc4419864  lwc1        $f1, -0x679C($v0)
    ctx->pc = 0x38fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38fa20: 0xc4609874  lwc1        $f0, -0x678C($v1)
    ctx->pc = 0x38fa20u;
    { uint32_t bits = FAST_READ32(0x479874u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38fa24: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x38FA24u;
    {
        const bool branch_taken_0x38fa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA24u;
        // 0x38fa28: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa24) {
            ctx->pc = 0x38FC54u;
            goto label_38fc54;
        }
    }
    ctx->pc = 0x38FA2Cu;
label_38fa2c:
    // 0x38fa2c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x38fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x38fa30: 0xc4409864  lwc1        $f0, -0x679C($v0)
    ctx->pc = 0x38fa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38fa34: 0xc4619874  lwc1        $f1, -0x678C($v1)
    ctx->pc = 0x38fa34u;
    { uint32_t bits = FAST_READ32(0x479874u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38fa38: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x38fa38u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x38fa3c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x38FA3Cu;
    {
        const bool branch_taken_0x38fa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA3Cu;
        // 0x38fa40: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa3c) {
            ctx->pc = 0x38FC54u;
            goto label_38fc54;
        }
    }
    ctx->pc = 0x38FA44u;
label_38fa44:
    // 0x38fa44: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x38fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
    // 0x38fa48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38fa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38fa4c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x38fa4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x38fa50: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x38FA50u;
    {
        const bool branch_taken_0x38fa50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA50u;
        // 0x38fa54: 0x3c0230ff  lui         $v0, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa50) {
            ctx->pc = 0x38FA98u;
            goto label_38fa98;
        }
    }
    ctx->pc = 0x38FA58u;
    // 0x38fa58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38fa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38fa5c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x38fa5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x38fa60: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x38FA60u;
    {
        const bool branch_taken_0x38fa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA60u;
        // 0x38fa64: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa60) {
            ctx->pc = 0x38FB74u;
            goto label_38fb74;
        }
    }
    ctx->pc = 0x38FA68u;
    // 0x38fa68: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x38fa68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x38fa6c: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x38fa6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x38fa70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38fa70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38fa74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38fa74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38fa78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38fa78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38fa7c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x38fa7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x38fa80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38fa80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38fa84: 0x0  nop
    ctx->pc = 0x38fa84u;
    // NOP
    // 0x38fa88: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
    ctx->pc = 0x38FA88u;
    {
        const bool branch_taken_0x38fa88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38fa88) {
            ctx->pc = 0x38FA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FA88u;
            // 0x38fa8c: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
            ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FB78u;
            goto label_38fb78;
        }
    }
    ctx->pc = 0x38FA90u;
    // 0x38fa90: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x38FA90u;
    {
        const bool branch_taken_0x38fa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA90u;
        // 0x38fa94: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa90) {
            ctx->pc = 0x38FC54u;
            goto label_38fc54;
        }
    }
    ctx->pc = 0x38FA98u;
label_38fa98:
    // 0x38fa98: 0xc0e3f56  jal         func_38FD58
    ctx->pc = 0x38FA98u;
    SET_GPR_U32(ctx, 31, 0x38FAA0u);
    ctx->pc = 0x38FD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD58u, 0x38FA98u, 0x38FAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FAA0u;
label_38faa0:
    // 0x38faa0: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x38faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
    // 0x38faa4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38faa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38faa8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x38faa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x38faac: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x38FAACu;
    {
        const bool branch_taken_0x38faac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FAACu;
        // 0x38fab0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38faac) {
            ctx->pc = 0x38FB1Cu;
            goto label_38fb1c;
        }
    }
    ctx->pc = 0x38FAB4u;
    // 0x38fab4: 0x3c023f2f  lui         $v0, 0x3F2F
    ctx->pc = 0x38fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16175 << 16));
    // 0x38fab8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38fab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38fabc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x38fabcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x38fac0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x38FAC0u;
    {
        const bool branch_taken_0x38fac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FAC0u;
        // 0x38fac4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fac0) {
            ctx->pc = 0x38FAF8u;
            goto label_38faf8;
        }
    }
    ctx->pc = 0x38FAC8u;
    // 0x38fac8: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x38fac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x38facc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38faccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38fad0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x38fad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x38fad4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x38fad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x38fad8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38fad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38fadc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x38fadcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x38fae0: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x38fae0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x38fae4: 0x0  nop
    ctx->pc = 0x38fae4u;
    // NOP
    // 0x38fae8: 0x0  nop
    ctx->pc = 0x38fae8u;
    // NOP
    // 0x38faec: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x38faecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x38faf0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x38FAF0u;
    {
        const bool branch_taken_0x38faf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FAF0u;
        // 0x38faf4: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38faf0) {
            ctx->pc = 0x38FB78u;
            goto label_38fb78;
        }
    }
    ctx->pc = 0x38FAF8u;
label_38faf8:
    // 0x38faf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38faf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38fafc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38fafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38fb00: 0x46006040  add.s       $f1, $f12, $f0
    ctx->pc = 0x38fb00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x38fb04: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x38fb04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x38fb08: 0x0  nop
    ctx->pc = 0x38fb08u;
    // NOP
    // 0x38fb0c: 0x0  nop
    ctx->pc = 0x38fb0cu;
    // NOP
    // 0x38fb10: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x38fb10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x38fb14: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x38FB14u;
    {
        const bool branch_taken_0x38fb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB14u;
        // 0x38fb18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb14) {
            ctx->pc = 0x38FB74u;
            goto label_38fb74;
        }
    }
    ctx->pc = 0x38FB1Cu;
label_38fb1c:
    // 0x38fb1c: 0x3c02401b  lui         $v0, 0x401B
    ctx->pc = 0x38fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16411 << 16));
    // 0x38fb20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38fb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38fb24: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x38fb24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x38fb28: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x38FB28u;
    {
        const bool branch_taken_0x38fb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB28u;
        // 0x38fb2c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb28) {
            ctx->pc = 0x38FB60u;
            goto label_38fb60;
        }
    }
    ctx->pc = 0x38FB30u;
    // 0x38fb30: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x38fb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x38fb34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38fb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38fb38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38fb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38fb3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x38fb3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x38fb40: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x38fb40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38fb44: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x38fb44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x38fb48: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x38fb48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x38fb4c: 0x0  nop
    ctx->pc = 0x38fb4cu;
    // NOP
    // 0x38fb50: 0x0  nop
    ctx->pc = 0x38fb50u;
    // NOP
    // 0x38fb54: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x38fb54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x38fb58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38FB58u;
    {
        const bool branch_taken_0x38fb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB58u;
        // 0x38fb5c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb58) {
            ctx->pc = 0x38FB74u;
            goto label_38fb74;
        }
    }
    ctx->pc = 0x38FB60u;
label_38fb60:
    // 0x38fb60: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x38fb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x38fb64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38fb64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38fb68: 0x0  nop
    ctx->pc = 0x38fb68u;
    // NOP
    // 0x38fb6c: 0x0  nop
    ctx->pc = 0x38fb6cu;
    // NOP
    // 0x38fb70: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x38fb70u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_38fb74:
    // 0x38fb74: 0x460c6282  mul.s       $f10, $f12, $f12
    ctx->pc = 0x38fb74u;
    ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_38fb78:
    // 0x38fb78: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x38fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x38fb7c: 0x24629878  addiu       $v0, $v1, -0x6788
    ctx->pc = 0x38fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940792));
    // 0x38fb80: 0xc4699878  lwc1        $f9, -0x6788($v1)
    ctx->pc = 0x38fb80u;
    { uint32_t bits = FAST_READ32(0x479878u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x38fb84: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x38fb84u;
    { uint32_t bits = FAST_READ32(0x4798A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38fb88: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x38fb88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x38fb8c: 0xc4450020  lwc1        $f5, 0x20($v0)
    ctx->pc = 0x38fb8cu;
    { uint32_t bits = FAST_READ32(0x479898u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x38fb90: 0xc4440024  lwc1        $f4, 0x24($v0)
    ctx->pc = 0x38fb90u;
    { uint32_t bits = FAST_READ32(0x47989Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x38fb94: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x38fb94u;
    { uint32_t bits = FAST_READ32(0x479894u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38fb98: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x38fb98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x38fb9c: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x38fb9cu;
    { uint32_t bits = FAST_READ32(0x479890u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x38fba0: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x38fba0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x38fba4: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x38fba4u;
    { uint32_t bits = FAST_READ32(0x47988Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38fba8: 0xc4470010  lwc1        $f7, 0x10($v0)
    ctx->pc = 0x38fba8u;
    { uint32_t bits = FAST_READ32(0x479888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x38fbac: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x38fbacu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x38fbb0: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x38fbb0u;
    { uint32_t bits = FAST_READ32(0x479880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x38fbb4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x38fbb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x38fbb8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x38fbb8u;
    { uint32_t bits = FAST_READ32(0x479884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38fbbc: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x38fbbcu;
    { uint32_t bits = FAST_READ32(0x47987Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x38fbc0: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x38fbc0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x38fbc4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x38fbc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x38fbc8: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x38fbc8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x38fbcc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x38fbccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x38fbd0: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x38fbd0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x38fbd4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x38fbd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x38fbd8: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x38fbd8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x38fbdc: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x38fbdcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x38fbe0: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x38fbe0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x38fbe4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x38fbe4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x38fbe8: 0x46074200  add.s       $f8, $f8, $f7
    ctx->pc = 0x38fbe8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x38fbec: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x38fbecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x38fbf0: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x38fbf0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x38fbf4: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x38fbf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x38fbf8: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x38fbf8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x38fbfc: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38FBFCu;
    {
        const bool branch_taken_0x38fbfc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x38FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FBFCu;
        // 0x38fc00: 0x46095002  mul.s       $f0, $f10, $f9 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fbfc) {
            ctx->pc = 0x38FC14u;
            goto label_38fc14;
        }
    }
    ctx->pc = 0x38FC04u;
    // 0x38fc04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x38fc04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x38fc08: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38fc08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38fc0c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x38FC0Cu;
    {
        const bool branch_taken_0x38fc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC0Cu;
        // 0x38fc10: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc0c) {
            ctx->pc = 0x38FC54u;
            goto label_38fc54;
        }
    }
    ctx->pc = 0x38FC14u;
label_38fc14:
    // 0x38fc14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x38fc14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x38fc18: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x38fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x38fc1c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x38fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x38fc20: 0x24429868  addiu       $v0, $v0, -0x6798
    ctx->pc = 0x38fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940776));
    // 0x38fc24: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x38fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38fc28: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x38fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x38fc2c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38fc2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38fc30: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x38fc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38fc34: 0x24639858  addiu       $v1, $v1, -0x67A8
    ctx->pc = 0x38fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940760));
    // 0x38fc38: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x38fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x38fc3c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x38fc3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x38fc40: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x38fc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38fc44: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x38fc44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x38fc48: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38FC48u;
    {
        const bool branch_taken_0x38fc48 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x38FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC48u;
        // 0x38fc4c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc48) {
            ctx->pc = 0x38FC54u;
            goto label_38fc54;
        }
    }
    ctx->pc = 0x38FC50u;
    // 0x38fc50: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x38fc50u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_38fc54:
    // 0x38fc54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38fc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38fc58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38fc58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38fc5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38fc5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38fc60: 0x3e00008  jr          $ra
    ctx->pc = 0x38FC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC60u;
        // 0x38fc64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FC68u;
    // 0x38fc68: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x38fc68u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x38fc6c: 0x0  nop
    ctx->pc = 0x38fc6cu;
    // NOP
    ctx->pc = 0x38fc70u;
}
