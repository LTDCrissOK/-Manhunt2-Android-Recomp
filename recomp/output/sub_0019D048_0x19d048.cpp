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

// Function: sub_0019D048
// Address: 0x19d048 - 0x19d278
void sub_0019D048_0x19d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D048_0x19d048");
#endif

    switch (ctx->pc) {
        case 0x19d07cu: goto label_19d07c;
        case 0x19d0a0u: goto label_19d0a0;
        case 0x19d0b8u: goto label_19d0b8;
        case 0x19d0ecu: goto label_19d0ec;
        case 0x19d188u: goto label_19d188;
        default: break;
    }

    ctx->pc = 0x19d048u;

    // 0x19d048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d04c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d050: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x19d050u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x19d054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d058: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x19d058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19d05c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x19d05cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x19d060: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19d060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19d064: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x19d064u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x19d068: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x19D068u;
    {
        const bool branch_taken_0x19d068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D068u;
        // 0x19d06c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d068) {
            ctx->pc = 0x19D0C0u;
            goto label_19d0c0;
        }
    }
    ctx->pc = 0x19D070u;
    // 0x19d070: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19d070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d074: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x19D074u;
    SET_GPR_U32(ctx, 31, 0x19D07Cu);
    ctx->pc = 0x19D078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D074u;
    // 0x19d078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x19D074u, 0x19D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D07Cu;
label_19d07c:
    // 0x19d07c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d080: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19D080u;
    {
        const bool branch_taken_0x19d080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D080u;
        // 0x19d084: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d080) {
            ctx->pc = 0x19D0C4u;
            goto label_19d0c4;
        }
    }
    ctx->pc = 0x19D088u;
    // 0x19d088: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x19d088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x19d08c: 0x8c4308d8  lw          $v1, 0x8D8($v0)
    ctx->pc = 0x19d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F08D8u));
    // 0x19d090: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19D090u;
    {
        const bool branch_taken_0x19d090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D090u;
        // 0x19d094: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d090) {
            ctx->pc = 0x19D0C4u;
            goto label_19d0c4;
        }
    }
    ctx->pc = 0x19D098u;
    // 0x19d098: 0xc06668e  jal         func_199A38
    ctx->pc = 0x19D098u;
    SET_GPR_U32(ctx, 31, 0x19D0A0u);
    ctx->pc = 0x19D09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D098u;
    // 0x19d09c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199A38u, 0x19D098u, 0x19D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D0A0u;
label_19d0a0:
    // 0x19d0a0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19D0A0u;
    {
        const bool branch_taken_0x19d0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0A0u;
        // 0x19d0a4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0a0) {
            ctx->pc = 0x19D0C4u;
            goto label_19d0c4;
        }
    }
    ctx->pc = 0x19D0A8u;
    // 0x19d0a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0ac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x19d0acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x19d0b0: 0xc0673ca  jal         func_19CF28
    ctx->pc = 0x19D0B0u;
    SET_GPR_U32(ctx, 31, 0x19D0B8u);
    ctx->pc = 0x19D0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D0B0u;
    // 0x19d0b4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CF28u, 0x19D0B0u, 0x19D0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D0B8u;
label_19d0b8:
    // 0x19d0b8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x19D0B8u;
    {
        const bool branch_taken_0x19d0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0B8u;
        // 0x19d0bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0b8) {
            ctx->pc = 0x19D25Cu;
            goto label_19d25c;
        }
    }
    ctx->pc = 0x19D0C0u;
label_19d0c0:
    // 0x19d0c0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x19d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_19d0c4:
    // 0x19d0c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19d0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d0c8: 0x8c43efe8  lw          $v1, -0x1018($v0)
    ctx->pc = 0x19d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963176)));
    // 0x19d0cc: 0x14640029  bne         $v1, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x19D0CCu;
    {
        const bool branch_taken_0x19d0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x19D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0CCu;
        // 0x19d0d0: 0x3c11003f  lui         $s1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0cc) {
            ctx->pc = 0x19D174u;
            goto label_19d174;
        }
    }
    ctx->pc = 0x19D0D4u;
    // 0x19d0d4: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x19d0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x19d0d8: 0x8e2208dc  lw          $v0, 0x8DC($s1)
    ctx->pc = 0x19d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F08DCu));
    // 0x19d0dc: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x19D0DCu;
    {
        const bool branch_taken_0x19d0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d0dc) {
            ctx->pc = 0x19D0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D0DCu;
            // 0x19d0e0: 0x3c11003f  lui         $s1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D174u;
            goto label_19d174;
        }
    }
    ctx->pc = 0x19D0E4u;
    // 0x19d0e4: 0xc06668e  jal         func_199A38
    ctx->pc = 0x19D0E4u;
    SET_GPR_U32(ctx, 31, 0x19D0ECu);
    ctx->pc = 0x19D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D0E4u;
    // 0x19d0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199A38u, 0x19D0E4u, 0x19D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D0ECu;
label_19d0ec:
    // 0x19d0ec: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x19D0ECu;
    {
        const bool branch_taken_0x19d0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d0ec) {
            ctx->pc = 0x19D0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D0ECu;
            // 0x19d0f0: 0x3c11003f  lui         $s1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D174u;
            goto label_19d174;
        }
    }
    ctx->pc = 0x19D0F4u;
    // 0x19d0f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19d0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19d0f8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x19d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x19d0fc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x19d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x19d100: 0x8c652b00  lw          $a1, 0x2B00($v1)
    ctx->pc = 0x19d100u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B00u));
    // 0x19d104: 0xae2408dc  sw          $a0, 0x8DC($s1)
    ctx->pc = 0x19d104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2268), GPR_U32(ctx, 4));
    // 0x19d108: 0x244608f4  addiu       $a2, $v0, 0x8F4
    ctx->pc = 0x19d108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2292));
    // 0x19d10c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D10Cu;
    {
        const bool branch_taken_0x19d10c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x19D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D10Cu;
        // 0x19d110: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d10c) {
            ctx->pc = 0x19D128u;
            goto label_19d128;
        }
    }
    ctx->pc = 0x19D114u;
    // 0x19d114: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x19d114u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d118: 0x0  nop
    ctx->pc = 0x19d118u;
    // NOP
    // 0x19d11c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d11cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d120: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19D120u;
    {
        const bool branch_taken_0x19d120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d120) {
            ctx->pc = 0x19D144u;
            goto label_19d144;
        }
    }
    ctx->pc = 0x19D128u;
label_19d128:
    // 0x19d128: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x19d128u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x19d12c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x19d12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x19d130: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19d130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19d134: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d138: 0x0  nop
    ctx->pc = 0x19d138u;
    // NOP
    // 0x19d13c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d13cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d140: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19d140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19d144:
    // 0x19d144: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19d144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19d148: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19d148u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19d14c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d150: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x19d150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x19d154: 0x244508f8  addiu       $a1, $v0, 0x8F8
    ctx->pc = 0x19d154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2296));
    // 0x19d158: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19d158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19d15c: 0x8c822b00  lw          $v0, 0x2B00($a0)
    ctx->pc = 0x19d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11008)));
    // 0x19d160: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x19d160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x19d164: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x19D164u;
    {
        const bool branch_taken_0x19d164 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D164u;
        // 0x19d168: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d164) {
            ctx->pc = 0x19D20Cu;
            goto label_19d20c;
        }
    }
    ctx->pc = 0x19D16Cu;
    // 0x19d16c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x19D16Cu;
    {
        const bool branch_taken_0x19d16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D16Cu;
        // 0x19d170: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d16c) {
            ctx->pc = 0x19D224u;
            goto label_19d224;
        }
    }
    ctx->pc = 0x19D174u;
label_19d174:
    // 0x19d174: 0x8e2208e0  lw          $v0, 0x8E0($s1)
    ctx->pc = 0x19d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2272)));
    // 0x19d178: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x19D178u;
    {
        const bool branch_taken_0x19d178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d178) {
            ctx->pc = 0x19D17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D178u;
            // 0x19d17c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D25Cu;
            goto label_19d25c;
        }
    }
    ctx->pc = 0x19D180u;
    // 0x19d180: 0xc06668e  jal         func_199A38
    ctx->pc = 0x19D180u;
    SET_GPR_U32(ctx, 31, 0x19D188u);
    ctx->pc = 0x19D184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D180u;
    // 0x19d184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199A38u, 0x19D180u, 0x19D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D188u;
label_19d188:
    // 0x19d188: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x19D188u;
    {
        const bool branch_taken_0x19d188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d188) {
            ctx->pc = 0x19D18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D188u;
            // 0x19d18c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D25Cu;
            goto label_19d25c;
        }
    }
    ctx->pc = 0x19D190u;
    // 0x19d190: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x19d190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x19d194: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x19d194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x19d198: 0xac4008dc  sw          $zero, 0x8DC($v0)
    ctx->pc = 0x19d198u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F08DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F08DCu, _value); } while (0);
    // 0x19d19c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x19d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x19d1a0: 0x8c852b00  lw          $a1, 0x2B00($a0)
    ctx->pc = 0x19d1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B00u));
    // 0x19d1a4: 0x246608fc  addiu       $a2, $v1, 0x8FC
    ctx->pc = 0x19d1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2300));
    // 0x19d1a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19d1ac: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D1ACu;
    {
        const bool branch_taken_0x19d1ac = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x19D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1ACu;
        // 0x19d1b0: 0xae2208e0  sw          $v0, 0x8E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d1ac) {
            ctx->pc = 0x19D1C8u;
            goto label_19d1c8;
        }
    }
    ctx->pc = 0x19D1B4u;
    // 0x19d1b4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x19d1b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d1b8: 0x0  nop
    ctx->pc = 0x19d1b8u;
    // NOP
    // 0x19d1bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d1bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d1c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19D1C0u;
    {
        const bool branch_taken_0x19d1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d1c0) {
            ctx->pc = 0x19D1E4u;
            goto label_19d1e4;
        }
    }
    ctx->pc = 0x19D1C8u;
label_19d1c8:
    // 0x19d1c8: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x19d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x19d1cc: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x19d1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x19d1d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19d1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19d1d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d1d8: 0x0  nop
    ctx->pc = 0x19d1d8u;
    // NOP
    // 0x19d1dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d1dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d1e0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19d1e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19d1e4:
    // 0x19d1e4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19d1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19d1e8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19d1e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19d1ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d1f0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x19d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x19d1f4: 0x24450900  addiu       $a1, $v0, 0x900
    ctx->pc = 0x19d1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2304));
    // 0x19d1f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19d1f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19d1fc: 0x8c822b00  lw          $v0, 0x2B00($a0)
    ctx->pc = 0x19d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11008)));
    // 0x19d200: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x19d200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x19d204: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D204u;
    {
        const bool branch_taken_0x19d204 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D204u;
        // 0x19d208: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d204) {
            ctx->pc = 0x19D220u;
            goto label_19d220;
        }
    }
    ctx->pc = 0x19D20Cu;
label_19d20c:
    // 0x19d20c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d210: 0x0  nop
    ctx->pc = 0x19d210u;
    // NOP
    // 0x19d214: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d218: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19D218u;
    {
        const bool branch_taken_0x19d218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d218) {
            ctx->pc = 0x19D23Cu;
            goto label_19d23c;
        }
    }
    ctx->pc = 0x19D220u;
label_19d220:
    // 0x19d220: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19d220u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_19d224:
    // 0x19d224: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19d224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19d228: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19d228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19d22c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d230: 0x0  nop
    ctx->pc = 0x19d230u;
    // NOP
    // 0x19d234: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d238: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19d238u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19d23c:
    // 0x19d23c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19d23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19d240: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19d240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19d244: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d248: 0x0  nop
    ctx->pc = 0x19d248u;
    // NOP
    // 0x19d24c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19d24cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19d250: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x19d250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x19d254: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x19d254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x19d258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19d25c:
    // 0x19d25c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d264: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x19d264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19d268: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x19d268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19d26c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D26Cu;
        // 0x19d270: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D274u;
    // 0x19d274: 0x0  nop
    ctx->pc = 0x19d274u;
    // NOP
    ctx->pc = 0x19d278u;
}
