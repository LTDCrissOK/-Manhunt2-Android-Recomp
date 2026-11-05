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

// Function: sub_002C5B38
// Address: 0x2c5b38 - 0x2c5c70
void sub_002C5B38_0x2c5b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5B38_0x2c5b38");
#endif

    ctx->pc = 0x2c5b38u;

    // 0x2c5b38: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2c5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2c5b3c: 0x3c090047  lui         $t1, 0x47
    ctx->pc = 0x2c5b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)71 << 16));
    // 0x2c5b40: 0x252908d8  addiu       $t1, $t1, 0x8D8
    ctx->pc = 0x2c5b40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2264));
    // 0x2c5b44: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c5b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c5b48: 0x246308b8  addiu       $v1, $v1, 0x8B8
    ctx->pc = 0x2c5b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2232));
    // 0x2c5b4c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2c5b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2c5b50: 0x497021  addu        $t6, $v0, $t1
    ctx->pc = 0x2c5b50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2c5b54: 0x436821  addu        $t5, $v0, $v1
    ctx->pc = 0x2c5b54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5b58: 0x24e708c8  addiu       $a3, $a3, 0x8C8
    ctx->pc = 0x2c5b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2248));
    // 0x2c5b5c: 0x55880  sll         $t3, $a1, 2
    ctx->pc = 0x2c5b5cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c5b60: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2c5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2c5b64: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x2c5b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2c5b68: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x2c5b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2c5b6c: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x2c5b6cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c5b70: 0x1695821  addu        $t3, $t3, $t1
    ctx->pc = 0x2c5b70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2c5b74: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2c5b74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c5b78: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x2c5b78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2c5b7c: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x2c5b7cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x2c5b80: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2c5b80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5b84: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2c5b84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2c5b88: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x2c5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2c5b8c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x2c5b8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2c5b90: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x2c5b90u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2c5b94: 0x8d6d0000  lw          $t5, 0x0($t3)
    ctx->pc = 0x2c5b94u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2c5b98: 0x1487021  addu        $t6, $t2, $t0
    ctx->pc = 0x2c5b98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2c5b9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c5ba0: 0x1283821  addu        $a3, $t1, $t0
    ctx->pc = 0x2c5ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2c5ba4: 0x12c5821  addu        $t3, $t1, $t4
    ctx->pc = 0x2c5ba4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x2c5ba8: 0x14c1821  addu        $v1, $t2, $t4
    ctx->pc = 0x2c5ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x2c5bac: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x2c5bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2c5bb0: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x2c5bb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x2c5bb4: 0x8e7021  addu        $t6, $a0, $t6
    ctx->pc = 0x2c5bb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x2c5bb8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2c5bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c5bbc: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x2c5bbcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x2c5bc0: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x2c5bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2c5bc4: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x2c5bc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2c5bc8: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x2c5bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5bcc: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x2c5bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2c5bd0: 0xc5c90000  lwc1        $f9, 0x0($t6)
    ctx->pc = 0x2c5bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c5bd4: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x2c5bd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x2c5bd8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2c5bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5bdc: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x2c5bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2c5be0: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x2c5be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5be4: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x2c5be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x2c5be8: 0xc4e50000  lwc1        $f5, 0x0($a3)
    ctx->pc = 0x2c5be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c5bec: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x2c5becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2c5bf0: 0x46091982  mul.s       $f6, $f3, $f9
    ctx->pc = 0x2c5bf0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x2c5bf4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c5bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c5bf8: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x2c5bf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2c5bfc: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x2c5bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c5c00: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2c5c00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c5c04: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x2c5c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x2c5c08: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2c5c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2c5c0c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2c5c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5c10: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2c5c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c5c14: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2c5c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2c5c18: 0xc5470000  lwc1        $f7, 0x0($t2)
    ctx->pc = 0x2c5c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c5c1c: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x2c5c1cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2c5c20: 0xc5280000  lwc1        $f8, 0x0($t1)
    ctx->pc = 0x2c5c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c5c24: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x2c5c24u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x2c5c28: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2c5c28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2c5c2c: 0x52fc0  sll         $a1, $a1, 31
    ctx->pc = 0x2c5c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 31));
    // 0x2c5c30: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2c5c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2c5c34: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2c5c34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2c5c38: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x2c5c38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x2c5c3c: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x2c5c3cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x2c5c40: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2c5c40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2c5c44: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2c5c44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2c5c48: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x2c5c48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x2c5c4c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2c5c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2c5c50: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c5c50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c5c54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c5c54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c5c58: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c5c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c5c5c: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x2c5c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x2c5c60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c5c60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5c64: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5C6Cu;
    // 0x2c5c6c: 0x0  nop
    ctx->pc = 0x2c5c6cu;
    // NOP
    ctx->pc = 0x2c5c70u;
}
