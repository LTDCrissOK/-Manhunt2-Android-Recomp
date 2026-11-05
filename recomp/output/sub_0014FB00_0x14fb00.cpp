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

// Function: sub_0014FB00
// Address: 0x14fb00 - 0x14fce8
void sub_0014FB00_0x14fb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FB00_0x14fb00");
#endif

    switch (ctx->pc) {
        case 0x14fb38u: goto label_14fb38;
        case 0x14fb48u: goto label_14fb48;
        case 0x14fb54u: goto label_14fb54;
        case 0x14fb78u: goto label_14fb78;
        case 0x14fbb0u: goto label_14fbb0;
        case 0x14fbc8u: goto label_14fbc8;
        case 0x14fbe8u: goto label_14fbe8;
        case 0x14fc3cu: goto label_14fc3c;
        case 0x14fc50u: goto label_14fc50;
        case 0x14fc80u: goto label_14fc80;
        case 0x14fc98u: goto label_14fc98;
        case 0x14fca8u: goto label_14fca8;
        case 0x14fcb8u: goto label_14fcb8;
        case 0x14fcc8u: goto label_14fcc8;
        default: break;
    }

    ctx->pc = 0x14fb00u;

label_14fb00:
    // 0x14fb00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14fb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14fb04: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x14fb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x14fb08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14fb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14fb0c: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x14fb0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14fb10: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14fb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14fb14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14fb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14fb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14fb1c: 0x2e620005  sltiu       $v0, $s3, 0x5
    ctx->pc = 0x14fb1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x14fb20: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14fb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14fb24: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14FB24u;
    {
        const bool branch_taken_0x14fb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB24u;
        // 0x14fb28: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb24) {
            ctx->pc = 0x14FB5Cu;
            goto label_14fb5c;
        }
    }
    ctx->pc = 0x14FB2Cu;
    // 0x14fb2c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14fb2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14fb30: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14FB30u;
    SET_GPR_U32(ctx, 31, 0x14FB38u);
    ctx->pc = 0x14FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FB30u;
    // 0x14fb34: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14FB30u, 0x14FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB38u;
label_14fb38:
    // 0x14fb38: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14fb38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14fb3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14fb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb40: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x14FB40u;
    SET_GPR_U32(ctx, 31, 0x14FB48u);
    ctx->pc = 0x14FB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FB40u;
    // 0x14fb44: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x14FB40u, 0x14FB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB48u;
label_14fb48:
    // 0x14fb48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14fb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb4c: 0xc054498  jal         func_151260
    ctx->pc = 0x14FB4Cu;
    SET_GPR_U32(ctx, 31, 0x14FB54u);
    ctx->pc = 0x14FB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FB4Cu;
    // 0x14fb50: 0x8c8508c0  lw          $a1, 0x8C0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151260u, 0x14FB4Cu, 0x14FB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB54u;
label_14fb54:
    // 0x14fb54: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x14FB54u;
    {
        const bool branch_taken_0x14fb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB54u;
        // 0x14fb58: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb54) {
            ctx->pc = 0x14FCCCu;
            goto label_14fccc;
        }
    }
    ctx->pc = 0x14FB5Cu;
label_14fb5c:
    // 0x14fb5c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14fb5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14fb60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14fb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb64: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x14fb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x14fb68: 0x34214fff  ori         $at, $at, 0x4FFF
    ctx->pc = 0x14fb68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20479);
    // 0x14fb6c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14fb6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14fb70: 0xc04e0c0  jal         func_138300
    ctx->pc = 0x14FB70u;
    SET_GPR_U32(ctx, 31, 0x14FB78u);
    ctx->pc = 0x14FB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FB70u;
    // 0x14fb74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x14FB70u, 0x14FB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB78u;
label_14fb78:
    // 0x14fb78: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x14fb78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14fb7c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x14fb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x14fb80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14fb84: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x14fb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x14fb88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fb8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14fb8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14fb90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14fb94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14fb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fb98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14fb9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14fba0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14fba4: 0x8c92020c  lw          $s2, 0x20C($a0)
    ctx->pc = 0x14fba4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x14fba8: 0xc04547e  jal         func_1151F8
    ctx->pc = 0x14FBA8u;
    SET_GPR_U32(ctx, 31, 0x14FBB0u);
    ctx->pc = 0x14FBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FBA8u;
    // 0x14fbac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1151F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1151F8u, 0x14FBA8u, 0x14FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FBB0u;
label_14fbb0:
    // 0x14fbb0: 0x92020938  lbu         $v0, 0x938($s0)
    ctx->pc = 0x14fbb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2360)));
    // 0x14fbb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FBB4u;
    {
        const bool branch_taken_0x14fbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBB4u;
        // 0x14fbb8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbb4) {
            ctx->pc = 0x14FBCCu;
            goto label_14fbcc;
        }
    }
    ctx->pc = 0x14FBBCu;
    // 0x14fbbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14fbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbc0: 0xc054708  jal         func_151C20
    ctx->pc = 0x14FBC0u;
    SET_GPR_U32(ctx, 31, 0x14FBC8u);
    ctx->pc = 0x14FBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FBC0u;
    // 0x14fbc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C20u, 0x14FBC0u, 0x14FBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FBC8u;
label_14fbc8:
    // 0x14fbc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14fbc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14fbcc:
    // 0x14fbcc: 0x9202095c  lbu         $v0, 0x95C($s0)
    ctx->pc = 0x14fbccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2396)));
    // 0x14fbd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14fbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FBD4u;
    {
        const bool branch_taken_0x14fbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBD4u;
        // 0x14fbd8: 0xe7b40004  swc1        $f20, 0x4($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbd4) {
            ctx->pc = 0x14FBECu;
            goto label_14fbec;
        }
    }
    ctx->pc = 0x14FBDCu;
    // 0x14fbdc: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x14fbdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x14fbe0: 0xc054790  jal         func_151E40
    ctx->pc = 0x14FBE0u;
    SET_GPR_U32(ctx, 31, 0x14FBE8u);
    ctx->pc = 0x14FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FBE0u;
    // 0x14fbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151E40u, 0x14FBE0u, 0x14FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FBE8u;
label_14fbe8:
    // 0x14fbe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14fbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14fbec:
    // 0x14fbec: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x14fbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fbf0: 0x3c0147af  lui         $at, 0x47AF
    ctx->pc = 0x14fbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18351 << 16));
    // 0x14fbf4: 0x3421c800  ori         $at, $at, 0xC800
    ctx->pc = 0x14fbf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51200);
    // 0x14fbf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14fbf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14fbfc: 0x0  nop
    ctx->pc = 0x14fbfcu;
    // NOP
    // 0x14fc00: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x14fc00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fc04: 0x0  nop
    ctx->pc = 0x14fc04u;
    // NOP
    // 0x14fc08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14FC08u;
    {
        const bool branch_taken_0x14fc08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC08u;
        // 0x14fc0c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc08) {
            ctx->pc = 0x14FC20u;
            goto label_14fc20;
        }
    }
    ctx->pc = 0x14FC10u;
    // 0x14fc10: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x14fc10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fc14: 0x0  nop
    ctx->pc = 0x14fc14u;
    // NOP
    // 0x14fc18: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x14FC18u;
    {
        const bool branch_taken_0x14fc18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fc18) {
            ctx->pc = 0x14FC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FC18u;
            // 0x14fc1c: 0x8e030964  lw          $v1, 0x964($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FC58u;
            goto label_14fc58;
        }
    }
    ctx->pc = 0x14FC20u;
label_14fc20:
    // 0x14fc20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14fc20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fc24: 0x0  nop
    ctx->pc = 0x14fc24u;
    // NOP
    // 0x14fc28: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14FC28u;
    {
        const bool branch_taken_0x14fc28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC28u;
        // 0x14fc2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc28) {
            ctx->pc = 0x14FC44u;
            goto label_14fc44;
        }
    }
    ctx->pc = 0x14FC30u;
    // 0x14fc30: 0xae110968  sw          $s1, 0x968($s0)
    ctx->pc = 0x14fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2408), GPR_U32(ctx, 17));
    // 0x14fc34: 0xc053fce  jal         func_14FF38
    ctx->pc = 0x14FC34u;
    SET_GPR_U32(ctx, 31, 0x14FC3Cu);
    ctx->pc = 0x14FC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC34u;
    // 0x14fc38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF38u, 0x14FC34u, 0x14FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FC3Cu;
label_14fc3c:
    // 0x14fc3c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x14FC3Cu;
    {
        const bool branch_taken_0x14fc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC3Cu;
        // 0x14fc40: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc3c) {
            ctx->pc = 0x14FCCCu;
            goto label_14fccc;
        }
    }
    ctx->pc = 0x14FC44u;
label_14fc44:
    // 0x14fc44: 0xae000968  sw          $zero, 0x968($s0)
    ctx->pc = 0x14fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2408), GPR_U32(ctx, 0));
    // 0x14fc48: 0xc053f3a  jal         func_14FCE8
    ctx->pc = 0x14FC48u;
    SET_GPR_U32(ctx, 31, 0x14FC50u);
    ctx->pc = 0x14FC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC48u;
    // 0x14fc4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FCE8u, 0x14FC48u, 0x14FC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FC50u;
label_14fc50:
    // 0x14fc50: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14FC50u;
    {
        const bool branch_taken_0x14fc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC50u;
        // 0x14fc54: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc50) {
            ctx->pc = 0x14FCCCu;
            goto label_14fccc;
        }
    }
    ctx->pc = 0x14FC58u;
label_14fc58:
    // 0x14fc58: 0x8e0208c0  lw          $v0, 0x8C0($s0)
    ctx->pc = 0x14fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2240)));
    // 0x14fc5c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FC5Cu;
    {
        const bool branch_taken_0x14fc5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14fc5c) {
            ctx->pc = 0x14FC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FC5Cu;
            // 0x14fc60: 0x8e020960  lw          $v0, 0x960($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FC70u;
            goto label_14fc70;
        }
    }
    ctx->pc = 0x14FC64u;
    // 0x14fc64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fc68: 0xae020960  sw          $v0, 0x960($s0)
    ctx->pc = 0x14fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2400), GPR_U32(ctx, 2));
    // 0x14fc6c: 0x8e020960  lw          $v0, 0x960($s0)
    ctx->pc = 0x14fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2400)));
label_14fc70:
    // 0x14fc70: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FC70u;
    {
        const bool branch_taken_0x14fc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fc70) {
            ctx->pc = 0x14FC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FC70u;
            // 0x14fc74: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FC8Cu;
            goto label_14fc8c;
        }
    }
    ctx->pc = 0x14FC78u;
    // 0x14fc78: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x14FC78u;
    SET_GPR_U32(ctx, 31, 0x14FC80u);
    ctx->pc = 0x14FC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC78u;
    // 0x14fc7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x14FC78u, 0x14FC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FC80u;
label_14fc80:
    // 0x14fc80: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14FC80u;
    {
        const bool branch_taken_0x14fc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fc80) {
            ctx->pc = 0x14FC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FC80u;
            // 0x14fc84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FCB0u;
            goto label_14fcb0;
        }
    }
    ctx->pc = 0x14FC88u;
    // 0x14fc88: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14fc88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14fc8c:
    // 0x14fc8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14fc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc90: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14FC90u;
    SET_GPR_U32(ctx, 31, 0x14FC98u);
    ctx->pc = 0x14FC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC90u;
    // 0x14fc94: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14FC90u, 0x14FC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FC98u;
label_14fc98:
    // 0x14fc98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14fc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc9c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x14fc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14fca0: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x14FCA0u;
    SET_GPR_U32(ctx, 31, 0x14FCA8u);
    ctx->pc = 0x14FCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FCA0u;
    // 0x14fca4: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x14FCA0u, 0x14FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCA8u;
label_14fca8:
    // 0x14fca8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14FCA8u;
    {
        const bool branch_taken_0x14fca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCA8u;
        // 0x14fcac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fca8) {
            ctx->pc = 0x14FCCCu;
            goto label_14fccc;
        }
    }
    ctx->pc = 0x14FCB0u;
label_14fcb0:
    // 0x14fcb0: 0xc0544a8  jal         func_1512A0
    ctx->pc = 0x14FCB0u;
    SET_GPR_U32(ctx, 31, 0x14FCB8u);
    ctx->pc = 0x14FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FCB0u;
    // 0x14fcb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1512A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1512A0u, 0x14FCB0u, 0x14FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCB8u;
label_14fcb8:
    // 0x14fcb8: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x14fcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14fcbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14fcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcc0: 0xc053ec0  jal         func_14FB00
    ctx->pc = 0x14FCC0u;
    SET_GPR_U32(ctx, 31, 0x14FCC8u);
    ctx->pc = 0x14FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FCC0u;
    // 0x14fcc4: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB00u;
    goto label_14fb00;
    ctx->pc = 0x14FCC8u;
label_14fcc8:
    // 0x14fcc8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14fcc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14fccc:
    // 0x14fccc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14fcccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14fcd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14fcd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fcd4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x14fcd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14fcd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14fcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fcdc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x14fcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14fce0: 0x3e00008  jr          $ra
    ctx->pc = 0x14FCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCE0u;
        // 0x14fce4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FCE8u;
}
