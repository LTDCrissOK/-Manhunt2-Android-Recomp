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

// Function: sub_001F50A0
// Address: 0x1f50a0 - 0x1f53d8
void sub_001F50A0_0x1f50a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F50A0_0x1f50a0");
#endif

    switch (ctx->pc) {
        case 0x1f5128u: goto label_1f5128;
        case 0x1f51f4u: goto label_1f51f4;
        case 0x1f5220u: goto label_1f5220;
        case 0x1f5250u: goto label_1f5250;
        case 0x1f527cu: goto label_1f527c;
        case 0x1f52a0u: goto label_1f52a0;
        case 0x1f52c8u: goto label_1f52c8;
        case 0x1f52e8u: goto label_1f52e8;
        case 0x1f531cu: goto label_1f531c;
        case 0x1f5328u: goto label_1f5328;
        case 0x1f538cu: goto label_1f538c;
        default: break;
    }

    ctx->pc = 0x1f50a0u;

    // 0x1f50a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f50a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f50a4: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f50a8: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1f50a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1f50ac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f50acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50b0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1f50b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1f50b4: 0x2a22818  mult        $a1, $s5, $v0
    ctx->pc = 0x1f50b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1f50b8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f50b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f50bc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1f50bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1f50c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f50c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50c4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1f50c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1f50c8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f50c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f50cc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1f50ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1f50d0: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x1f50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1f50d4: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1f50d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1f50d8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1f50d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f50dc: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1f50dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1f50e0: 0x8c534f94  lw          $s3, 0x4F94($v0)
    ctx->pc = 0x1f50e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20372)));
    // 0x1f50e4: 0x126000b1  beqz        $s3, . + 4 + (0xB1 << 2)
    ctx->pc = 0x1F50E4u;
    {
        const bool branch_taken_0x1f50e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50E4u;
        // 0x1f50e8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f50e4) {
            ctx->pc = 0x1F53ACu;
            goto label_1f53ac;
        }
    }
    ctx->pc = 0x1F50ECu;
    // 0x1f50ec: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1f50ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1f50f0: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x1f50f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x1f50f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f50f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f50f8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1f50f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1f50fc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1f50fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f5100: 0xfa210130  sqc2        $vf1, 0x130($s1)
    ctx->pc = 0x1f5100u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f5104: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x1f5104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1f5108: 0x90624fb8  lbu         $v0, 0x4FB8($v1)
    ctx->pc = 0x1f5108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20408)));
    // 0x1f510c: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1F510Cu;
    {
        const bool branch_taken_0x1f510c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F510Cu;
        // 0x1f5110: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f510c) {
            ctx->pc = 0x1F53A0u;
            goto label_1f53a0;
        }
    }
    ctx->pc = 0x1F5114u;
    // 0x1f5114: 0x90764fb8  lbu         $s6, 0x4FB8($v1)
    ctx->pc = 0x1f5114u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20408)));
    // 0x1f5118: 0x12c000a1  beqz        $s6, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1F5118u;
    {
        const bool branch_taken_0x1f5118 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5118u;
        // 0x1f511c: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5118) {
            ctx->pc = 0x1F53A0u;
            goto label_1f53a0;
        }
    }
    ctx->pc = 0x1F5120u;
    // 0x1f5120: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f5120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f5124: 0x0  nop
    ctx->pc = 0x1f5124u;
    // NOP
label_1f5128:
    // 0x1f5128: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x1f5128u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1f512c: 0x2a23018  mult        $a2, $s5, $v0
    ctx->pc = 0x1f512cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f5130: 0x26234fa8  addiu       $v1, $s1, 0x4FA8
    ctx->pc = 0x1f5130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20392));
    // 0x1f5134: 0x800013  mtlo        $a0
    ctx->pc = 0x1f5134u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x1f5138: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f5138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f513c: 0xa22200fc  sb          $v0, 0xFC($s1)
    ctx->pc = 0x1f513cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 252), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5140: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1f5140u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5144: 0x3c013b5a  lui         $at, 0x3B5A
    ctx->pc = 0x1f5144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15194 << 16));
    // 0x1f5148: 0x3421740e  ori         $at, $at, 0x740E
    ctx->pc = 0x1f5148u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29710);
    // 0x1f514c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f514cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5150: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1f5150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1f5154: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f5154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f5158: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f5158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f515c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f5160: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f5160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5164: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1f5164u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f5168: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x1f5168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f516c: 0x0  nop
    ctx->pc = 0x1f516cu;
    // NOP
    // 0x1f5170: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5170u;
    {
        const bool branch_taken_0x1f5170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5170u;
        // 0x1f5174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5170) {
            ctx->pc = 0x1F517Cu;
            goto label_1f517c;
        }
    }
    ctx->pc = 0x1F5178u;
    // 0x1f5178: 0x46001546  mov.s       $f21, $f2
    ctx->pc = 0x1f5178u;
    ctx->f[21] = FPU_MOV_S(ctx->f[2]);
label_1f517c:
    // 0x1f517c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f517cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f5180: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f5180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f5184: 0xc4401620  lwc1        $f0, 0x1620($v0)
    ctx->pc = 0x1f5184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5188: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1f5188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f518c: 0x0  nop
    ctx->pc = 0x1f518cu;
    // NOP
    // 0x1f5190: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F5190u;
    {
        const bool branch_taken_0x1f5190 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5190) {
            ctx->pc = 0x1F5194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5190u;
            // 0x1f5194: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5198u;
            goto label_1f5198;
        }
    }
    ctx->pc = 0x1F5198u;
label_1f5198:
    // 0x1f5198: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1f5198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1f519c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f51a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f51a4: 0x94434fa0  lhu         $v1, 0x4FA0($v0)
    ctx->pc = 0x1f51a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20384)));
    // 0x1f51a8: 0x2463ffe3  addiu       $v1, $v1, -0x1D
    ctx->pc = 0x1f51a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967267));
    // 0x1f51ac: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1f51acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f51b0: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x1F51B0u;
    {
        const bool branch_taken_0x1f51b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51B0u;
        // 0x1f51b4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f51b0) {
            ctx->pc = 0x1F538Cu;
            goto label_1f538c;
        }
    }
    ctx->pc = 0x1F51B8u;
    // 0x1f51b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f51b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f51bc: 0x2442fb50  addiu       $v0, $v0, -0x4B0
    ctx->pc = 0x1f51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966096));
    // 0x1f51c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f51c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f51c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f51c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f51c8: 0x800008  jr          $a0
    ctx->pc = 0x1F51C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F51D0u: goto label_1f51d0;
            case 0x1F51FCu: goto label_1f51fc;
            case 0x1F5228u: goto label_1f5228;
            case 0x1F5258u: goto label_1f5258;
            case 0x1F5280u: goto label_1f5280;
            case 0x1F538Cu: goto label_1f538c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F51C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F51D0u;
label_1f51d0:
    // 0x1f51d0: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f51d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f51d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51d8: 0x72a21000  madd        $v0, $s5, $v0
    ctx->pc = 0x1f51d8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f51dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f51dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f51e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51e4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1f51e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f51e8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1f51ec: 0xc07d32c  jal         func_1F4CB0
    ctx->pc = 0x1F51ECu;
    SET_GPR_U32(ctx, 31, 0x1F51F4u);
    ctx->pc = 0x1F51F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F51ECu;
    // 0x1f51f0: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CB0u, 0x1F51ECu, 0x1F51F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F51F4u;
label_1f51f4:
    // 0x1f51f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1F51F4u;
    {
        const bool branch_taken_0x1f51f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51F4u;
        // 0x1f51f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f51f4) {
            ctx->pc = 0x1F5280u;
            goto label_1f5280;
        }
    }
    ctx->pc = 0x1F51FCu;
label_1f51fc:
    // 0x1f51fc: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f51fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f5200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5204: 0x72a21000  madd        $v0, $s5, $v0
    ctx->pc = 0x1f5204u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f5208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f520c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f520cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5210: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1f5210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f5214: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f5214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1f5218: 0xc07d360  jal         func_1F4D80
    ctx->pc = 0x1F5218u;
    SET_GPR_U32(ctx, 31, 0x1F5220u);
    ctx->pc = 0x1F521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5218u;
    // 0x1f521c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D80u, 0x1F5218u, 0x1F5220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5220u;
label_1f5220:
    // 0x1f5220: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F5220u;
    {
        const bool branch_taken_0x1f5220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5220u;
        // 0x1f5224: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5220) {
            ctx->pc = 0x1F5280u;
            goto label_1f5280;
        }
    }
    ctx->pc = 0x1F5228u;
label_1f5228:
    // 0x1f5228: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f5228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f522c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f522cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5230: 0x72a21000  madd        $v0, $s5, $v0
    ctx->pc = 0x1f5230u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f5234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5238: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f5238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f523c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f523cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f5240: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f5240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f5244: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f5244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1f5248: 0xc07d3c6  jal         func_1F4F18
    ctx->pc = 0x1F5248u;
    SET_GPR_U32(ctx, 31, 0x1F5250u);
    ctx->pc = 0x1F524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5248u;
    // 0x1f524c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F18u, 0x1F5248u, 0x1F5250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5250u;
label_1f5250:
    // 0x1f5250: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F5250u;
    {
        const bool branch_taken_0x1f5250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5250u;
        // 0x1f5254: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5250) {
            ctx->pc = 0x1F5280u;
            goto label_1f5280;
        }
    }
    ctx->pc = 0x1F5258u;
label_1f5258:
    // 0x1f5258: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f5258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f525c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f525cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5260: 0x72a21000  madd        $v0, $s5, $v0
    ctx->pc = 0x1f5260u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f5264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5268: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f5268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f526c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1f526cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f5270: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f5270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1f5274: 0xc07d3e0  jal         func_1F4F80
    ctx->pc = 0x1F5274u;
    SET_GPR_U32(ctx, 31, 0x1F527Cu);
    ctx->pc = 0x1F5278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5274u;
    // 0x1f5278: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F80u, 0x1F5274u, 0x1F527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F527Cu;
label_1f527c:
    // 0x1f527c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f527cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5280:
    // 0x1f5280: 0x10a00042  beqz        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F5280u;
    {
        const bool branch_taken_0x1f5280 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5280u;
        // 0x1f5284: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5280) {
            ctx->pc = 0x1F538Cu;
            goto label_1f538c;
        }
    }
    ctx->pc = 0x1F5288u;
    // 0x1f5288: 0x922500fc  lbu         $a1, 0xFC($s1)
    ctx->pc = 0x1f5288u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x1f528c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1f528cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5290: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x1f5290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x1f5294: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f5294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5298: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F5298u;
    SET_GPR_U32(ctx, 31, 0x1F52A0u);
    ctx->pc = 0x1F529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5298u;
    // 0x1f529c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F5298u, 0x1F52A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52A0u;
label_1f52a0:
    // 0x1f52a0: 0x26320130  addiu       $s2, $s1, 0x130
    ctx->pc = 0x1f52a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x1f52a4: 0x93a30029  lbu         $v1, 0x29($sp)
    ctx->pc = 0x1f52a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1f52a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f52a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f52acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f52b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f52b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52b4: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1f52b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f52b8: 0x0  nop
    ctx->pc = 0x1f52b8u;
    // NOP
    // 0x1f52bc: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1f52bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1f52c0: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1F52C0u;
    SET_GPR_U32(ctx, 31, 0x1F52C8u);
    ctx->pc = 0x1F52C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52C0u;
    // 0x1f52c4: 0xae2200f8  sw          $v0, 0xF8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1F52C0u, 0x1F52C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52C8u;
label_1f52c8:
    // 0x1f52c8: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x1f52c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1f52cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f52ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f52d0: 0x0  nop
    ctx->pc = 0x1f52d0u;
    // NOP
    // 0x1f52d4: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x1F52D4u;
    {
        const bool branch_taken_0x1f52d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52D4u;
        // 0x1f52d8: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f52d4) {
            ctx->pc = 0x1F538Cu;
            goto label_1f538c;
        }
    }
    ctx->pc = 0x1F52DCu;
    // 0x1f52dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f52dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f52e0: 0xc07bc8c  jal         func_1EF230
    ctx->pc = 0x1F52E0u;
    SET_GPR_U32(ctx, 31, 0x1F52E8u);
    ctx->pc = 0x1F52E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52E0u;
    // 0x1f52e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF230u, 0x1F52E0u, 0x1F52E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52E8u;
label_1f52e8:
    // 0x1f52e8: 0x93a20028  lbu         $v0, 0x28($sp)
    ctx->pc = 0x1f52e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f52ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f52ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52f0: 0xc62d0110  lwc1        $f13, 0x110($s1)
    ctx->pc = 0x1f52f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f52f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f52f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f52f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f52f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f52fc: 0x0  nop
    ctx->pc = 0x1f52fcu;
    // NOP
    // 0x1f5300: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f5300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f5304: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f5304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f5308: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f5308u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f530c: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1f530cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1f5310: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x1f5310u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1f5314: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1F5314u;
    SET_GPR_U32(ctx, 31, 0x1F531Cu);
    ctx->pc = 0x1F5318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5314u;
    // 0x1f5318: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1F5314u, 0x1F531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F531Cu;
label_1f531c:
    // 0x1f531c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f531cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5320: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x1F5320u;
    SET_GPR_U32(ctx, 31, 0x1F5328u);
    ctx->pc = 0x1F5324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5320u;
    // 0x1f5324: 0xa222010c  sb          $v0, 0x10C($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x1F5320u, 0x1F5328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5328u;
label_1f5328:
    // 0x1f5328: 0x9222010c  lbu         $v0, 0x10C($s1)
    ctx->pc = 0x1f5328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x1f532c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f532cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5330: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f5330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f5334: 0xa230011c  sb          $s0, 0x11C($s1)
    ctx->pc = 0x1f5334u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 284), (uint8_t)GPR_U32(ctx, 16));
    // 0x1f5338: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f5338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f533c: 0x0  nop
    ctx->pc = 0x1f533cu;
    // NOP
    // 0x1f5340: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f5340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f5344: 0xe6340120  swc1        $f20, 0x120($s1)
    ctx->pc = 0x1f5344u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x1f5348: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x1f5348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x1f534c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f534cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5350: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x1f5350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x1f5354: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f5354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f5358: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x1f5358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x1f535c: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x1f535cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
    // 0x1f5360: 0xa2200148  sb          $zero, 0x148($s1)
    ctx->pc = 0x1f5360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5364: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f5364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1f5368: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1f5368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f536c: 0xae20014c  sw          $zero, 0x14C($s1)
    ctx->pc = 0x1f536cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 0));
    // 0x1f5370: 0xa2250170  sb          $a1, 0x170($s1)
    ctx->pc = 0x1f5370u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 368), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f5374: 0xae230124  sw          $v1, 0x124($s1)
    ctx->pc = 0x1f5374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 3));
    // 0x1f5378: 0xa222010c  sb          $v0, 0x10C($s1)
    ctx->pc = 0x1f5378u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f537c: 0xe620016c  swc1        $f0, 0x16C($s1)
    ctx->pc = 0x1f537cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
    // 0x1f5380: 0xae230114  sw          $v1, 0x114($s1)
    ctx->pc = 0x1f5380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 3));
    // 0x1f5384: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F5384u;
    SET_GPR_U32(ctx, 31, 0x1F538Cu);
    ctx->pc = 0x1F5388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5384u;
    // 0x1f5388: 0xae230140  sw          $v1, 0x140($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F5384u, 0x1F538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F538Cu;
label_1f538c:
    // 0x1f538c: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1f538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f5390: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1f5390u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5394: 0x296182b  sltu        $v1, $s4, $s6
    ctx->pc = 0x1f5394u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1f5398: 0x1460ff63  bnez        $v1, . + 4 + (-0x9D << 2)
    ctx->pc = 0x1F5398u;
    {
        const bool branch_taken_0x1f5398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5398u;
        // 0x1f539c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5398) {
            ctx->pc = 0x1F5128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5128;
        }
    }
    ctx->pc = 0x1F53A0u;
label_1f53a0:
    // 0x1f53a0: 0xa260028c  sb          $zero, 0x28C($s3)
    ctx->pc = 0x1f53a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 652), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53a4: 0xa260028d  sb          $zero, 0x28D($s3)
    ctx->pc = 0x1f53a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 653), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53a8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f53a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f53ac:
    // 0x1f53ac: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1f53acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f53b0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1f53b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f53b4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1f53b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f53b8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1f53b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f53bc: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1f53bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f53c0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f53c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f53c4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1f53c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1f53c8: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1f53c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f53cc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1f53ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f53d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F53D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F53D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53D0u;
        // 0x1f53d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F53D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F53D8u;
}
