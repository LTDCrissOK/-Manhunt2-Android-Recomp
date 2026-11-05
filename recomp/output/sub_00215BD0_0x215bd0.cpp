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

// Function: sub_00215BD0
// Address: 0x215bd0 - 0x215d80
void sub_00215BD0_0x215bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215BD0_0x215bd0");
#endif

    switch (ctx->pc) {
        case 0x215c5cu: goto label_215c5c;
        case 0x215c80u: goto label_215c80;
        case 0x215ca4u: goto label_215ca4;
        case 0x215cc8u: goto label_215cc8;
        default: break;
    }

    ctx->pc = 0x215bd0u;

    // 0x215bd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x215bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x215bd4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x215bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x215bd8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x215bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x215bdc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x215bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x215be0: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x215be0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x215be4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x215be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x215be8: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x215be8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x215bec: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x215becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x215bf0: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x215bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x215bf4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x215bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x215bf8: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x215bf8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x215bfc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x215bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x215c00: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x215c00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c04: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x215c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x215c08: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x215c08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c0c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x215c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x215c10: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x215c10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x215c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x215c18: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x215c18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c1c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x215c1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x215c20: 0xc66c2b8c  lwc1        $f12, 0x2B8C($s3)
    ctx->pc = 0x215c20u;
    { uint32_t bits = FAST_READ32(0x482B8Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x215c24: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x215c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x215c28: 0xc4940020  lwc1        $f20, 0x20($a0)
    ctx->pc = 0x215c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x215c2c: 0x460c2301  sub.s       $f12, $f4, $f12
    ctx->pc = 0x215c2cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x215c30: 0xc6422b88  lwc1        $f2, 0x2B88($s2)
    ctx->pc = 0x215c30u;
    { uint32_t bits = FAST_READ32(0x482B88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215c34: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x215c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215c38: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x215c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x215c3c: 0x46146301  sub.s       $f12, $f12, $f20
    ctx->pc = 0x215c3cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    // 0x215c40: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x215c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215c44: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x215c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x215c48: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x215c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x215c4c: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x215c4cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x215c50: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x215c50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x215c54: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x215C54u;
    SET_GPR_U32(ctx, 31, 0x215C5Cu);
    ctx->pc = 0x215C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C54u;
    // 0x215c58: 0xe7a40000  swc1        $f4, 0x0($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x215C54u, 0x215C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C5Cu;
label_215c5c:
    // 0x215c5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x215c5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x215c60: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x215c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x215c64: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x215c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x215c68: 0xc6202b84  lwc1        $f0, 0x2B84($s1)
    ctx->pc = 0x215c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215c6c: 0xc6012b80  lwc1        $f1, 0x2B80($s0)
    ctx->pc = 0x215c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215c70: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x215c70u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x215c74: 0x46146301  sub.s       $f12, $f12, $f20
    ctx->pc = 0x215c74u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    // 0x215c78: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x215C78u;
    SET_GPR_U32(ctx, 31, 0x215C80u);
    ctx->pc = 0x215C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C78u;
    // 0x215c7c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x215C78u, 0x215C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C80u;
label_215c80:
    // 0x215c80: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x215c80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x215c84: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x215c84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x215c88: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x215c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x215c8c: 0xc6602b8c  lwc1        $f0, 0x2B8C($s3)
    ctx->pc = 0x215c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215c90: 0xc6412b88  lwc1        $f1, 0x2B88($s2)
    ctx->pc = 0x215c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215c94: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x215c94u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x215c98: 0x46146300  add.s       $f12, $f12, $f20
    ctx->pc = 0x215c98u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    // 0x215c9c: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x215C9Cu;
    SET_GPR_U32(ctx, 31, 0x215CA4u);
    ctx->pc = 0x215CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C9Cu;
    // 0x215ca0: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x215C9Cu, 0x215CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215CA4u;
label_215ca4:
    // 0x215ca4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x215ca4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x215ca8: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x215ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x215cac: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x215cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x215cb0: 0xc6202b84  lwc1        $f0, 0x2B84($s1)
    ctx->pc = 0x215cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215cb4: 0xc6012b80  lwc1        $f1, 0x2B80($s0)
    ctx->pc = 0x215cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215cb8: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x215cb8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x215cbc: 0x46146300  add.s       $f12, $f12, $f20
    ctx->pc = 0x215cbcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    // 0x215cc0: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x215CC0u;
    SET_GPR_U32(ctx, 31, 0x215CC8u);
    ctx->pc = 0x215CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215CC0u;
    // 0x215cc4: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x215CC0u, 0x215CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215CC8u;
label_215cc8:
    // 0x215cc8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x215cc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x215ccc: 0xe6e10000  swc1        $f1, 0x0($s7)
    ctx->pc = 0x215cccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x215cd0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x215cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x215cd4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215CD4u;
    {
        const bool branch_taken_0x215cd4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x215CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CD4u;
        // 0x215cd8: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cd4) {
            ctx->pc = 0x215CE4u;
            goto label_215ce4;
        }
    }
    ctx->pc = 0x215CDCu;
    // 0x215cdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x215CDCu;
    {
        const bool branch_taken_0x215cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CDCu;
        // 0x215ce0: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cdc) {
            ctx->pc = 0x215CF0u;
            goto label_215cf0;
        }
    }
    ctx->pc = 0x215CE4u;
label_215ce4:
    // 0x215ce4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x215ce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x215ce8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x215CE8u;
    {
        const bool branch_taken_0x215ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215ce8) {
            ctx->pc = 0x215CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215CE8u;
            // 0x215cec: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215CF0u;
            goto label_215cf0;
        }
    }
    ctx->pc = 0x215CF0u;
label_215cf0:
    // 0x215cf0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x215cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x215cf4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215CF4u;
    {
        const bool branch_taken_0x215cf4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x215CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CF4u;
        // 0x215cf8: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cf4) {
            ctx->pc = 0x215D04u;
            goto label_215d04;
        }
    }
    ctx->pc = 0x215CFCu;
    // 0x215cfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x215CFCu;
    {
        const bool branch_taken_0x215cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CFCu;
        // 0x215d00: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cfc) {
            ctx->pc = 0x215D10u;
            goto label_215d10;
        }
    }
    ctx->pc = 0x215D04u;
label_215d04:
    // 0x215d04: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x215d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x215d08: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x215D08u;
    {
        const bool branch_taken_0x215d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215d08) {
            ctx->pc = 0x215D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215D08u;
            // 0x215d0c: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215D10u;
            goto label_215d10;
        }
    }
    ctx->pc = 0x215D10u;
label_215d10:
    // 0x215d10: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x215d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x215d14: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215D14u;
    {
        const bool branch_taken_0x215d14 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x215D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D14u;
        // 0x215d18: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d14) {
            ctx->pc = 0x215D24u;
            goto label_215d24;
        }
    }
    ctx->pc = 0x215D1Cu;
    // 0x215d1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x215D1Cu;
    {
        const bool branch_taken_0x215d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D1Cu;
        // 0x215d20: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d1c) {
            ctx->pc = 0x215D30u;
            goto label_215d30;
        }
    }
    ctx->pc = 0x215D24u;
label_215d24:
    // 0x215d24: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x215d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x215d28: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x215D28u;
    {
        const bool branch_taken_0x215d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215d28) {
            ctx->pc = 0x215D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215D28u;
            // 0x215d2c: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215D30u;
            goto label_215d30;
        }
    }
    ctx->pc = 0x215D30u;
label_215d30:
    // 0x215d30: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x215d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x215d34: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215D34u;
    {
        const bool branch_taken_0x215d34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x215D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D34u;
        // 0x215d38: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d34) {
            ctx->pc = 0x215D44u;
            goto label_215d44;
        }
    }
    ctx->pc = 0x215D3Cu;
    // 0x215d3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x215D3Cu;
    {
        const bool branch_taken_0x215d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D3Cu;
        // 0x215d40: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d3c) {
            ctx->pc = 0x215D50u;
            goto label_215d50;
        }
    }
    ctx->pc = 0x215D44u;
label_215d44:
    // 0x215d44: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x215d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x215d48: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x215D48u;
    {
        const bool branch_taken_0x215d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215d48) {
            ctx->pc = 0x215D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215D48u;
            // 0x215d4c: 0xaee30000  sw          $v1, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215D50u;
            goto label_215d50;
        }
    }
    ctx->pc = 0x215D50u;
label_215d50:
    // 0x215d50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x215d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215d54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x215d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215d58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x215d58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215d5c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x215d5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215d60: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x215d60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215d64: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x215d64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x215d68: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x215d68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215d6c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x215d6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x215d70: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x215d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x215d74: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x215d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x215d78: 0x3e00008  jr          $ra
    ctx->pc = 0x215D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D78u;
        // 0x215d7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215D80u;
}
