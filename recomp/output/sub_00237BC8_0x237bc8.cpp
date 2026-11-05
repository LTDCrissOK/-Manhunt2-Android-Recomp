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

// Function: sub_00237BC8
// Address: 0x237bc8 - 0x237d08
void sub_00237BC8_0x237bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237BC8_0x237bc8");
#endif

    switch (ctx->pc) {
        case 0x237c40u: goto label_237c40;
        case 0x237c4cu: goto label_237c4c;
        case 0x237c60u: goto label_237c60;
        default: break;
    }

    ctx->pc = 0x237bc8u;

    // 0x237bc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x237bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x237bcc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x237bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x237bd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237bd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x237bd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237bd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x237bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x237bdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x237bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x237be0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x237be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x237be4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x237be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x237be8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x237be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x237bec: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x237becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x237bf0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x237bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x237bf4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x237bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x237bf8: 0x8e640328  lw          $a0, 0x328($s3)
    ctx->pc = 0x237bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 808)));
    // 0x237bfc: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x237BFCu;
    {
        const bool branch_taken_0x237bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BFCu;
        // 0x237c00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bfc) {
            ctx->pc = 0x237CD8u;
            goto label_237cd8;
        }
    }
    ctx->pc = 0x237C04u;
    // 0x237c04: 0x8e62013c  lw          $v0, 0x13C($s3)
    ctx->pc = 0x237c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
    // 0x237c08: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x237C08u;
    {
        const bool branch_taken_0x237c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237c08) {
            ctx->pc = 0x237C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237C08u;
            // 0x237c0c: 0x8e740104  lw          $s4, 0x104($s3) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237C1Cu;
            goto label_237c1c;
        }
    }
    ctx->pc = 0x237C10u;
    // 0x237c10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x237c10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x237C14u;
    {
        const bool branch_taken_0x237c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C14u;
        // 0x237c18: 0x8e760104  lw          $s6, 0x104($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c14) {
            ctx->pc = 0x237C20u;
            goto label_237c20;
        }
    }
    ctx->pc = 0x237C1Cu;
label_237c1c:
    // 0x237c1c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x237c1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_237c20:
    // 0x237c20: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x237c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x237c24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x237c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c28: 0x84550004  lh          $s5, 0x4($v0)
    ctx->pc = 0x237c28u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x237c2c: 0x1aa00029  blez        $s5, . + 4 + (0x29 << 2)
    ctx->pc = 0x237C2Cu;
    {
        const bool branch_taken_0x237c2c = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x237C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C2Cu;
        // 0x237c30: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c2c) {
            ctx->pc = 0x237CD4u;
            goto label_237cd4;
        }
    }
    ctx->pc = 0x237C34u;
    // 0x237c34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x237c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c38: 0x241e03e8  addiu       $fp, $zero, 0x3E8
    ctx->pc = 0x237c38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x237c3c: 0x24170415  addiu       $s7, $zero, 0x415
    ctx->pc = 0x237c3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
label_237c40:
    // 0x237c40: 0x82450021  lb          $a1, 0x21($s2)
    ctx->pc = 0x237c40u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
    // 0x237c44: 0xc0c3264  jal         func_30C990
    ctx->pc = 0x237C44u;
    SET_GPR_U32(ctx, 31, 0x237C4Cu);
    ctx->pc = 0x237C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C44u;
    // 0x237c48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C990u, 0x237C44u, 0x237C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C4Cu;
label_237c4c:
    // 0x237c4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c50: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x237C50u;
    {
        const bool branch_taken_0x237c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C50u;
        // 0x237c54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c50) {
            ctx->pc = 0x237CC4u;
            goto label_237cc4;
        }
    }
    ctx->pc = 0x237C58u;
    // 0x237c58: 0xc0c3264  jal         func_30C990
    ctx->pc = 0x237C58u;
    SET_GPR_U32(ctx, 31, 0x237C60u);
    ctx->pc = 0x237C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C58u;
    // 0x237c5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C990u, 0x237C58u, 0x237C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C60u;
label_237c60:
    // 0x237c60: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x237c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237c64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x237c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c68: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x237c68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x237c6c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x237c6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x237c70: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x237c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237c74: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x237c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x237c78: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x237c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237c7c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x237c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x237c80: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x237c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237c84: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x237c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x237c88: 0x8e630328  lw          $v1, 0x328($s3)
    ctx->pc = 0x237c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 808)));
    // 0x237c8c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x237c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x237c90: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x237c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x237c94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x237c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x237c98: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x237c98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237c9c: 0x505e0004  beql        $v0, $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x237C9Cu;
    {
        const bool branch_taken_0x237c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x237c9c) {
            ctx->pc = 0x237CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237C9Cu;
            // 0x237ca0: 0xc6000010  lwc1        $f0, 0x10($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x237CB0u;
            goto label_237cb0;
        }
    }
    ctx->pc = 0x237CA4u;
    // 0x237ca4: 0x54570008  bnel        $v0, $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x237CA4u;
    {
        const bool branch_taken_0x237ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x237ca4) {
            ctx->pc = 0x237CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237CA4u;
            // 0x237ca8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237CC8u;
            goto label_237cc8;
        }
    }
    ctx->pc = 0x237CACu;
    // 0x237cac: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x237cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237cb0:
    // 0x237cb0: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x237cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x237cb4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x237cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237cb8: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x237cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x237cbc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x237cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237cc0: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x237cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_237cc4:
    // 0x237cc4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x237cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_237cc8:
    // 0x237cc8: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x237cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x237ccc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x237CCCu;
    {
        const bool branch_taken_0x237ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CCCu;
        // 0x237cd0: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ccc) {
            ctx->pc = 0x237C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237c40;
        }
    }
    ctx->pc = 0x237CD4u;
label_237cd4:
    // 0x237cd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237cd8:
    // 0x237cd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x237cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237cdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x237cdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237ce0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x237ce0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x237ce4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x237ce4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237ce8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x237ce8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x237cec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x237cecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237cf0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x237cf0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x237cf4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x237cf4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237cf8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x237cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x237cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x237CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CFCu;
        // 0x237d00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237D04u;
    // 0x237d04: 0x0  nop
    ctx->pc = 0x237d04u;
    // NOP
    ctx->pc = 0x237d08u;
}
