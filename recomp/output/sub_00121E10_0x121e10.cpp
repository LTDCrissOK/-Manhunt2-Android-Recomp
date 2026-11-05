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

// Function: sub_00121E10
// Address: 0x121e10 - 0x121f70
void sub_00121E10_0x121e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121E10_0x121e10");
#endif

    switch (ctx->pc) {
        case 0x121e64u: goto label_121e64;
        case 0x121e74u: goto label_121e74;
        case 0x121e84u: goto label_121e84;
        case 0x121e98u: goto label_121e98;
        case 0x121ec4u: goto label_121ec4;
        case 0x121ed4u: goto label_121ed4;
        case 0x121ee0u: goto label_121ee0;
        case 0x121eecu: goto label_121eec;
        case 0x121ef8u: goto label_121ef8;
        case 0x121f04u: goto label_121f04;
        case 0x121f14u: goto label_121f14;
        case 0x121f20u: goto label_121f20;
        case 0x121f2cu: goto label_121f2c;
        default: break;
    }

    ctx->pc = 0x121e10u;

    // 0x121e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x121e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x121e14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x121e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x121e18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x121e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x121e1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x121e1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121e24: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x121e24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x121e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x121e2c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x121e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e30: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x121e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x121e34: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x121e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e38: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x121e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x121e3c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x121e3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e40: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x121e40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x121e44: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x121e44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e48: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x121e48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x121e4c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x121e4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x121e50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x121e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x121e54: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x121e54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x121e58: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x121e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x121e5c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121E5Cu;
    SET_GPR_U32(ctx, 31, 0x121E64u);
    ctx->pc = 0x121E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E5Cu;
    // 0x121e60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121E5Cu, 0x121E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E64u;
label_121e64:
    // 0x121e64: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x121E64u;
    {
        const bool branch_taken_0x121e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E64u;
        // 0x121e68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121e64) {
            ctx->pc = 0x121F34u;
            goto label_121f34;
        }
    }
    ctx->pc = 0x121E6Cu;
    // 0x121e6c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121E6Cu;
    SET_GPR_U32(ctx, 31, 0x121E74u);
    ctx->pc = 0x121E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E6Cu;
    // 0x121e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121E6Cu, 0x121E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E74u;
label_121e74:
    // 0x121e74: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x121E74u;
    {
        const bool branch_taken_0x121e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E74u;
        // 0x121e78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121e74) {
            ctx->pc = 0x121F34u;
            goto label_121f34;
        }
    }
    ctx->pc = 0x121E7Cu;
    // 0x121e7c: 0xc040a7a  jal         func_1029E8
    ctx->pc = 0x121E7Cu;
    SET_GPR_U32(ctx, 31, 0x121E84u);
    ctx->pc = 0x121E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E7Cu;
    // 0x121e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E8u, 0x121E7Cu, 0x121E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E84u;
label_121e84:
    // 0x121e84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x121e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e88: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x121E88u;
    {
        const bool branch_taken_0x121e88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x121E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E88u;
        // 0x121e8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121e88) {
            ctx->pc = 0x121EB0u;
            goto label_121eb0;
        }
    }
    ctx->pc = 0x121E90u;
    // 0x121e90: 0xc04a2fc  jal         func_128BF0
    ctx->pc = 0x121E90u;
    SET_GPR_U32(ctx, 31, 0x121E98u);
    ctx->pc = 0x121E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E90u;
    // 0x121e94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BF0u, 0x121E90u, 0x121E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E98u;
label_121e98:
    // 0x121e98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x121e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x121e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x121ea0: 0x12220024  beq         $s1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x121EA0u;
    {
        const bool branch_taken_0x121ea0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x121EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EA0u;
        // 0x121ea4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ea0) {
            ctx->pc = 0x121F34u;
            goto label_121f34;
        }
    }
    ctx->pc = 0x121EA8u;
    // 0x121ea8: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x121EA8u;
    {
        const bool branch_taken_0x121ea8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x121ea8) {
            ctx->pc = 0x121EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121EA8u;
            // 0x121eac: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121EB8u;
            goto label_121eb8;
        }
    }
    ctx->pc = 0x121EB0u;
label_121eb0:
    // 0x121eb0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x121EB0u;
    {
        const bool branch_taken_0x121eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EB0u;
        // 0x121eb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121eb0) {
            ctx->pc = 0x121F34u;
            goto label_121f34;
        }
    }
    ctx->pc = 0x121EB8u;
label_121eb8:
    // 0x121eb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x121eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ebc: 0xc04a2e0  jal         func_128B80
    ctx->pc = 0x121EBCu;
    SET_GPR_U32(ctx, 31, 0x121EC4u);
    ctx->pc = 0x121EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121EBCu;
    // 0x121ec0: 0x240506f5  addiu       $a1, $zero, 0x6F5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1781));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128B80u, 0x121EBCu, 0x121EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EC4u;
label_121ec4:
    // 0x121ec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ec8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x121ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ecc: 0xc05a6b0  jal         func_169AC0
    ctx->pc = 0x121ECCu;
    SET_GPR_U32(ctx, 31, 0x121ED4u);
    ctx->pc = 0x121ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121ECCu;
    // 0x121ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AC0u, 0x121ECCu, 0x121ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121ED4u;
label_121ed4:
    // 0x121ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ed8: 0xc05a6ba  jal         func_169AE8
    ctx->pc = 0x121ED8u;
    SET_GPR_U32(ctx, 31, 0x121EE0u);
    ctx->pc = 0x121EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121ED8u;
    // 0x121edc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AE8u, 0x121ED8u, 0x121EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EE0u;
label_121ee0:
    // 0x121ee0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x121ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ee4: 0xc05a6e6  jal         func_169B98
    ctx->pc = 0x121EE4u;
    SET_GPR_U32(ctx, 31, 0x121EECu);
    ctx->pc = 0x121EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121EE4u;
    // 0x121ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B98u, 0x121EE4u, 0x121EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EECu;
label_121eec:
    // 0x121eec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x121eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ef0: 0xc05a70e  jal         func_169C38
    ctx->pc = 0x121EF0u;
    SET_GPR_U32(ctx, 31, 0x121EF8u);
    ctx->pc = 0x121EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121EF0u;
    // 0x121ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169C38u, 0x121EF0u, 0x121EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EF8u;
label_121ef8:
    // 0x121ef8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x121ef8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121efc: 0xc05a722  jal         func_169C88
    ctx->pc = 0x121EFCu;
    SET_GPR_U32(ctx, 31, 0x121F04u);
    ctx->pc = 0x121F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121EFCu;
    // 0x121f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169C88u, 0x121EFCu, 0x121F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F04u;
label_121f04:
    // 0x121f04: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x121f04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x121f08: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x121f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x121f0c: 0xc05a736  jal         func_169CD8
    ctx->pc = 0x121F0Cu;
    SET_GPR_U32(ctx, 31, 0x121F14u);
    ctx->pc = 0x121F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121F0Cu;
    // 0x121f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169CD8u, 0x121F0Cu, 0x121F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F14u;
label_121f14:
    // 0x121f14: 0x32c500ff  andi        $a1, $s6, 0xFF
    ctx->pc = 0x121f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x121f18: 0xc05a74a  jal         func_169D28
    ctx->pc = 0x121F18u;
    SET_GPR_U32(ctx, 31, 0x121F20u);
    ctx->pc = 0x121F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121F18u;
    // 0x121f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169D28u, 0x121F18u, 0x121F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F20u;
label_121f20:
    // 0x121f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f24: 0xc05a772  jal         func_169DC8
    ctx->pc = 0x121F24u;
    SET_GPR_U32(ctx, 31, 0x121F2Cu);
    ctx->pc = 0x121F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121F24u;
    // 0x121f28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DC8u, 0x121F24u, 0x121F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F2Cu;
label_121f2c:
    // 0x121f2c: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x121f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x121f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121f34:
    // 0x121f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121f38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121f38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121f3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121f40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x121f40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121f44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x121f44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121f48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x121f48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x121f4c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x121f4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x121f50: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x121f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x121f54: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x121f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x121f58: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x121f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x121f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x121F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F5Cu;
        // 0x121f60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121F64u;
    // 0x121f64: 0x0  nop
    ctx->pc = 0x121f64u;
    // NOP
    // 0x121f68: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x121f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x121f6c: 0x0  nop
    ctx->pc = 0x121f6cu;
    // NOP
    ctx->pc = 0x121f70u;
}
