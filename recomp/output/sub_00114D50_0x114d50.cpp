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

// Function: sub_00114D50
// Address: 0x114d50 - 0x115038
void sub_00114D50_0x114d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114D50_0x114d50");
#endif

    switch (ctx->pc) {
        case 0x114d90u: goto label_114d90;
        case 0x114db0u: goto label_114db0;
        case 0x114de4u: goto label_114de4;
        case 0x114ec0u: goto label_114ec0;
        case 0x114ec8u: goto label_114ec8;
        case 0x114f60u: goto label_114f60;
        case 0x114f78u: goto label_114f78;
        case 0x114f98u: goto label_114f98;
        case 0x114fb4u: goto label_114fb4;
        case 0x114fc0u: goto label_114fc0;
        case 0x114fccu: goto label_114fcc;
        case 0x114fd8u: goto label_114fd8;
        case 0x114fe4u: goto label_114fe4;
        case 0x114ffcu: goto label_114ffc;
        case 0x11500cu: goto label_11500c;
        default: break;
    }

    ctx->pc = 0x114d50u;

    // 0x114d50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x114d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x114d54: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x114d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x114d58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x114d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x114d5c: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x114d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x114d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x114d64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d68: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x114d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x114d6c: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x114d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x114d70: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x114d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x114d74: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x114d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x114d78: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x114d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x114d7c: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x114d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x114d80: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x114d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x114d84: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x114d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x114d88: 0xc044194  jal         func_110650
    ctx->pc = 0x114D88u;
    SET_GPR_U32(ctx, 31, 0x114D90u);
    ctx->pc = 0x114D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D88u;
    // 0x114d8c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110650u, 0x114D88u, 0x114D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D90u;
label_114d90:
    // 0x114d90: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x114d90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d94: 0x16a0000a  bnez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x114D94u;
    {
        const bool branch_taken_0x114d94 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x114D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D94u;
        // 0x114d98: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d94) {
            ctx->pc = 0x114DC0u;
            goto label_114dc0;
        }
    }
    ctx->pc = 0x114D9Cu;
    // 0x114d9c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x114d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x114da0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x114da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x114da4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x114da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114da8: 0xc044194  jal         func_110650
    ctx->pc = 0x114DA8u;
    SET_GPR_U32(ctx, 31, 0x114DB0u);
    ctx->pc = 0x114DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114DA8u;
    // 0x114dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110650u, 0x114DA8u, 0x114DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DB0u;
label_114db0:
    // 0x114db0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x114db0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114db4: 0x12a00095  beqz        $s5, . + 4 + (0x95 << 2)
    ctx->pc = 0x114DB4u;
    {
        const bool branch_taken_0x114db4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x114DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DB4u;
        // 0x114db8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114db4) {
            ctx->pc = 0x11500Cu;
            goto label_11500c;
        }
    }
    ctx->pc = 0x114DBCu;
    // 0x114dbc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x114dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_114dc0:
    // 0x114dc0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x114dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x114dc4: 0x24729a08  addiu       $s2, $v1, -0x65F8
    ctx->pc = 0x114dc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x114dc8: 0x2650020c  addiu       $s0, $s2, 0x20C
    ctx->pc = 0x114dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 524));
    // 0x114dcc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x114dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x114dd0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x114dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114dd4: 0x1220008d  beqz        $s1, . + 4 + (0x8D << 2)
    ctx->pc = 0x114DD4u;
    {
        const bool branch_taken_0x114dd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x114DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DD4u;
        // 0x114dd8: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dd4) {
            ctx->pc = 0x11500Cu;
            goto label_11500c;
        }
    }
    ctx->pc = 0x114DDCu;
    // 0x114ddc: 0xc043958  jal         func_10E560
    ctx->pc = 0x114DDCu;
    SET_GPR_U32(ctx, 31, 0x114DE4u);
    ctx->pc = 0x114DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114DDCu;
    // 0x114de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x114DDCu, 0x114DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DE4u;
label_114de4:
    // 0x114de4: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x114de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x114de8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x114de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x114dec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x114decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x114df0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x114df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x114df4: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x114DF4u;
    {
        const bool branch_taken_0x114df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DF4u;
        // 0x114df8: 0x2b80b  movn        $s7, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114df4) {
            ctx->pc = 0x11500Cu;
            goto label_11500c;
        }
    }
    ctx->pc = 0x114DFCu;
    // 0x114dfc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x114dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x114e00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x114e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x114e04: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x114e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x114e08: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x114e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x114e0c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x114E0Cu;
    {
        const bool branch_taken_0x114e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114e0c) {
            ctx->pc = 0x114E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114E0Cu;
            // 0x114e10: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114E1Cu;
            goto label_114e1c;
        }
    }
    ctx->pc = 0x114E14u;
    // 0x114e14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x114E14u;
    {
        const bool branch_taken_0x114e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E14u;
        // 0x114e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e14) {
            ctx->pc = 0x114E24u;
            goto label_114e24;
        }
    }
    ctx->pc = 0x114E1Cu;
label_114e1c:
    // 0x114e1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x114e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114e20: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x114e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_114e24:
    // 0x114e24: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x114E24u;
    {
        const bool branch_taken_0x114e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E24u;
        // 0x114e28: 0x26839a08  addiu       $v1, $s4, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e24) {
            ctx->pc = 0x11500Cu;
            goto label_11500c;
        }
    }
    ctx->pc = 0x114E2Cu;
    // 0x114e2c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x114e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114e30: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x114e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x114e34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114e38: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x114e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x114e3c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x114e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x114e40: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x114e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x114e44: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x114e44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x114e48: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x114e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114e4c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x114e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x114e50: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x114e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x114e54: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x114e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x114e58: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x114e58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x114e5c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x114e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x114e60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x114e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x114e64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x114e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x114e68: 0x8c630108  lw          $v1, 0x108($v1)
    ctx->pc = 0x114e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x114e6c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x114E6Cu;
    {
        const bool branch_taken_0x114e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114e6c) {
            ctx->pc = 0x114E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114E6Cu;
            // 0x114e70: 0x8c620104  lw          $v0, 0x104($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114E7Cu;
            goto label_114e7c;
        }
    }
    ctx->pc = 0x114E74u;
    // 0x114e74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x114E74u;
    {
        const bool branch_taken_0x114e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E74u;
        // 0x114e78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e74) {
            ctx->pc = 0x114E84u;
            goto label_114e84;
        }
    }
    ctx->pc = 0x114E7Cu;
label_114e7c:
    // 0x114e7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x114e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114e80: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x114e80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_114e84:
    // 0x114e84: 0x12400061  beqz        $s2, . + 4 + (0x61 << 2)
    ctx->pc = 0x114E84u;
    {
        const bool branch_taken_0x114e84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E84u;
        // 0x114e88: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e84) {
            ctx->pc = 0x11500Cu;
            goto label_11500c;
        }
    }
    ctx->pc = 0x114E8Cu;
    // 0x114e8c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x114e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114e90: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x114e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x114e94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114e98: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x114e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x114e9c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x114e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x114ea0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x114ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x114ea4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x114ea4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x114ea8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x114ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114eac: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x114eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x114eb0: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x114eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x114eb4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x114eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x114eb8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x114EB8u;
    SET_GPR_U32(ctx, 31, 0x114EC0u);
    ctx->pc = 0x114EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114EB8u;
    // 0x114ebc: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x114EB8u, 0x114EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114EC0u;
label_114ec0:
    // 0x114ec0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x114EC0u;
    SET_GPR_U32(ctx, 31, 0x114EC8u);
    ctx->pc = 0x114EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114EC0u;
    // 0x114ec4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x114EC0u, 0x114EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114EC8u;
label_114ec8:
    // 0x114ec8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x114ec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114ecc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x114eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x114ed0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x114ed0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114ed4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x114ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x114ed8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x114ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x114edc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x114edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114ee0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x114ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x114ee4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x114ee4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x114ee8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x114ee8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x114eec: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x114eecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x114ef0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x114ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x114ef4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x114ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x114ef8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x114ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x114efc: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x114efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x114f00: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x114f00u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x114f04: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x114f04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x114f08: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x114f08u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x114f0c: 0x0  nop
    ctx->pc = 0x114f0cu;
    // NOP
    // 0x114f10: 0x0  nop
    ctx->pc = 0x114f10u;
    // NOP
    // 0x114f14: 0x46010084  c1          0x10084
    ctx->pc = 0x114f14u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x114f18: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x114f18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x114f1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x114f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114f20: 0x0  nop
    ctx->pc = 0x114f20u;
    // NOP
    // 0x114f24: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x114f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114f28: 0x0  nop
    ctx->pc = 0x114f28u;
    // NOP
    // 0x114f2c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x114F2Cu;
    {
        const bool branch_taken_0x114f2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F2Cu;
        // 0x114f30: 0xe7a20070  swc1        $f2, 0x70($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f2c) {
            ctx->pc = 0x114F58u;
            goto label_114f58;
        }
    }
    ctx->pc = 0x114F34u;
    // 0x114f34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114f38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114f3c: 0x0  nop
    ctx->pc = 0x114f3cu;
    // NOP
    // 0x114f40: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x114f40u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x114f44: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x114f44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x114f48: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x114f48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x114f4c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x114f4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x114f50: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x114f50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x114f54: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x114f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_114f58:
    // 0x114f58: 0xc0779a4  jal         func_1DE690
    ctx->pc = 0x114F58u;
    SET_GPR_U32(ctx, 31, 0x114F60u);
    ctx->pc = 0x114F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F58u;
    // 0x114f5c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE690u, 0x114F58u, 0x114F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F60u;
label_114f60:
    // 0x114f60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114F60u;
    {
        const bool branch_taken_0x114f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114f60) {
            ctx->pc = 0x114F70u;
            goto label_114f70;
        }
    }
    ctx->pc = 0x114F68u;
    // 0x114f68: 0x12e00028  beqz        $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x114F68u;
    {
        const bool branch_taken_0x114f68 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F68u;
        // 0x114f6c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f68) {
            ctx->pc = 0x11500Cu;
            goto label_11500c;
        }
    }
    ctx->pc = 0x114F70u;
label_114f70:
    // 0x114f70: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x114F70u;
    SET_GPR_U32(ctx, 31, 0x114F78u);
    ctx->pc = 0x114F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F70u;
    // 0x114f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x114F70u, 0x114F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F78u;
label_114f78:
    // 0x114f78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x114f78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114f7c: 0x12800024  beqz        $s4, . + 4 + (0x24 << 2)
    ctx->pc = 0x114F7Cu;
    {
        const bool branch_taken_0x114f7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F7Cu;
        // 0x114f80: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f7c) {
            ctx->pc = 0x115010u;
            goto label_115010;
        }
    }
    ctx->pc = 0x114F84u;
    // 0x114f84: 0x8e7600b0  lw          $s6, 0xB0($s3)
    ctx->pc = 0x114f84u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x114f88: 0x12c00021  beqz        $s6, . + 4 + (0x21 << 2)
    ctx->pc = 0x114F88u;
    {
        const bool branch_taken_0x114f88 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F88u;
        // 0x114f8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f88) {
            ctx->pc = 0x115010u;
            goto label_115010;
        }
    }
    ctx->pc = 0x114F90u;
    // 0x114f90: 0xc0449d6  jal         func_112758
    ctx->pc = 0x114F90u;
    SET_GPR_U32(ctx, 31, 0x114F98u);
    ctx->pc = 0x114F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F90u;
    // 0x114f94: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112758u, 0x114F90u, 0x114F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F98u;
label_114f98:
    // 0x114f98: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x114f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x114f9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x114f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114fa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114fa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114fac: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x114FACu;
    SET_GPR_U32(ctx, 31, 0x114FB4u);
    ctx->pc = 0x114FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114FACu;
    // 0x114fb0: 0x57800a  movz        $s0, $v0, $s7 (Delay Slot)
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x114FACu, 0x114FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114FB4u;
label_114fb4:
    // 0x114fb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114fb8: 0xc046190  jal         func_118640
    ctx->pc = 0x114FB8u;
    SET_GPR_U32(ctx, 31, 0x114FC0u);
    ctx->pc = 0x114FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114FB8u;
    // 0x114fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x114FB8u, 0x114FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114FC0u;
label_114fc0:
    // 0x114fc0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x114fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114fc4: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x114FC4u;
    SET_GPR_U32(ctx, 31, 0x114FCCu);
    ctx->pc = 0x114FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114FC4u;
    // 0x114fc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x114FC4u, 0x114FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114FCCu;
label_114fcc:
    // 0x114fcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x114fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114fd0: 0xc046058  jal         func_118160
    ctx->pc = 0x114FD0u;
    SET_GPR_U32(ctx, 31, 0x114FD8u);
    ctx->pc = 0x114FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114FD0u;
    // 0x114fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x114FD0u, 0x114FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114FD8u;
label_114fd8:
    // 0x114fd8: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x114fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x114fdc: 0xc0461e8  jal         func_1187A0
    ctx->pc = 0x114FDCu;
    SET_GPR_U32(ctx, 31, 0x114FE4u);
    ctx->pc = 0x114FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114FDCu;
    // 0x114fe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x114FDCu, 0x114FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114FE4u;
label_114fe4:
    // 0x114fe4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x114fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x114fe8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x114fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114fec: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x114fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x114ff0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x114ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ff4: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x114FF4u;
    SET_GPR_U32(ctx, 31, 0x114FFCu);
    ctx->pc = 0x114FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114FF4u;
    // 0x114ff8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x114FF4u, 0x114FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114FFCu;
label_114ffc:
    // 0x114ffc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x114ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115000: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x115000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115004: 0xc04445e  jal         func_111178
    ctx->pc = 0x115004u;
    SET_GPR_U32(ctx, 31, 0x11500Cu);
    ctx->pc = 0x115008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115004u;
    // 0x115008: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111178u, 0x115004u, 0x11500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11500Cu;
label_11500c:
    // 0x11500c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x11500cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_115010:
    // 0x115010: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x115010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x115014: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x115014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x115018: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x115018u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x11501c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x11501cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x115020: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x115020u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x115024: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x115024u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x115028: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x115028u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x11502c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x11502cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x115030: 0x3e00008  jr          $ra
    ctx->pc = 0x115030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115030u;
        // 0x115034: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115038u;
}
