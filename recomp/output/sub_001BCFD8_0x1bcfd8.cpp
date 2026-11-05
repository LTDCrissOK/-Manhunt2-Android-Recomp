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

// Function: sub_001BCFD8
// Address: 0x1bcfd8 - 0x1bd1a0
void sub_001BCFD8_0x1bcfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCFD8_0x1bcfd8");
#endif

    switch (ctx->pc) {
        case 0x1bd110u: goto label_1bd110;
        case 0x1bd118u: goto label_1bd118;
        case 0x1bd128u: goto label_1bd128;
        case 0x1bd138u: goto label_1bd138;
        default: break;
    }

    ctx->pc = 0x1bcfd8u;

    // 0x1bcfd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bcfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bcfdc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1bcfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1bcfe0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bcfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bcfe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bcfe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcfe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bcfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bcfec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bcfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcff0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bcff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bcff4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1bcff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1bcff8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCFF8u;
    {
        const bool branch_taken_0x1bcff8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BCFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCFF8u;
        // 0x1bcffc: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcff8) {
            ctx->pc = 0x1BD014u;
            goto label_1bd014;
        }
    }
    ctx->pc = 0x1BD000u;
    // 0x1bd000: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bd000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd004: 0x0  nop
    ctx->pc = 0x1bd004u;
    // NOP
    // 0x1bd008: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bd008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bd00c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD00Cu;
    {
        const bool branch_taken_0x1bd00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd00c) {
            ctx->pc = 0x1BD030u;
            goto label_1bd030;
        }
    }
    ctx->pc = 0x1BD014u;
label_1bd014:
    // 0x1bd014: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1bd014u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1bd018: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bd018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bd01c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bd01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bd020: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bd020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd024: 0x0  nop
    ctx->pc = 0x1bd024u;
    // NOP
    // 0x1bd028: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bd028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bd02c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1bd02cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1bd030:
    // 0x1bd030: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bd030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1bd034: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bd034u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1bd038: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd03c: 0xc6210374  lwc1        $f1, 0x374($s1)
    ctx->pc = 0x1bd03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd040: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bd040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bd044: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bd044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd048: 0x0  nop
    ctx->pc = 0x1bd048u;
    // NOP
    // 0x1bd04c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1BD04Cu;
    {
        const bool branch_taken_0x1bd04c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD04Cu;
        // 0x1bd050: 0x8c822b00  lw          $v0, 0x2B00($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd04c) {
            ctx->pc = 0x1BD098u;
            goto label_1bd098;
        }
    }
    ctx->pc = 0x1BD054u;
    // 0x1bd054: 0x8e220378  lw          $v0, 0x378($s1)
    ctx->pc = 0x1bd054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 888)));
    // 0x1bd058: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1BD058u;
    {
        const bool branch_taken_0x1bd058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD058u;
        // 0x1bd05c: 0x26240110  addiu       $a0, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd058) {
            ctx->pc = 0x1BD184u;
            goto label_1bd184;
        }
    }
    ctx->pc = 0x1BD060u;
    // 0x1bd060: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x1bd060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd064: 0x26250130  addiu       $a1, $s1, 0x130
    ctx->pc = 0x1bd064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x1bd068: 0xe6210130  swc1        $f1, 0x130($s1)
    ctx->pc = 0x1bd068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x1bd06c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1bd06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd070: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1bd070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1bd074: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1bd074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd078: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1bd078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1bd07c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1bd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bd080: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1bd080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x1bd084: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1bd084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bd088: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x1bd088u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x1bd08c: 0xae200380  sw          $zero, 0x380($s1)
    ctx->pc = 0x1bd08cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 0));
    // 0x1bd090: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1BD090u;
    {
        const bool branch_taken_0x1bd090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD090u;
        // 0x1bd094: 0x8e220378  lw          $v0, 0x378($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd090) {
            ctx->pc = 0x1BD184u;
            goto label_1bd184;
        }
    }
    ctx->pc = 0x1BD098u;
label_1bd098:
    // 0x1bd098: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD098u;
    {
        const bool branch_taken_0x1bd098 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BD09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD098u;
        // 0x1bd09c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd098) {
            ctx->pc = 0x1BD0B4u;
            goto label_1bd0b4;
        }
    }
    ctx->pc = 0x1BD0A0u;
    // 0x1bd0a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bd0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd0a4: 0x0  nop
    ctx->pc = 0x1bd0a4u;
    // NOP
    // 0x1bd0a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bd0a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bd0ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD0ACu;
    {
        const bool branch_taken_0x1bd0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd0ac) {
            ctx->pc = 0x1BD0CCu;
            goto label_1bd0cc;
        }
    }
    ctx->pc = 0x1BD0B4u;
label_1bd0b4:
    // 0x1bd0b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bd0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bd0b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bd0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bd0bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bd0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd0c0: 0x0  nop
    ctx->pc = 0x1bd0c0u;
    // NOP
    // 0x1bd0c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bd0c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bd0c8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1bd0c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1bd0cc:
    // 0x1bd0cc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bd0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1bd0d0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bd0d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1bd0d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd0d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd0d8: 0x26320110  addiu       $s2, $s1, 0x110
    ctx->pc = 0x1bd0d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1bd0dc: 0x3c013dfb  lui         $at, 0x3DFB
    ctx->pc = 0x1bd0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15867 << 16));
    // 0x1bd0e0: 0x3421e76d  ori         $at, $at, 0xE76D
    ctx->pc = 0x1bd0e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59245);
    // 0x1bd0e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bd0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd0e8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bd0e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bd0ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bd0ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bd0f0: 0xe6200374  swc1        $f0, 0x374($s1)
    ctx->pc = 0x1bd0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 884), bits); }
    // 0x1bd0f4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1bd0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1bd0f8: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1bd0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x1bd0fc: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1BD0FCu;
    {
        const bool branch_taken_0x1bd0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd0fc) {
            ctx->pc = 0x1BD100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD0FCu;
            // 0x1bd100: 0xae200378  sw          $zero, 0x378($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 888), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD180u;
            goto label_1bd180;
        }
    }
    ctx->pc = 0x1BD104u;
    // 0x1bd104: 0x26300260  addiu       $s0, $s1, 0x260
    ctx->pc = 0x1bd104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
    // 0x1bd108: 0xc06fc34  jal         func_1BF0D0
    ctx->pc = 0x1BD108u;
    SET_GPR_U32(ctx, 31, 0x1BD110u);
    ctx->pc = 0x1BD10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD108u;
    // 0x1bd10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BD108u, 0x1BD110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD110u;
label_1bd110:
    // 0x1bd110: 0xc06fcc8  jal         func_1BF320
    ctx->pc = 0x1BD110u;
    SET_GPR_U32(ctx, 31, 0x1BD118u);
    ctx->pc = 0x1BD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD110u;
    // 0x1bd114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF320u, 0x1BD110u, 0x1BD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD118u;
label_1bd118:
    // 0x1bd118: 0x8e2600e4  lw          $a2, 0xE4($s1)
    ctx->pc = 0x1bd118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x1bd11c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd120: 0xc06f688  jal         func_1BDA20
    ctx->pc = 0x1BD120u;
    SET_GPR_U32(ctx, 31, 0x1BD128u);
    ctx->pc = 0x1BD124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD120u;
    // 0x1bd124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA20u, 0x1BD120u, 0x1BD128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD128u;
label_1bd128:
    // 0x1bd128: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BD128u;
    {
        const bool branch_taken_0x1bd128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd128) {
            ctx->pc = 0x1BD12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD128u;
            // 0x1bd12c: 0xae200378  sw          $zero, 0x378($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 888), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD180u;
            goto label_1bd180;
        }
    }
    ctx->pc = 0x1BD130u;
    // 0x1bd130: 0xc06f468  jal         func_1BD1A0
    ctx->pc = 0x1BD130u;
    SET_GPR_U32(ctx, 31, 0x1BD138u);
    ctx->pc = 0x1BD134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD130u;
    // 0x1bd134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD1A0u, 0x1BD130u, 0x1BD138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD138u;
label_1bd138:
    // 0x1bd138: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BD138u;
    {
        const bool branch_taken_0x1bd138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD138u;
        // 0x1bd13c: 0x26250130  addiu       $a1, $s1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd138) {
            ctx->pc = 0x1BD17Cu;
            goto label_1bd17c;
        }
    }
    ctx->pc = 0x1BD140u;
    // 0x1bd140: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x1bd140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd144: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bd144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd14c: 0xe6210130  swc1        $f1, 0x130($s1)
    ctx->pc = 0x1bd14cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x1bd150: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1bd150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd154: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1bd154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1bd158: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1bd158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd15c: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1bd15cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1bd160: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1bd160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1bd164: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1bd164u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1bd168: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1bd168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1bd16c: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x1bd16cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    // 0x1bd170: 0xae260378  sw          $a2, 0x378($s1)
    ctx->pc = 0x1bd170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 888), GPR_U32(ctx, 6));
    // 0x1bd174: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD174u;
    {
        const bool branch_taken_0x1bd174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD174u;
        // 0x1bd178: 0xae200380  sw          $zero, 0x380($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd174) {
            ctx->pc = 0x1BD184u;
            goto label_1bd184;
        }
    }
    ctx->pc = 0x1BD17Cu;
label_1bd17c:
    // 0x1bd17c: 0xae200378  sw          $zero, 0x378($s1)
    ctx->pc = 0x1bd17cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 888), GPR_U32(ctx, 0));
label_1bd180:
    // 0x1bd180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bd180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd184:
    // 0x1bd184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd188: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bd188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd18c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bd18cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd190: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bd190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bd194: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD194u;
        // 0x1bd198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD19Cu;
    // 0x1bd19c: 0x0  nop
    ctx->pc = 0x1bd19cu;
    // NOP
    ctx->pc = 0x1bd1a0u;
}
