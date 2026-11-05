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

// Function: sub_003DA020
// Address: 0x3da020 - 0x3da208
void sub_003DA020_0x3da020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA020_0x3da020");
#endif

    switch (ctx->pc) {
        case 0x3da118u: goto label_3da118;
        case 0x3da160u: goto label_3da160;
        case 0x3da1b8u: goto label_3da1b8;
        default: break;
    }

    ctx->pc = 0x3da020u;

    // 0x3da020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3da020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3da024: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3da024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3da028: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3da028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3da02c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3da02cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da030: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3da030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3da034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3da038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3da03c: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x3da03cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3da040: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3da040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3da044: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x3da044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3da048: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA048u;
    {
        const bool branch_taken_0x3da048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA048u;
        // 0x3da04c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da048) {
            ctx->pc = 0x3DA058u;
            goto label_3da058;
        }
    }
    ctx->pc = 0x3DA050u;
    // 0x3da050: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x3DA050u;
    {
        const bool branch_taken_0x3da050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA050u;
        // 0x3da054: 0xa6200000  sh          $zero, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da050) {
            ctx->pc = 0x3DA1ECu;
            goto label_3da1ec;
        }
    }
    ctx->pc = 0x3DA058u;
label_3da058:
    // 0x3da058: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3da058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3da05c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3da05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3da060: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x3da060u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3da064: 0x0  nop
    ctx->pc = 0x3da064u;
    // NOP
    // 0x3da068: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA068u;
    {
        const bool branch_taken_0x3da068 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA068u;
        // 0x3da06c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da068) {
            ctx->pc = 0x3DA088u;
            goto label_3da088;
        }
    }
    ctx->pc = 0x3DA070u;
    // 0x3da070: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3da070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3da074: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA074u;
    {
        const bool branch_taken_0x3da074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA074u;
        // 0x3da078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da074) {
            ctx->pc = 0x3DA088u;
            goto label_3da088;
        }
    }
    ctx->pc = 0x3DA07Cu;
    // 0x3da07c: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x3da07cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3da080: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3DA080u;
    {
        const bool branch_taken_0x3da080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA080u;
        // 0x3da084: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da080) {
            ctx->pc = 0x3DA1ECu;
            goto label_3da1ec;
        }
    }
    ctx->pc = 0x3DA088u;
label_3da088:
    // 0x3da088: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3da088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3da08c: 0x0  nop
    ctx->pc = 0x3da08cu;
    // NOP
    // 0x3da090: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA090u;
    {
        const bool branch_taken_0x3da090 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3da090) {
            ctx->pc = 0x3DA094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA090u;
            // 0x3da094: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA0A4u;
            goto label_3da0a4;
        }
    }
    ctx->pc = 0x3DA098u;
    // 0x3da098: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x3da098u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3da09c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3DA09Cu;
    {
        const bool branch_taken_0x3da09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA09Cu;
        // 0x3da0a0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da09c) {
            ctx->pc = 0x3DA1ECu;
            goto label_3da1ec;
        }
    }
    ctx->pc = 0x3DA0A4u;
label_3da0a4:
    // 0x3da0a4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3da0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3da0a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3da0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3da0ac: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x3da0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3da0b0: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x3da0b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3da0b4: 0x0  nop
    ctx->pc = 0x3da0b4u;
    // NOP
    // 0x3da0b8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA0B8u;
    {
        const bool branch_taken_0x3da0b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3da0b8) {
            ctx->pc = 0x3DA0DCu;
            goto label_3da0dc;
        }
    }
    ctx->pc = 0x3DA0C0u;
    // 0x3da0c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3da0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3da0c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DA0C4u;
    {
        const bool branch_taken_0x3da0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0C4u;
        // 0x3da0c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da0c4) {
            ctx->pc = 0x3DA0DCu;
            goto label_3da0dc;
        }
    }
    ctx->pc = 0x3DA0CCu;
    // 0x3da0cc: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3da0ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3da0d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3da0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3da0d4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x3DA0D4u;
    {
        const bool branch_taken_0x3da0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0D4u;
        // 0x3da0d8: 0xa6230000  sh          $v1, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da0d4) {
            ctx->pc = 0x3DA1ECu;
            goto label_3da1ec;
        }
    }
    ctx->pc = 0x3DA0DCu;
label_3da0dc:
    // 0x3da0dc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3da0dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3da0e0: 0x0  nop
    ctx->pc = 0x3da0e0u;
    // NOP
    // 0x3da0e4: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3DA0E4u;
    {
        const bool branch_taken_0x3da0e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3da0e4) {
            ctx->pc = 0x3DA0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA0E4u;
            // 0x3da0e8: 0x96060010  lhu         $a2, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA0FCu;
            goto label_3da0fc;
        }
    }
    ctx->pc = 0x3DA0ECu;
    // 0x3da0ec: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x3da0ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3da0f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3da0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3da0f4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3DA0F4u;
    {
        const bool branch_taken_0x3da0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0F4u;
        // 0x3da0f8: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da0f4) {
            ctx->pc = 0x3DA1ECu;
            goto label_3da1ec;
        }
    }
    ctx->pc = 0x3DA0FCu;
label_3da0fc:
    // 0x3da0fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da100: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3da100u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3da104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3da104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da108: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3da108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3da10c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3da10cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da110: 0xc0f67d0  jal         func_3D9F40
    ctx->pc = 0x3DA110u;
    SET_GPR_U32(ctx, 31, 0x3DA118u);
    ctx->pc = 0x3DA114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA110u;
    // 0x3da114: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9F40u, 0x3DA110u, 0x3DA118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA118u;
label_3da118:
    // 0x3da118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3da118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da11c: 0xa6240000  sh          $a0, 0x0($s1)
    ctx->pc = 0x3da11cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3da120: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3da120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3da124: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3DA124u;
    {
        const bool branch_taken_0x3da124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA124u;
        // 0x3da128: 0x3082ffff  andi        $v0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da124) {
            ctx->pc = 0x3DA1A8u;
            goto label_3da1a8;
        }
    }
    ctx->pc = 0x3DA12Cu;
    // 0x3da12c: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3da12cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3da130: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3da130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3da134: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3DA134u;
    {
        const bool branch_taken_0x3da134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA134u;
        // 0x3da138: 0x3082ffff  andi        $v0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da134) {
            ctx->pc = 0x3DA1ECu;
            goto label_3da1ec;
        }
    }
    ctx->pc = 0x3DA13Cu;
    // 0x3da13c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3da13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3da140: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3da140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3da144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3da144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3da148: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3da148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3da14c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x3da14cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3da150: 0x0  nop
    ctx->pc = 0x3da150u;
    // NOP
    // 0x3da154: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
    ctx->pc = 0x3DA154u;
    {
        const bool branch_taken_0x3da154 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3da154) {
            ctx->pc = 0x3DA158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA154u;
            // 0x3da158: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA1F0u;
            goto label_3da1f0;
        }
    }
    ctx->pc = 0x3DA15Cu;
    // 0x3da15c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x3da15cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3da160:
    // 0x3da160: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3da160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3da164: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x3da164u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3da168: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3da168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3da16c: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3da16cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3da170: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3da170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3da174: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3DA174u;
    {
        const bool branch_taken_0x3da174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da174) {
            ctx->pc = 0x3DA178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA174u;
            // 0x3da178: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA1F0u;
            goto label_3da1f0;
        }
    }
    ctx->pc = 0x3DA17Cu;
    // 0x3da17c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x3da17cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3da180: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3da180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3da184: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3da184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3da188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3da188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3da18c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3da18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3da190: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x3da190u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3da194: 0x0  nop
    ctx->pc = 0x3da194u;
    // NOP
    // 0x3da198: 0x4503fff1  bc1tl       . + 4 + (-0xF << 2)
    ctx->pc = 0x3DA198u;
    {
        const bool branch_taken_0x3da198 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3da198) {
            ctx->pc = 0x3DA19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA198u;
            // 0x3da19c: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3da160;
        }
    }
    ctx->pc = 0x3DA1A0u;
    // 0x3da1a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3DA1A0u;
    {
        const bool branch_taken_0x3da1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1A0u;
        // 0x3da1a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da1a0) {
            ctx->pc = 0x3DA1F0u;
            goto label_3da1f0;
        }
    }
    ctx->pc = 0x3DA1A8u;
label_3da1a8:
    // 0x3da1a8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DA1A8u;
    {
        const bool branch_taken_0x3da1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da1a8) {
            ctx->pc = 0x3DA1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA1A8u;
            // 0x3da1ac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA1F0u;
            goto label_3da1f0;
        }
    }
    ctx->pc = 0x3DA1B0u;
    // 0x3da1b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3DA1B0u;
    {
        const bool branch_taken_0x3da1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1B0u;
        // 0x3da1b4: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da1b0) {
            ctx->pc = 0x3DA1CCu;
            goto label_3da1cc;
        }
    }
    ctx->pc = 0x3DA1B8u;
label_3da1b8:
    // 0x3da1b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3da1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3da1bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3da1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3da1c0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3DA1C0u;
    {
        const bool branch_taken_0x3da1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1C0u;
        // 0x3da1c4: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da1c0) {
            ctx->pc = 0x3DA1ECu;
            goto label_3da1ec;
        }
    }
    ctx->pc = 0x3DA1C8u;
    // 0x3da1c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3da1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3da1cc:
    // 0x3da1cc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3da1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3da1d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3da1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3da1d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3da1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3da1d8: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x3da1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3da1dc: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3da1dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3da1e0: 0x0  nop
    ctx->pc = 0x3da1e0u;
    // NOP
    // 0x3da1e4: 0x4503fff4  bc1tl       . + 4 + (-0xC << 2)
    ctx->pc = 0x3DA1E4u;
    {
        const bool branch_taken_0x3da1e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3da1e4) {
            ctx->pc = 0x3DA1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA1E4u;
            // 0x3da1e8: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3da1b8;
        }
    }
    ctx->pc = 0x3DA1ECu;
label_3da1ec:
    // 0x3da1ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3da1ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3da1f0:
    // 0x3da1f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3da1f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3da1f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3da1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3da1f8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x3da1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3da1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1FCu;
        // 0x3da200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA204u;
    // 0x3da204: 0x0  nop
    ctx->pc = 0x3da204u;
    // NOP
    ctx->pc = 0x3da208u;
}
