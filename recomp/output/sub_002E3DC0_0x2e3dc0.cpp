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

// Function: sub_002E3DC0
// Address: 0x2e3dc0 - 0x2e3ea0
void sub_002E3DC0_0x2e3dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3DC0_0x2e3dc0");
#endif

    ctx->pc = 0x2e3dc0u;

    // 0x2e3dc0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2e3dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e3dc4: 0x3c0a0040  lui         $t2, 0x40
    ctx->pc = 0x2e3dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
    // 0x2e3dc8: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x2e3dc8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2e3dcc: 0x8d42b748  lw          $v0, -0x48B8($t2)
    ctx->pc = 0x2e3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294948680)));
    // 0x2e3dd0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2e3dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2e3dd4: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2e3dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2e3dd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e3ddc: 0x24e7b6a8  addiu       $a3, $a3, -0x4958
    ctx->pc = 0x2e3ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948520));
    // 0x2e3de0: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2e3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2e3de4: 0xad42b748  sw          $v0, -0x48B8($t2)
    ctx->pc = 0x2e3de4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294948680), GPR_U32(ctx, 2));
    // 0x2e3de8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2e3de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2e3dec: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E3DECu;
    {
        const bool branch_taken_0x2e3dec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3dec) {
            ctx->pc = 0x2E3DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3DECu;
            // 0x2e3df0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3DF4u;
            goto label_2e3df4;
        }
    }
    ctx->pc = 0x2E3DF4u;
label_2e3df4:
    // 0x2e3df4: 0xad43b748  sw          $v1, -0x48B8($t2)
    ctx->pc = 0x2e3df4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294948680), GPR_U32(ctx, 3));
    // 0x2e3df8: 0x2508b6d0  addiu       $t0, $t0, -0x4930
    ctx->pc = 0x2e3df8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948560));
    // 0x2e3dfc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2e3dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2e3e00: 0x3c097fff  lui         $t1, 0x7FFF
    ctx->pc = 0x2e3e00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32767 << 16));
    // 0x2e3e04: 0x2484b6f8  addiu       $a0, $a0, -0x4908
    ctx->pc = 0x2e3e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948600));
    // 0x2e3e08: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x2e3e08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x2e3e0c: 0x5810  mfhi        $t3
    ctx->pc = 0x2e3e0cu;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x2e3e10: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x2e3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2e3e14: 0x632818  mult        $a1, $v1, $v1
    ctx->pc = 0x2e3e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2e3e18: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2e3e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2e3e1c: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x2e3e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2e3e20: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2e3e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e3e24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e3e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e3e28: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x2e3e28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e3e2c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x2e3e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2e3e30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e3e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3e34: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2e3e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2e3e38: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2e3e38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e3e3c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2e3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e3e40: 0x491824  and         $v1, $v0, $t1
    ctx->pc = 0x2e3e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2e3e44: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E3E44u;
    {
        const bool branch_taken_0x2e3e44 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2E3E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E44u;
        // 0x2e3e48: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e44) {
            ctx->pc = 0x2E3E60u;
            goto label_2e3e60;
        }
    }
    ctx->pc = 0x2E3E4Cu;
    // 0x2e3e4c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2e3e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e3e50: 0x0  nop
    ctx->pc = 0x2e3e50u;
    // NOP
    // 0x2e3e54: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e3e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e3e58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3E58u;
    {
        const bool branch_taken_0x2e3e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E58u;
        // 0x2e3e5c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e58) {
            ctx->pc = 0x2E3E7Cu;
            goto label_2e3e7c;
        }
    }
    ctx->pc = 0x2E3E60u;
label_2e3e60:
    // 0x2e3e60: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2e3e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2e3e64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e3e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e3e68: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e3e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e3e6c: 0x0  nop
    ctx->pc = 0x2e3e6cu;
    // NOP
    // 0x2e3e70: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e3e70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e3e74: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2e3e74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2e3e78: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e3e7c:
    // 0x2e3e7c: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x2e3e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2e3e80: 0x2442b720  addiu       $v0, $v0, -0x48E0
    ctx->pc = 0x2e3e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948640));
    // 0x2e3e84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e3e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3e88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e3e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3e8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e3e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e3e90: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2e3e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3e94: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2e3e94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2e3e98: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E98u;
        // 0x2e3e9c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3EA0u;
}
