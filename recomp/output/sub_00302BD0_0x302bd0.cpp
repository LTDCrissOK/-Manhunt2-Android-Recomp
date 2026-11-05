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

// Function: sub_00302BD0
// Address: 0x302bd0 - 0x302de8
void sub_00302BD0_0x302bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302BD0_0x302bd0");
#endif

    switch (ctx->pc) {
        case 0x302c4cu: goto label_302c4c;
        case 0x302cc4u: goto label_302cc4;
        case 0x302ce8u: goto label_302ce8;
        default: break;
    }

    ctx->pc = 0x302bd0u;

    // 0x302bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x302bd4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x302bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x302bd8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x302bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x302bdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x302bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302be0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x302be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x302be4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x302be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x302be8: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x302be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x302bec: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x302becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x302bf0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x302BF0u;
    {
        const bool branch_taken_0x302bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302bf0) {
            ctx->pc = 0x302BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302BF0u;
            // 0x302bf4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302C14u;
            goto label_302c14;
        }
    }
    ctx->pc = 0x302BF8u;
    // 0x302bf8: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x302bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
    // 0x302bfc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x302BFCu;
    {
        const bool branch_taken_0x302bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302bfc) {
            ctx->pc = 0x302C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302BFCu;
            // 0x302c00: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302C14u;
            goto label_302c14;
        }
    }
    ctx->pc = 0x302C04u;
    // 0x302c04: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x302c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x302c08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x302C08u;
    {
        const bool branch_taken_0x302c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C08u;
        // 0x302c0c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c08) {
            ctx->pc = 0x302C28u;
            goto label_302c28;
        }
    }
    ctx->pc = 0x302C10u;
    // 0x302c10: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x302c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_302c14:
    // 0x302c14: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x302c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x302c18: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x302c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302c1c: 0xe6001178  swc1        $f0, 0x1178($s0)
    ctx->pc = 0x302c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4472), bits); }
    // 0x302c20: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x302C20u;
    {
        const bool branch_taken_0x302c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C20u;
        // 0x302c24: 0xe6001174  swc1        $f0, 0x1174($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c20) {
            ctx->pc = 0x302DD0u;
            goto label_302dd0;
        }
    }
    ctx->pc = 0x302C28u;
label_302c28:
    // 0x302c28: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x302c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x302c2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x302c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302c30: 0xc44d2b30  lwc1        $f13, 0x2B30($v0)
    ctx->pc = 0x302c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x302c34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x302c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c38: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x302c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x302c3c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x302c3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x302c40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x302c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x302c44: 0xc0e41ea  jal         func_3907A8
    ctx->pc = 0x302C44u;
    SET_GPR_U32(ctx, 31, 0x302C4Cu);
    ctx->pc = 0x302C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C44u;
    // 0x302c48: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3907A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3907A8u, 0x302C44u, 0x302C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C4Cu;
label_302c4c:
    // 0x302c4c: 0xc6021174  lwc1        $f2, 0x1174($s0)
    ctx->pc = 0x302c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x302c50: 0x26031174  addiu       $v1, $s0, 0x1174
    ctx->pc = 0x302c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4468));
    // 0x302c54: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x302c54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x302c58: 0xe6021174  swc1        $f2, 0x1174($s0)
    ctx->pc = 0x302c58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4468), bits); }
    // 0x302c5c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x302c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302c60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x302c60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x302c64: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x302c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x302c68: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x302c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x302c6c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x302c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x302c70: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x302C70u;
    {
        const bool branch_taken_0x302c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C70u;
        // 0x302c74: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c70) {
            ctx->pc = 0x302CCCu;
            goto label_302ccc;
        }
    }
    ctx->pc = 0x302C78u;
    // 0x302c78: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x302c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x302c7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x302c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c80: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x302c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x302c84: 0x8c440150  lw          $a0, 0x150($v0)
    ctx->pc = 0x302c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x302c88: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x302C88u;
    {
        const bool branch_taken_0x302c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x302C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C88u;
        // 0x302c8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c88) {
            ctx->pc = 0x302C9Cu;
            goto label_302c9c;
        }
    }
    ctx->pc = 0x302C90u;
    // 0x302c90: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x302c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x302c94: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x302C94u;
    {
        const bool branch_taken_0x302c94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x302c94) {
            ctx->pc = 0x302CA0u;
            goto label_302ca0;
        }
    }
    ctx->pc = 0x302C9Cu;
label_302c9c:
    // 0x302c9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x302c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302ca0:
    // 0x302ca0: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x302CA0u;
    {
        const bool branch_taken_0x302ca0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x302CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CA0u;
        // 0x302ca4: 0xc6402b30  lwc1        $f0, 0x2B30($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ca0) {
            ctx->pc = 0x302CD0u;
            goto label_302cd0;
        }
    }
    ctx->pc = 0x302CA8u;
    // 0x302ca8: 0x8ca20150  lw          $v0, 0x150($a1)
    ctx->pc = 0x302ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x302cac: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x302cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x302cb0: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x302cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x302cb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x302CB4u;
    {
        const bool branch_taken_0x302cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302cb4) {
            ctx->pc = 0x302CD0u;
            goto label_302cd0;
        }
    }
    ctx->pc = 0x302CBCu;
    // 0x302cbc: 0xc0894f6  jal         func_2253D8
    ctx->pc = 0x302CBCu;
    SET_GPR_U32(ctx, 31, 0x302CC4u);
    ctx->pc = 0x302CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302CBCu;
    // 0x302cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2253D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253D8u, 0x302CBCu, 0x302CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CC4u;
label_302cc4:
    // 0x302cc4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x302CC4u;
    {
        const bool branch_taken_0x302cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302cc4) {
            ctx->pc = 0x302CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302CC4u;
            // 0x302cc8: 0x8e0411c0  lw          $a0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302D04u;
            goto label_302d04;
        }
    }
    ctx->pc = 0x302CCCu;
label_302ccc:
    // 0x302ccc: 0xc6402b30  lwc1        $f0, 0x2B30($s2)
    ctx->pc = 0x302cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_302cd0:
    // 0x302cd0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x302cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x302cd4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x302cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302cd8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x302cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x302cdc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x302cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x302ce0: 0xc0e41ea  jal         func_3907A8
    ctx->pc = 0x302CE0u;
    SET_GPR_U32(ctx, 31, 0x302CE8u);
    ctx->pc = 0x302CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302CE0u;
    // 0x302ce4: 0x460d0342  mul.s       $f13, $f0, $f13 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3907A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3907A8u, 0x302CE0u, 0x302CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CE8u;
label_302ce8:
    // 0x302ce8: 0xc6021174  lwc1        $f2, 0x1174($s0)
    ctx->pc = 0x302ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x302cec: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x302cecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x302cf0: 0xe6021174  swc1        $f2, 0x1174($s0)
    ctx->pc = 0x302cf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4468), bits); }
    // 0x302cf4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x302cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302cf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x302cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x302cfc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x302CFCu;
    {
        const bool branch_taken_0x302cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CFCu;
        // 0x302d00: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302cfc) {
            ctx->pc = 0x302D50u;
            goto label_302d50;
        }
    }
    ctx->pc = 0x302D04u;
label_302d04:
    // 0x302d04: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x302d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x302d08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x302D08u;
    {
        const bool branch_taken_0x302d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D08u;
        // 0x302d0c: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d08) {
            ctx->pc = 0x302D50u;
            goto label_302d50;
        }
    }
    ctx->pc = 0x302D10u;
    // 0x302d10: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x302d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x302d14: 0x5043000f  beql        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x302D14u;
    {
        const bool branch_taken_0x302d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x302d14) {
            ctx->pc = 0x302D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302D14u;
            // 0x302d18: 0xc6001174  lwc1        $f0, 0x1174($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x302D54u;
            goto label_302d54;
        }
    }
    ctx->pc = 0x302D1Cu;
    // 0x302d1c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x302d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x302d20: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x302d20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x302d24: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x302d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x302d28: 0xc602050c  lwc1        $f2, 0x50C($s0)
    ctx->pc = 0x302d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x302d2c: 0xc6030510  lwc1        $f3, 0x510($s0)
    ctx->pc = 0x302d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x302d30: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x302d30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x302d34: 0xc6011174  lwc1        $f1, 0x1174($s0)
    ctx->pc = 0x302d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302d38: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x302d38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x302d3c: 0xc6001178  lwc1        $f0, 0x1178($s0)
    ctx->pc = 0x302d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302d40: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x302d40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x302d44: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x302d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x302d48: 0xe6011174  swc1        $f1, 0x1174($s0)
    ctx->pc = 0x302d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4468), bits); }
    // 0x302d4c: 0xe6001178  swc1        $f0, 0x1178($s0)
    ctx->pc = 0x302d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4472), bits); }
label_302d50:
    // 0x302d50: 0xc6001174  lwc1        $f0, 0x1174($s0)
    ctx->pc = 0x302d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_302d54:
    // 0x302d54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x302d58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x302d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302d5c: 0x0  nop
    ctx->pc = 0x302d5cu;
    // NOP
    // 0x302d60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302d60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302d64: 0x0  nop
    ctx->pc = 0x302d64u;
    // NOP
    // 0x302d68: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x302D68u;
    {
        const bool branch_taken_0x302d68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x302d68) {
            ctx->pc = 0x302D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302D68u;
            // 0x302d6c: 0xe6011174  swc1        $f1, 0x1174($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4468), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x302D90u;
            goto label_302d90;
        }
    }
    ctx->pc = 0x302D70u;
    // 0x302d70: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x302d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x302d74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x302d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302d78: 0x0  nop
    ctx->pc = 0x302d78u;
    // NOP
    // 0x302d7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x302d7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302d80: 0x0  nop
    ctx->pc = 0x302d80u;
    // NOP
    // 0x302d84: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x302D84u;
    {
        const bool branch_taken_0x302d84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302d84) {
            ctx->pc = 0x302D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302D84u;
            // 0x302d88: 0xc6001178  lwc1        $f0, 0x1178($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x302D94u;
            goto label_302d94;
        }
    }
    ctx->pc = 0x302D8Cu;
    // 0x302d8c: 0xe6011174  swc1        $f1, 0x1174($s0)
    ctx->pc = 0x302d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4468), bits); }
label_302d90:
    // 0x302d90: 0xc6001178  lwc1        $f0, 0x1178($s0)
    ctx->pc = 0x302d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_302d94:
    // 0x302d94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x302d98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x302d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302d9c: 0x0  nop
    ctx->pc = 0x302d9cu;
    // NOP
    // 0x302da0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302da4: 0x0  nop
    ctx->pc = 0x302da4u;
    // NOP
    // 0x302da8: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x302DA8u;
    {
        const bool branch_taken_0x302da8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x302da8) {
            ctx->pc = 0x302DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302DA8u;
            // 0x302dac: 0xe6011178  swc1        $f1, 0x1178($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4472), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x302DD0u;
            goto label_302dd0;
        }
    }
    ctx->pc = 0x302DB0u;
    // 0x302db0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x302db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x302db4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x302db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302db8: 0x0  nop
    ctx->pc = 0x302db8u;
    // NOP
    // 0x302dbc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x302dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302dc0: 0x0  nop
    ctx->pc = 0x302dc0u;
    // NOP
    // 0x302dc4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x302DC4u;
    {
        const bool branch_taken_0x302dc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302dc4) {
            ctx->pc = 0x302DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302DC4u;
            // 0x302dc8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302DD4u;
            goto label_302dd4;
        }
    }
    ctx->pc = 0x302DCCu;
    // 0x302dcc: 0xe6011178  swc1        $f1, 0x1178($s0)
    ctx->pc = 0x302dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4472), bits); }
label_302dd0:
    // 0x302dd0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x302dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_302dd4:
    // 0x302dd4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x302dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302dd8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x302dd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302ddc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x302ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302de0: 0x3e00008  jr          $ra
    ctx->pc = 0x302DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DE0u;
        // 0x302de4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302DE8u;
}
