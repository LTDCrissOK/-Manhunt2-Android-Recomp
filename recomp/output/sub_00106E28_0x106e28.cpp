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

// Function: sub_00106E28
// Address: 0x106e28 - 0x106ef0
void sub_00106E28_0x106e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106E28_0x106e28");
#endif

    switch (ctx->pc) {
        case 0x106e68u: goto label_106e68;
        case 0x106e90u: goto label_106e90;
        default: break;
    }

    ctx->pc = 0x106e28u;

    // 0x106e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106e2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x106e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x106e30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106e34: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x106e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x106e38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x106e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x106e3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x106e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x106e44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x106e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e48: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x106e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x106e4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x106e4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e50: 0xc4412b04  lwc1        $f1, 0x2B04($v0)
    ctx->pc = 0x106e50u;
    { uint32_t bits = FAST_READ32(0x482B04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106e54: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x106e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x106e58: 0xc4602b08  lwc1        $f0, 0x2B08($v1)
    ctx->pc = 0x106e58u;
    { uint32_t bits = FAST_READ32(0x482B08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106e5c: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x106e5cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x106e60: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x106E60u;
    SET_GPR_U32(ctx, 31, 0x106E68u);
    ctx->pc = 0x106E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E60u;
    // 0x106e64: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x106E60u, 0x106E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E68u;
label_106e68:
    // 0x106e68: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x106e68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x106e6c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x106e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x106e70: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x106e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x106e74: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x106e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x106e78: 0xc4402b10  lwc1        $f0, 0x2B10($v0)
    ctx->pc = 0x106e78u;
    { uint32_t bits = FAST_READ32(0x482B10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106e7c: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x106e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x106e80: 0xc4612b0c  lwc1        $f1, 0x2B0C($v1)
    ctx->pc = 0x106e80u;
    { uint32_t bits = FAST_READ32(0x482B0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106e84: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x106e84u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x106e88: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x106E88u;
    SET_GPR_U32(ctx, 31, 0x106E90u);
    ctx->pc = 0x106E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E88u;
    // 0x106e8c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x106E88u, 0x106E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E90u;
label_106e90:
    // 0x106e90: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x106e90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x106e94: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x106e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x106e98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x106e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106e9c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106E9Cu;
    {
        const bool branch_taken_0x106e9c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x106EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E9Cu;
        // 0x106ea0: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e9c) {
            ctx->pc = 0x106EACu;
            goto label_106eac;
        }
    }
    ctx->pc = 0x106EA4u;
    // 0x106ea4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x106EA4u;
    {
        const bool branch_taken_0x106ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EA4u;
        // 0x106ea8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ea4) {
            ctx->pc = 0x106EB8u;
            goto label_106eb8;
        }
    }
    ctx->pc = 0x106EACu;
label_106eac:
    // 0x106eac: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x106eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x106eb0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x106EB0u;
    {
        const bool branch_taken_0x106eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106eb0) {
            ctx->pc = 0x106EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106EB0u;
            // 0x106eb4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106EB8u;
            goto label_106eb8;
        }
    }
    ctx->pc = 0x106EB8u;
label_106eb8:
    // 0x106eb8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x106eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106ebc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106EBCu;
    {
        const bool branch_taken_0x106ebc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x106EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EBCu;
        // 0x106ec0: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ebc) {
            ctx->pc = 0x106ECCu;
            goto label_106ecc;
        }
    }
    ctx->pc = 0x106EC4u;
    // 0x106ec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x106EC4u;
    {
        const bool branch_taken_0x106ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EC4u;
        // 0x106ec8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ec4) {
            ctx->pc = 0x106ED8u;
            goto label_106ed8;
        }
    }
    ctx->pc = 0x106ECCu;
label_106ecc:
    // 0x106ecc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x106eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x106ed0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x106ED0u;
    {
        const bool branch_taken_0x106ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106ed0) {
            ctx->pc = 0x106ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106ED0u;
            // 0x106ed4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106ED8u;
            goto label_106ed8;
        }
    }
    ctx->pc = 0x106ED8u;
label_106ed8:
    // 0x106ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106ee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x106ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106ee4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x106ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x106ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x106EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EE8u;
        // 0x106eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106EF0u;
}
