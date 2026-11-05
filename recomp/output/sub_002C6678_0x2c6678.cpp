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

// Function: sub_002C6678
// Address: 0x2c6678 - 0x2c6788
void sub_002C6678_0x2c6678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6678_0x2c6678");
#endif

    ctx->pc = 0x2c6678u;

    // 0x2c6678: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2c6678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c667c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2c667cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6680: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2c6680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6684: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2c6684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6688: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2c6688u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c668c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c668cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6690: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2c6690u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c6694: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x2c6694u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c6698: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2c6698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c669c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2c669cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c66a0: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x2c66a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c66a4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2c66a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c66a8: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2c66a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2c66ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c66acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c66b0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2c66b0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2c66b4: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x2c66b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2c66b8: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2c66b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c66bc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2c66bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c66c0: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x2c66c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c66c4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2c66c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c66c8: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2c66c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2c66cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c66ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c66d0: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2c66d0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2c66d4: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x2c66d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c66d8: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x2c66d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c66dc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2c66dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c66e0: 0xc4c6000c  lwc1        $f6, 0xC($a2)
    ctx->pc = 0x2c66e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c66e4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2c66e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c66e8: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2c66e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2c66ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c66ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c66f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c66f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c66f4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2c66f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2c66f8: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x2c66f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c66fc: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x2c66fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6700: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x2c6700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6704: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2c6704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6708: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2c6708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c670c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2c670cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2c6710: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c6710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c6714: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c6714u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6718: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2c6718u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2c671c: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x2c671cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2c6720: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x2c6720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6724: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x2c6724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6728: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2c6728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c672c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2c672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6730: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2c6730u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2c6734: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c6734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c6738: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c6738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c673c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2c673cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2c6740: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x2c6740u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c6744: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2c6744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6748: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x2c6748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c674c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2c674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6750: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x2c6750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c6754: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6758: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2c6758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c675c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x2c675cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2c6760: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x2c6760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6764: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2c6764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6768: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2c6768u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2c676c: 0xc4c4000c  lwc1        $f4, 0xC($a2)
    ctx->pc = 0x2c676cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6770: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2c6770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2c6774: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2c6774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2c6778: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c6778u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c677c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c677cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6780: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6780u;
        // 0x2c6784: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6788u;
}
