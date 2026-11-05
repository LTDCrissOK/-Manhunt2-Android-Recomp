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

// Function: sub_001F2928
// Address: 0x1f2928 - 0x1f2a78
void sub_001F2928_0x1f2928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2928_0x1f2928");
#endif

    switch (ctx->pc) {
        case 0x1f29b8u: goto label_1f29b8;
        case 0x1f2a04u: goto label_1f2a04;
        case 0x1f2a48u: goto label_1f2a48;
        default: break;
    }

    ctx->pc = 0x1f2928u;

    // 0x1f2928: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f2928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f292c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f292cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f2930: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1f2930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1f2934: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f2934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f2938: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f2938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f293c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f293cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2940: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f2940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f2944: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f2944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f2948: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f2948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1f294c: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x1f294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1f2950: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1f2950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1f2954: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1f2954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1f2958: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1f2958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1f295c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1f295cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1f2960: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f2960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f2964: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f2964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1f2968: 0x8c544f94  lw          $s4, 0x4F94($v0)
    ctx->pc = 0x1f2968u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20372)));
    // 0x1f296c: 0x12800037  beqz        $s4, . + 4 + (0x37 << 2)
    ctx->pc = 0x1F296Cu;
    {
        const bool branch_taken_0x1f296c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F296Cu;
        // 0x1f2970: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f296c) {
            ctx->pc = 0x1F2A4Cu;
            goto label_1f2a4c;
        }
    }
    ctx->pc = 0x1F2974u;
    // 0x1f2974: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x1f2974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x1f2978: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f2978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f297c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1f297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1f2980: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f2980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f2984: 0xfa210130  sqc2        $vf1, 0x130($s1)
    ctx->pc = 0x1f2984u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f2988: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x1f2988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1f298c: 0x90624fb8  lbu         $v0, 0x4FB8($v1)
    ctx->pc = 0x1f298cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20408)));
    // 0x1f2990: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F2990u;
    {
        const bool branch_taken_0x1f2990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2990u;
        // 0x1f2994: 0x27b30004  addiu       $s3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2990) {
            ctx->pc = 0x1F2A1Cu;
            goto label_1f2a1c;
        }
    }
    ctx->pc = 0x1F2998u;
    // 0x1f2998: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F2998u;
    {
        const bool branch_taken_0x1f2998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2998u;
        // 0x1f299c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2998) {
            ctx->pc = 0x1F2A1Cu;
            goto label_1f2a1c;
        }
    }
    ctx->pc = 0x1F29A0u;
    // 0x1f29a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f29a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29a4: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1f29a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29a8: 0x26364fa0  addiu       $s6, $s1, 0x4FA0
    ctx->pc = 0x1f29a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 20384));
    // 0x1f29ac: 0x241e0013  addiu       $fp, $zero, 0x13
    ctx->pc = 0x1f29acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1f29b0: 0x26354fa8  addiu       $s5, $s1, 0x4FA8
    ctx->pc = 0x1f29b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 20392));
    // 0x1f29b4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1f29b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1f29b8:
    // 0x1f29b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f29b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f29bc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1f29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1f29c0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1f29c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f29c4: 0x28a3000f  slti        $v1, $a1, 0xF
    ctx->pc = 0x1f29c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1f29c8: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F29C8u;
    {
        const bool branch_taken_0x1f29c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f29c8) {
            ctx->pc = 0x1F29CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F29C8u;
            // 0x1f29cc: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2A08u;
            goto label_1f2a08;
        }
    }
    ctx->pc = 0x1F29D0u;
    // 0x1f29d0: 0x28a20012  slti        $v0, $a1, 0x12
    ctx->pc = 0x1f29d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1f29d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F29D4u;
    {
        const bool branch_taken_0x1f29d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29D4u;
        // 0x1f29d8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f29d4) {
            ctx->pc = 0x1F29E8u;
            goto label_1f29e8;
        }
    }
    ctx->pc = 0x1F29DCu;
    // 0x1f29dc: 0x14be000a  bne         $a1, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x1F29DCu;
    {
        const bool branch_taken_0x1f29dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 30));
        ctx->pc = 0x1F29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29DCu;
        // 0x1f29e0: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f29dc) {
            ctx->pc = 0x1F2A08u;
            goto label_1f2a08;
        }
    }
    ctx->pc = 0x1F29E4u;
    // 0x1f29e4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1f29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1f29e8:
    // 0x1f29e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f29e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f29f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f29f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29f4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1f29f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1f29f8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f29f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29fc: 0xc07d032  jal         func_1F40C8
    ctx->pc = 0x1F29FCu;
    SET_GPR_U32(ctx, 31, 0x1F2A04u);
    ctx->pc = 0x1F2A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F29FCu;
    // 0x1f2a00: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F40C8u, 0x1F29FCu, 0x1F2A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A04u;
label_1f2a04:
    // 0x1f2a04: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1f2a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f2a08:
    // 0x1f2a08: 0x92e24fb8  lbu         $v0, 0x4FB8($s7)
    ctx->pc = 0x1f2a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 20408)));
    // 0x1f2a0c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1f2a0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f2a10: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1f2a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f2a14: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1F2A14u;
    {
        const bool branch_taken_0x1f2a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A14u;
        // 0x1f2a18: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a14) {
            ctx->pc = 0x1F29B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f29b8;
        }
    }
    ctx->pc = 0x1F2A1Cu;
label_1f2a1c:
    // 0x1f2a1c: 0xc6200134  lwc1        $f0, 0x134($s1)
    ctx->pc = 0x1f2a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a24: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1f2a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1f2a28: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f2a28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1f2a2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f2a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f2a30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f2a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a34: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f2a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a38: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f2a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f2a3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f2a40: 0xc07c816  jal         func_1F2058
    ctx->pc = 0x1F2A40u;
    SET_GPR_U32(ctx, 31, 0x1F2A48u);
    ctx->pc = 0x1F2A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A40u;
    // 0x1f2a44: 0xe6200134  swc1        $f0, 0x134($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2058u, 0x1F2A40u, 0x1F2A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A48u;
label_1f2a48:
    // 0x1f2a48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f2a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f2a4c:
    // 0x1f2a4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f2a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f2a50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2a54: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f2a54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2a58: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f2a58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2a5c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f2a5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f2a60: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1f2a60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2a64: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1f2a64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f2a68: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1f2a68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f2a6c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1f2a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f2a70: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A70u;
        // 0x1f2a74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2A78u;
}
