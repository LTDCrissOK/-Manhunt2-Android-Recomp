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

// Function: sub_001BA868
// Address: 0x1ba868 - 0x1bab78
void sub_001BA868_0x1ba868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA868_0x1ba868");
#endif

    switch (ctx->pc) {
        case 0x1ba868u: goto label_1ba868;
        case 0x1ba86cu: goto label_1ba86c;
        case 0x1ba870u: goto label_1ba870;
        case 0x1ba874u: goto label_1ba874;
        case 0x1ba878u: goto label_1ba878;
        case 0x1ba87cu: goto label_1ba87c;
        case 0x1ba880u: goto label_1ba880;
        case 0x1ba884u: goto label_1ba884;
        case 0x1ba888u: goto label_1ba888;
        case 0x1ba88cu: goto label_1ba88c;
        case 0x1ba890u: goto label_1ba890;
        case 0x1ba894u: goto label_1ba894;
        case 0x1ba898u: goto label_1ba898;
        case 0x1ba89cu: goto label_1ba89c;
        case 0x1ba8a0u: goto label_1ba8a0;
        case 0x1ba8a4u: goto label_1ba8a4;
        case 0x1ba8a8u: goto label_1ba8a8;
        case 0x1ba8acu: goto label_1ba8ac;
        case 0x1ba8b0u: goto label_1ba8b0;
        case 0x1ba8b4u: goto label_1ba8b4;
        case 0x1ba8b8u: goto label_1ba8b8;
        case 0x1ba8bcu: goto label_1ba8bc;
        case 0x1ba8c0u: goto label_1ba8c0;
        case 0x1ba8c4u: goto label_1ba8c4;
        case 0x1ba8c8u: goto label_1ba8c8;
        case 0x1ba8ccu: goto label_1ba8cc;
        case 0x1ba8d0u: goto label_1ba8d0;
        case 0x1ba8d4u: goto label_1ba8d4;
        case 0x1ba8d8u: goto label_1ba8d8;
        case 0x1ba8dcu: goto label_1ba8dc;
        case 0x1ba8e0u: goto label_1ba8e0;
        case 0x1ba8e4u: goto label_1ba8e4;
        case 0x1ba8e8u: goto label_1ba8e8;
        case 0x1ba8ecu: goto label_1ba8ec;
        case 0x1ba8f0u: goto label_1ba8f0;
        case 0x1ba8f4u: goto label_1ba8f4;
        case 0x1ba8f8u: goto label_1ba8f8;
        case 0x1ba8fcu: goto label_1ba8fc;
        case 0x1ba900u: goto label_1ba900;
        case 0x1ba904u: goto label_1ba904;
        case 0x1ba908u: goto label_1ba908;
        case 0x1ba90cu: goto label_1ba90c;
        case 0x1ba910u: goto label_1ba910;
        case 0x1ba914u: goto label_1ba914;
        case 0x1ba918u: goto label_1ba918;
        case 0x1ba91cu: goto label_1ba91c;
        case 0x1ba920u: goto label_1ba920;
        case 0x1ba924u: goto label_1ba924;
        case 0x1ba928u: goto label_1ba928;
        case 0x1ba92cu: goto label_1ba92c;
        case 0x1ba930u: goto label_1ba930;
        case 0x1ba934u: goto label_1ba934;
        case 0x1ba938u: goto label_1ba938;
        case 0x1ba93cu: goto label_1ba93c;
        case 0x1ba940u: goto label_1ba940;
        case 0x1ba944u: goto label_1ba944;
        case 0x1ba948u: goto label_1ba948;
        case 0x1ba94cu: goto label_1ba94c;
        case 0x1ba950u: goto label_1ba950;
        case 0x1ba954u: goto label_1ba954;
        case 0x1ba958u: goto label_1ba958;
        case 0x1ba95cu: goto label_1ba95c;
        case 0x1ba960u: goto label_1ba960;
        case 0x1ba964u: goto label_1ba964;
        case 0x1ba968u: goto label_1ba968;
        case 0x1ba96cu: goto label_1ba96c;
        case 0x1ba970u: goto label_1ba970;
        case 0x1ba974u: goto label_1ba974;
        case 0x1ba978u: goto label_1ba978;
        case 0x1ba97cu: goto label_1ba97c;
        case 0x1ba980u: goto label_1ba980;
        case 0x1ba984u: goto label_1ba984;
        case 0x1ba988u: goto label_1ba988;
        case 0x1ba98cu: goto label_1ba98c;
        case 0x1ba990u: goto label_1ba990;
        case 0x1ba994u: goto label_1ba994;
        case 0x1ba998u: goto label_1ba998;
        case 0x1ba99cu: goto label_1ba99c;
        case 0x1ba9a0u: goto label_1ba9a0;
        case 0x1ba9a4u: goto label_1ba9a4;
        case 0x1ba9a8u: goto label_1ba9a8;
        case 0x1ba9acu: goto label_1ba9ac;
        case 0x1ba9b0u: goto label_1ba9b0;
        case 0x1ba9b4u: goto label_1ba9b4;
        case 0x1ba9b8u: goto label_1ba9b8;
        case 0x1ba9bcu: goto label_1ba9bc;
        case 0x1ba9c0u: goto label_1ba9c0;
        case 0x1ba9c4u: goto label_1ba9c4;
        case 0x1ba9c8u: goto label_1ba9c8;
        case 0x1ba9ccu: goto label_1ba9cc;
        case 0x1ba9d0u: goto label_1ba9d0;
        case 0x1ba9d4u: goto label_1ba9d4;
        case 0x1ba9d8u: goto label_1ba9d8;
        case 0x1ba9dcu: goto label_1ba9dc;
        case 0x1ba9e0u: goto label_1ba9e0;
        case 0x1ba9e4u: goto label_1ba9e4;
        case 0x1ba9e8u: goto label_1ba9e8;
        case 0x1ba9ecu: goto label_1ba9ec;
        case 0x1ba9f0u: goto label_1ba9f0;
        case 0x1ba9f4u: goto label_1ba9f4;
        case 0x1ba9f8u: goto label_1ba9f8;
        case 0x1ba9fcu: goto label_1ba9fc;
        case 0x1baa00u: goto label_1baa00;
        case 0x1baa04u: goto label_1baa04;
        case 0x1baa08u: goto label_1baa08;
        case 0x1baa0cu: goto label_1baa0c;
        case 0x1baa10u: goto label_1baa10;
        case 0x1baa14u: goto label_1baa14;
        case 0x1baa18u: goto label_1baa18;
        case 0x1baa1cu: goto label_1baa1c;
        case 0x1baa20u: goto label_1baa20;
        case 0x1baa24u: goto label_1baa24;
        case 0x1baa28u: goto label_1baa28;
        case 0x1baa2cu: goto label_1baa2c;
        case 0x1baa30u: goto label_1baa30;
        case 0x1baa34u: goto label_1baa34;
        case 0x1baa38u: goto label_1baa38;
        case 0x1baa3cu: goto label_1baa3c;
        case 0x1baa40u: goto label_1baa40;
        case 0x1baa44u: goto label_1baa44;
        case 0x1baa48u: goto label_1baa48;
        case 0x1baa4cu: goto label_1baa4c;
        case 0x1baa50u: goto label_1baa50;
        case 0x1baa54u: goto label_1baa54;
        case 0x1baa58u: goto label_1baa58;
        case 0x1baa5cu: goto label_1baa5c;
        case 0x1baa60u: goto label_1baa60;
        case 0x1baa64u: goto label_1baa64;
        case 0x1baa68u: goto label_1baa68;
        case 0x1baa6cu: goto label_1baa6c;
        case 0x1baa70u: goto label_1baa70;
        case 0x1baa74u: goto label_1baa74;
        case 0x1baa78u: goto label_1baa78;
        case 0x1baa7cu: goto label_1baa7c;
        case 0x1baa80u: goto label_1baa80;
        case 0x1baa84u: goto label_1baa84;
        case 0x1baa88u: goto label_1baa88;
        case 0x1baa8cu: goto label_1baa8c;
        case 0x1baa90u: goto label_1baa90;
        case 0x1baa94u: goto label_1baa94;
        case 0x1baa98u: goto label_1baa98;
        case 0x1baa9cu: goto label_1baa9c;
        case 0x1baaa0u: goto label_1baaa0;
        case 0x1baaa4u: goto label_1baaa4;
        case 0x1baaa8u: goto label_1baaa8;
        case 0x1baaacu: goto label_1baaac;
        case 0x1baab0u: goto label_1baab0;
        case 0x1baab4u: goto label_1baab4;
        case 0x1baab8u: goto label_1baab8;
        case 0x1baabcu: goto label_1baabc;
        case 0x1baac0u: goto label_1baac0;
        case 0x1baac4u: goto label_1baac4;
        case 0x1baac8u: goto label_1baac8;
        case 0x1baaccu: goto label_1baacc;
        case 0x1baad0u: goto label_1baad0;
        case 0x1baad4u: goto label_1baad4;
        case 0x1baad8u: goto label_1baad8;
        case 0x1baadcu: goto label_1baadc;
        case 0x1baae0u: goto label_1baae0;
        case 0x1baae4u: goto label_1baae4;
        case 0x1baae8u: goto label_1baae8;
        case 0x1baaecu: goto label_1baaec;
        case 0x1baaf0u: goto label_1baaf0;
        case 0x1baaf4u: goto label_1baaf4;
        case 0x1baaf8u: goto label_1baaf8;
        case 0x1baafcu: goto label_1baafc;
        case 0x1bab00u: goto label_1bab00;
        case 0x1bab04u: goto label_1bab04;
        case 0x1bab08u: goto label_1bab08;
        case 0x1bab0cu: goto label_1bab0c;
        case 0x1bab10u: goto label_1bab10;
        case 0x1bab14u: goto label_1bab14;
        case 0x1bab18u: goto label_1bab18;
        case 0x1bab1cu: goto label_1bab1c;
        case 0x1bab20u: goto label_1bab20;
        case 0x1bab24u: goto label_1bab24;
        case 0x1bab28u: goto label_1bab28;
        case 0x1bab2cu: goto label_1bab2c;
        case 0x1bab30u: goto label_1bab30;
        case 0x1bab34u: goto label_1bab34;
        case 0x1bab38u: goto label_1bab38;
        case 0x1bab3cu: goto label_1bab3c;
        case 0x1bab40u: goto label_1bab40;
        case 0x1bab44u: goto label_1bab44;
        case 0x1bab48u: goto label_1bab48;
        case 0x1bab4cu: goto label_1bab4c;
        case 0x1bab50u: goto label_1bab50;
        case 0x1bab54u: goto label_1bab54;
        case 0x1bab58u: goto label_1bab58;
        case 0x1bab5cu: goto label_1bab5c;
        case 0x1bab60u: goto label_1bab60;
        case 0x1bab64u: goto label_1bab64;
        case 0x1bab68u: goto label_1bab68;
        case 0x1bab6cu: goto label_1bab6c;
        case 0x1bab70u: goto label_1bab70;
        case 0x1bab74u: goto label_1bab74;
        default: break;
    }

    ctx->pc = 0x1ba868u;

label_1ba868:
    // 0x1ba868: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ba868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1ba86c:
    // 0x1ba86c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ba86cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba870:
    // 0x1ba870: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1ba870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1ba874:
    // 0x1ba874: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1ba874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_1ba878:
    // 0x1ba878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ba87c:
    // 0x1ba87c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1ba87cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ba880:
    // 0x1ba880: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ba880u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ba884:
    // 0x1ba884: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1ba884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_1ba888:
    // 0x1ba888: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1ba888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_1ba88c:
    // 0x1ba88c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1ba88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1ba890:
    // 0x1ba890: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1ba890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1ba894:
    // 0x1ba894: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ba894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ba898:
    // 0x1ba898: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1ba898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba89c:
    // 0x1ba89c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1ba89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1ba8a0:
    // 0x1ba8a0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1ba8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1ba8a4:
    // 0x1ba8a4: 0x8c510fe8  lw          $s1, 0xFE8($v0)
    ctx->pc = 0x1ba8a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
label_1ba8a8:
    // 0x1ba8a8: 0xc6200240  lwc1        $f0, 0x240($s1)
    ctx->pc = 0x1ba8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba8ac:
    // 0x1ba8ac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ba8acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba8b0:
    // 0x1ba8b0: 0x0  nop
    ctx->pc = 0x1ba8b0u;
    // NOP
label_1ba8b4:
    // 0x1ba8b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1ba8b8:
    if (ctx->pc == 0x1BA8B8u) {
        ctx->pc = 0x1BA8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8B4u;
        // 0x1ba8b8: 0x8c520ffc  lw          $s2, 0xFFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA8BCu;
        goto label_1ba8bc;
    }
    ctx->pc = 0x1BA8B4u;
    {
        const bool branch_taken_0x1ba8b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8B4u;
        // 0x1ba8b8: 0x8c520ffc  lw          $s2, 0xFFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8b4) {
            ctx->pc = 0x1BA8C0u;
            goto label_1ba8c0;
        }
    }
    ctx->pc = 0x1BA8BCu;
label_1ba8bc:
    // 0x1ba8bc: 0x26230220  addiu       $v1, $s1, 0x220
    ctx->pc = 0x1ba8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_1ba8c0:
    // 0x1ba8c0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1ba8c4:
    if (ctx->pc == 0x1BA8C4u) {
        ctx->pc = 0x1BA8C8u;
        goto label_1ba8c8;
    }
    ctx->pc = 0x1BA8C0u;
    {
        const bool branch_taken_0x1ba8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba8c0) {
            ctx->pc = 0x1BA8DCu;
            goto label_1ba8dc;
        }
    }
    ctx->pc = 0x1BA8C8u;
label_1ba8c8:
    // 0x1ba8c8: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x1ba8c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1ba8cc:
    // 0x1ba8cc: 0xe61400a0  swc1        $f20, 0xA0($s0)
    ctx->pc = 0x1ba8ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_1ba8d0:
    // 0x1ba8d0: 0xe61400a4  swc1        $f20, 0xA4($s0)
    ctx->pc = 0x1ba8d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
label_1ba8d4:
    // 0x1ba8d4: 0x1000009f  b           . + 4 + (0x9F << 2)
label_1ba8d8:
    if (ctx->pc == 0x1BA8D8u) {
        ctx->pc = 0x1BA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8D4u;
        // 0x1ba8d8: 0xe614002c  swc1        $f20, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA8DCu;
        goto label_1ba8dc;
    }
    ctx->pc = 0x1BA8D4u;
    {
        const bool branch_taken_0x1ba8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8D4u;
        // 0x1ba8d8: 0xe614002c  swc1        $f20, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8d4) {
            ctx->pc = 0x1BAB54u;
            goto label_1bab54;
        }
    }
    ctx->pc = 0x1BA8DCu;
label_1ba8dc:
    // 0x1ba8dc: 0xc0f6a96  jal         func_3DAA58
label_1ba8e0:
    if (ctx->pc == 0x1BA8E0u) {
        ctx->pc = 0x1BA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8DCu;
        // 0x1ba8e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA8E4u;
        goto label_1ba8e4;
    }
    ctx->pc = 0x1BA8DCu;
    SET_GPR_U32(ctx, 31, 0x1BA8E4u);
    ctx->pc = 0x1BA8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA8DCu;
    // 0x1ba8e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BA8DCu, 0x1BA8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA8E4u;
label_1ba8e4:
    // 0x1ba8e4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1ba8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1ba8e8:
    // 0x1ba8e8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1ba8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ba8ec:
    // 0x1ba8ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ba8ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba8f0:
    // 0x1ba8f0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1ba8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1ba8f4:
    // 0x1ba8f4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1ba8f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ba8f8:
    // 0x1ba8f8: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1ba8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_1ba8fc:
    // 0x1ba8fc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ba8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1ba900:
    // 0x1ba900: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ba900u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ba904:
    // 0x1ba904: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1ba904u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ba908:
    // 0x1ba908: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1ba908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1ba90c:
    // 0x1ba90c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1ba90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1ba910:
    // 0x1ba910: 0x8c430fe8  lw          $v1, 0xFE8($v0)
    ctx->pc = 0x1ba910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
label_1ba914:
    // 0x1ba914: 0x8c64029c  lw          $a0, 0x29C($v1)
    ctx->pc = 0x1ba914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 668)));
label_1ba918:
    // 0x1ba918: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1ba91c:
    if (ctx->pc == 0x1BA91Cu) {
        ctx->pc = 0x1BA91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA918u;
        // 0x1ba91c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA920u;
        goto label_1ba920;
    }
    ctx->pc = 0x1BA918u;
    {
        const bool branch_taken_0x1ba918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA918u;
        // 0x1ba91c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba918) {
            ctx->pc = 0x1BA930u;
            goto label_1ba930;
        }
    }
    ctx->pc = 0x1BA920u;
label_1ba920:
    // 0x1ba920: 0xc06fb58  jal         func_1BED60
label_1ba924:
    if (ctx->pc == 0x1BA924u) {
        ctx->pc = 0x1BA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA920u;
        // 0x1ba924: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA928u;
        goto label_1ba928;
    }
    ctx->pc = 0x1BA920u;
    SET_GPR_U32(ctx, 31, 0x1BA928u);
    ctx->pc = 0x1BA924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA920u;
    // 0x1ba924: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1BA920u, 0x1BA928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA928u;
label_1ba928:
    // 0x1ba928: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ba92c:
    if (ctx->pc == 0x1BA92Cu) {
        ctx->pc = 0x1BA92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA928u;
        // 0x1ba92c: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA930u;
        goto label_1ba930;
    }
    ctx->pc = 0x1BA928u;
    {
        const bool branch_taken_0x1ba928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA928u;
        // 0x1ba92c: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba928) {
            ctx->pc = 0x1BA93Cu;
            goto label_1ba93c;
        }
    }
    ctx->pc = 0x1BA930u;
label_1ba930:
    // 0x1ba930: 0xc06fb58  jal         func_1BED60
label_1ba934:
    if (ctx->pc == 0x1BA934u) {
        ctx->pc = 0x1BA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA930u;
        // 0x1ba934: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA938u;
        goto label_1ba938;
    }
    ctx->pc = 0x1BA930u;
    SET_GPR_U32(ctx, 31, 0x1BA938u);
    ctx->pc = 0x1BA934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA930u;
    // 0x1ba934: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1BA930u, 0x1BA938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA938u;
label_1ba938:
    // 0x1ba938: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1ba938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1ba93c:
    // 0x1ba93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ba940:
    // 0x1ba940: 0x262501e0  addiu       $a1, $s1, 0x1E0
    ctx->pc = 0x1ba940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_1ba944:
    // 0x1ba944: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1ba944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1ba948:
    // 0x1ba948: 0x40f809  jalr        $v0
label_1ba94c:
    if (ctx->pc == 0x1BA94Cu) {
        ctx->pc = 0x1BA94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA948u;
        // 0x1ba94c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA950u;
        goto label_1ba950;
    }
    ctx->pc = 0x1BA948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA950u);
        ctx->pc = 0x1BA94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA948u;
        // 0x1ba94c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA948u, 0x1BA950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA950u;
label_1ba950:
    // 0x1ba950: 0x26230210  addiu       $v1, $s1, 0x210
    ctx->pc = 0x1ba950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
label_1ba954:
    // 0x1ba954: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ba954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba958:
    // 0x1ba958: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x1ba958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba95c:
    // 0x1ba95c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1ba95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ba960:
    // 0x1ba960: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba964:
    // 0x1ba964: 0x0  nop
    ctx->pc = 0x1ba964u;
    // NOP
label_1ba968:
    // 0x1ba968: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1ba96c:
    if (ctx->pc == 0x1BA96Cu) {
        ctx->pc = 0x1BA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA968u;
        // 0x1ba96c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA970u;
        goto label_1ba970;
    }
    ctx->pc = 0x1BA968u;
    {
        const bool branch_taken_0x1ba968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA968u;
        // 0x1ba96c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba968) {
            ctx->pc = 0x1BA974u;
            goto label_1ba974;
        }
    }
    ctx->pc = 0x1BA970u;
label_1ba970:
    // 0x1ba970: 0x26270220  addiu       $a3, $s1, 0x220
    ctx->pc = 0x1ba970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_1ba974:
    // 0x1ba974: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1ba974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1ba978:
    // 0x1ba978: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x1ba978u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
label_1ba97c:
    // 0x1ba97c: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x1ba97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
label_1ba980:
    // 0x1ba980: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x1ba980u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
label_1ba984:
    // 0x1ba984: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ba984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1ba988:
    // 0x1ba988: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ba988u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1ba98c:
    // 0x1ba98c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1ba990:
    if (ctx->pc == 0x1BA990u) {
        ctx->pc = 0x1BA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA98Cu;
        // 0x1ba990: 0x24621030  addiu       $v0, $v1, 0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA994u;
        goto label_1ba994;
    }
    ctx->pc = 0x1BA98Cu;
    {
        const bool branch_taken_0x1ba98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA98Cu;
        // 0x1ba990: 0x24621030  addiu       $v0, $v1, 0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba98c) {
            ctx->pc = 0x1BA9FCu;
            goto label_1ba9fc;
        }
    }
    ctx->pc = 0x1BA994u;
label_1ba994:
    // 0x1ba994: 0xc4601030  lwc1        $f0, 0x1030($v1)
    ctx->pc = 0x1ba994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba998:
    // 0x1ba998: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1ba998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_1ba99c:
    // 0x1ba99c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1ba99cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_1ba9a0:
    // 0x1ba9a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba9a4:
    // 0x1ba9a4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1ba9a4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1ba9a8:
    // 0x1ba9a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ba9a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba9ac:
    // 0x1ba9ac: 0x0  nop
    ctx->pc = 0x1ba9acu;
    // NOP
label_1ba9b0:
    // 0x1ba9b0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1ba9b4:
    if (ctx->pc == 0x1BA9B4u) {
        ctx->pc = 0x1BA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9B0u;
        // 0x1ba9b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9B8u;
        goto label_1ba9b8;
    }
    ctx->pc = 0x1BA9B0u;
    {
        const bool branch_taken_0x1ba9b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9B0u;
        // 0x1ba9b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9b0) {
            ctx->pc = 0x1BA9E8u;
            goto label_1ba9e8;
        }
    }
    ctx->pc = 0x1BA9B8u;
label_1ba9b8:
    // 0x1ba9b8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ba9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba9bc:
    // 0x1ba9bc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1ba9bcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1ba9c0:
    // 0x1ba9c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ba9c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba9c4:
    // 0x1ba9c4: 0x0  nop
    ctx->pc = 0x1ba9c4u;
    // NOP
label_1ba9c8:
    // 0x1ba9c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ba9cc:
    if (ctx->pc == 0x1BA9CCu) {
        ctx->pc = 0x1BA9D0u;
        goto label_1ba9d0;
    }
    ctx->pc = 0x1BA9C8u;
    {
        const bool branch_taken_0x1ba9c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba9c8) {
            ctx->pc = 0x1BA9E8u;
            goto label_1ba9e8;
        }
    }
    ctx->pc = 0x1BA9D0u;
label_1ba9d0:
    // 0x1ba9d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ba9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba9d4:
    // 0x1ba9d4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1ba9d4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1ba9d8:
    // 0x1ba9d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ba9d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba9dc:
    // 0x1ba9dc: 0x0  nop
    ctx->pc = 0x1ba9dcu;
    // NOP
label_1ba9e0:
    // 0x1ba9e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1ba9e4:
    if (ctx->pc == 0x1BA9E4u) {
        ctx->pc = 0x1BA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9E0u;
        // 0x1ba9e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9E8u;
        goto label_1ba9e8;
    }
    ctx->pc = 0x1BA9E0u;
    {
        const bool branch_taken_0x1ba9e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba9e0) {
            ctx->pc = 0x1BA9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA9E0u;
            // 0x1ba9e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA9E8u;
            goto label_1ba9e8;
        }
    }
    ctx->pc = 0x1BA9E8u;
label_1ba9e8:
    // 0x1ba9e8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_1ba9ec:
    if (ctx->pc == 0x1BA9ECu) {
        ctx->pc = 0x1BA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9E8u;
        // 0x1ba9ec: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9F0u;
        goto label_1ba9f0;
    }
    ctx->pc = 0x1BA9E8u;
    {
        const bool branch_taken_0x1ba9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba9e8) {
            ctx->pc = 0x1BA9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA9E8u;
            // 0x1ba9ec: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAA00u;
            goto label_1baa00;
        }
    }
    ctx->pc = 0x1BA9F0u;
label_1ba9f0:
    // 0x1ba9f0: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1ba9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1ba9f4:
    // 0x1ba9f4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1ba9f8:
    if (ctx->pc == 0x1BA9F8u) {
        ctx->pc = 0x1BA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9F4u;
        // 0x1ba9f8: 0x24471030  addiu       $a3, $v0, 0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9FCu;
        goto label_1ba9fc;
    }
    ctx->pc = 0x1BA9F4u;
    {
        const bool branch_taken_0x1ba9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9F4u;
        // 0x1ba9f8: 0x24471030  addiu       $a3, $v0, 0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9f4) {
            ctx->pc = 0x1BAA74u;
            goto label_1baa74;
        }
    }
    ctx->pc = 0x1BA9FCu;
label_1ba9fc:
    // 0x1ba9fc: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1ba9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1baa00:
    // 0x1baa00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1baa00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1baa04:
    // 0x1baa04: 0x0  nop
    ctx->pc = 0x1baa04u;
    // NOP
label_1baa08:
    // 0x1baa08: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1baa08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1baa0c:
    // 0x1baa0c: 0x0  nop
    ctx->pc = 0x1baa0cu;
    // NOP
label_1baa10:
    // 0x1baa10: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1baa14:
    if (ctx->pc == 0x1BAA14u) {
        ctx->pc = 0x1BAA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA10u;
        // 0x1baa14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA18u;
        goto label_1baa18;
    }
    ctx->pc = 0x1BAA10u;
    {
        const bool branch_taken_0x1baa10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA10u;
        // 0x1baa14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa10) {
            ctx->pc = 0x1BAA1Cu;
            goto label_1baa1c;
        }
    }
    ctx->pc = 0x1BAA18u;
label_1baa18:
    // 0x1baa18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1baa18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1baa1c:
    // 0x1baa1c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1baa20:
    if (ctx->pc == 0x1BAA20u) {
        ctx->pc = 0x1BAA24u;
        goto label_1baa24;
    }
    ctx->pc = 0x1BAA1Cu;
    {
        const bool branch_taken_0x1baa1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baa1c) {
            ctx->pc = 0x1BAA74u;
            goto label_1baa74;
        }
    }
    ctx->pc = 0x1BAA24u;
label_1baa24:
    // 0x1baa24: 0x8e220344  lw          $v0, 0x344($s1)
    ctx->pc = 0x1baa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 836)));
label_1baa28:
    // 0x1baa28: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1baa2c:
    if (ctx->pc == 0x1BAA2Cu) {
        ctx->pc = 0x1BAA30u;
        goto label_1baa30;
    }
    ctx->pc = 0x1BAA28u;
    {
        const bool branch_taken_0x1baa28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baa28) {
            ctx->pc = 0x1BAA74u;
            goto label_1baa74;
        }
    }
    ctx->pc = 0x1BAA30u;
label_1baa30:
    // 0x1baa30: 0x8e2304b0  lw          $v1, 0x4B0($s1)
    ctx->pc = 0x1baa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1200)));
label_1baa34:
    // 0x1baa34: 0x38620005  xori        $v0, $v1, 0x5
    ctx->pc = 0x1baa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
label_1baa38:
    // 0x1baa38: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1baa3c:
    if (ctx->pc == 0x1BAA3Cu) {
        ctx->pc = 0x1BAA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA38u;
        // 0x1baa3c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA40u;
        goto label_1baa40;
    }
    ctx->pc = 0x1BAA38u;
    {
        const bool branch_taken_0x1baa38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA38u;
        // 0x1baa3c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa38) {
            ctx->pc = 0x1BAA74u;
            goto label_1baa74;
        }
    }
    ctx->pc = 0x1BAA40u;
label_1baa40:
    // 0x1baa40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1baa44:
    if (ctx->pc == 0x1BAA44u) {
        ctx->pc = 0x1BAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA40u;
        // 0x1baa44: 0x38620006  xori        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA48u;
        goto label_1baa48;
    }
    ctx->pc = 0x1BAA40u;
    {
        const bool branch_taken_0x1baa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA40u;
        // 0x1baa44: 0x38620006  xori        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa40) {
            ctx->pc = 0x1BAA74u;
            goto label_1baa74;
        }
    }
    ctx->pc = 0x1BAA48u;
label_1baa48:
    // 0x1baa48: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1baa4c:
    if (ctx->pc == 0x1BAA4Cu) {
        ctx->pc = 0x1BAA50u;
        goto label_1baa50;
    }
    ctx->pc = 0x1BAA48u;
    {
        const bool branch_taken_0x1baa48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baa48) {
            ctx->pc = 0x1BAA74u;
            goto label_1baa74;
        }
    }
    ctx->pc = 0x1BAA50u;
label_1baa50:
    // 0x1baa50: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x1baa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1baa54:
    // 0x1baa54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1baa54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1baa58:
    // 0x1baa58: 0x0  nop
    ctx->pc = 0x1baa58u;
    // NOP
label_1baa5c:
    // 0x1baa5c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1baa60:
    if (ctx->pc == 0x1BAA60u) {
        ctx->pc = 0x1BAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA5Cu;
        // 0x1baa60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA64u;
        goto label_1baa64;
    }
    ctx->pc = 0x1BAA5Cu;
    {
        const bool branch_taken_0x1baa5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA5Cu;
        // 0x1baa60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa5c) {
            ctx->pc = 0x1BAA68u;
            goto label_1baa68;
        }
    }
    ctx->pc = 0x1BAA64u;
label_1baa64:
    // 0x1baa64: 0x26250220  addiu       $a1, $s1, 0x220
    ctx->pc = 0x1baa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_1baa68:
    // 0x1baa68: 0xc0720c8  jal         func_1C8320
label_1baa6c:
    if (ctx->pc == 0x1BAA6Cu) {
        ctx->pc = 0x1BAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA68u;
        // 0x1baa6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA70u;
        goto label_1baa70;
    }
    ctx->pc = 0x1BAA68u;
    SET_GPR_U32(ctx, 31, 0x1BAA70u);
    ctx->pc = 0x1BAA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA68u;
    // 0x1baa6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8320u, 0x1BAA68u, 0x1BAA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA70u;
label_1baa70:
    // 0x1baa70: 0x26470300  addiu       $a3, $s2, 0x300
    ctx->pc = 0x1baa70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
label_1baa74:
    // 0x1baa74: 0x52600023  beql        $s3, $zero, . + 4 + (0x23 << 2)
label_1baa78:
    if (ctx->pc == 0x1BAA78u) {
        ctx->pc = 0x1BAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA74u;
        // 0x1baa78: 0x8e030070  lw          $v1, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA7Cu;
        goto label_1baa7c;
    }
    ctx->pc = 0x1BAA74u;
    {
        const bool branch_taken_0x1baa74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baa74) {
            ctx->pc = 0x1BAA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAA74u;
            // 0x1baa78: 0x8e030070  lw          $v1, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAB04u;
            goto label_1bab04;
        }
    }
    ctx->pc = 0x1BAA7Cu;
label_1baa7c:
    // 0x1baa7c: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1baa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1baa80:
    // 0x1baa80: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x1baa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_1baa84:
    // 0x1baa84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1baa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1baa88:
    // 0x1baa88: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1baa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1baa8c:
    // 0x1baa8c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1baa8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1baa90:
    // 0x1baa90: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1baa90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1baa94:
    // 0x1baa94: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1baa94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1baa98:
    // 0x1baa98: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1baa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_1baa9c:
    // 0x1baa9c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x1baa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1baaa0:
    // 0x1baaa0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1baaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1baaa4:
    // 0x1baaa4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1baaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1baaa8:
    // 0x1baaa8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1baaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1baaac:
    // 0x1baaac: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x1baaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1baab0:
    // 0x1baab0: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1baab0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1baab4:
    // 0x1baab4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1baab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1baab8:
    // 0x1baab8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1baab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1baabc:
    // 0x1baabc: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x1baabcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1baac0:
    // 0x1baac0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1baac0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1baac4:
    // 0x1baac4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1baac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1baac8:
    // 0x1baac8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1baac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1baacc:
    // 0x1baacc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1baaccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1baad0:
    // 0x1baad0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1baad0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1baad4:
    // 0x1baad4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1baad4u;
    // VWAITQ (Q already resolved in this runtime)
label_1baad8:
    // 0x1baad8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1baad8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1baadc:
    // 0x1baadc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1baadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_1baae0:
    // 0x1baae0: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x1baae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_1baae4:
    // 0x1baae4: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1baae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1baae8:
    // 0x1baae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1baae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1baaec:
    // 0x1baaec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1baaecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1baaf0:
    // 0x1baaf0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1baaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1baaf4:
    // 0x1baaf4: 0x40f809  jalr        $v0
label_1baaf8:
    if (ctx->pc == 0x1BAAF8u) {
        ctx->pc = 0x1BAAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAF4u;
        // 0x1baaf8: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAAFCu;
        goto label_1baafc;
    }
    ctx->pc = 0x1BAAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BAAFCu);
        ctx->pc = 0x1BAAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAF4u;
        // 0x1baaf8: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAAF4u, 0x1BAAFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BAAFCu;
label_1baafc:
    // 0x1baafc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1bab00:
    if (ctx->pc == 0x1BAB00u) {
        ctx->pc = 0x1BAB04u;
        goto label_1bab04;
    }
    ctx->pc = 0x1BAAFCu;
    {
        const bool branch_taken_0x1baafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baafc) {
            ctx->pc = 0x1BAB24u;
            goto label_1bab24;
        }
    }
    ctx->pc = 0x1BAB04u;
label_1bab04:
    // 0x1bab04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bab04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bab08:
    // 0x1bab08: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x1bab08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1bab0c:
    // 0x1bab0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bab0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bab10:
    // 0x1bab10: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1bab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_1bab14:
    // 0x1bab14: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1bab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1bab18:
    // 0x1bab18: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bab18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bab1c:
    // 0x1bab1c: 0x60f809  jalr        $v1
label_1bab20:
    if (ctx->pc == 0x1BAB20u) {
        ctx->pc = 0x1BAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB1Cu;
        // 0x1bab20: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB24u;
        goto label_1bab24;
    }
    ctx->pc = 0x1BAB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BAB24u);
        ctx->pc = 0x1BAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB1Cu;
        // 0x1bab20: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAB1Cu, 0x1BAB24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BAB24u;
label_1bab24:
    // 0x1bab24: 0xc06ecd6  jal         func_1BB358
label_1bab28:
    if (ctx->pc == 0x1BAB28u) {
        ctx->pc = 0x1BAB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB24u;
        // 0x1bab28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB2Cu;
        goto label_1bab2c;
    }
    ctx->pc = 0x1BAB24u;
    SET_GPR_U32(ctx, 31, 0x1BAB2Cu);
    ctx->pc = 0x1BAB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB24u;
    // 0x1bab28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB358u, 0x1BAB24u, 0x1BAB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB2Cu;
label_1bab2c:
    // 0x1bab2c: 0xc06ed44  jal         func_1BB510
label_1bab30:
    if (ctx->pc == 0x1BAB30u) {
        ctx->pc = 0x1BAB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB2Cu;
        // 0x1bab30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB34u;
        goto label_1bab34;
    }
    ctx->pc = 0x1BAB2Cu;
    SET_GPR_U32(ctx, 31, 0x1BAB34u);
    ctx->pc = 0x1BAB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB2Cu;
    // 0x1bab30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB510u, 0x1BAB2Cu, 0x1BAB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB34u;
label_1bab34:
    // 0x1bab34: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x1bab34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bab38:
    // 0x1bab38: 0xc06ed56  jal         func_1BB558
label_1bab3c:
    if (ctx->pc == 0x1BAB3Cu) {
        ctx->pc = 0x1BAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB38u;
        // 0x1bab3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB40u;
        goto label_1bab40;
    }
    ctx->pc = 0x1BAB38u;
    SET_GPR_U32(ctx, 31, 0x1BAB40u);
    ctx->pc = 0x1BAB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB38u;
    // 0x1bab3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB558u, 0x1BAB38u, 0x1BAB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB40u;
label_1bab40:
    // 0x1bab40: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x1bab40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
label_1bab44:
    // 0x1bab44: 0xc06ed46  jal         func_1BB518
label_1bab48:
    if (ctx->pc == 0x1BAB48u) {
        ctx->pc = 0x1BAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB44u;
        // 0x1bab48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB4Cu;
        goto label_1bab4c;
    }
    ctx->pc = 0x1BAB44u;
    SET_GPR_U32(ctx, 31, 0x1BAB4Cu);
    ctx->pc = 0x1BAB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB44u;
    // 0x1bab48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB518u, 0x1BAB44u, 0x1BAB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB4Cu;
label_1bab4c:
    // 0x1bab4c: 0x26820f90  addiu       $v0, $s4, 0xF90
    ctx->pc = 0x1bab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
label_1bab50:
    // 0x1bab50: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1bab50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1bab54:
    // 0x1bab54: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1bab54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bab58:
    // 0x1bab58: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1bab58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1bab5c:
    // 0x1bab5c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1bab5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bab60:
    // 0x1bab60: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1bab60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1bab64:
    // 0x1bab64: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1bab64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1bab68:
    // 0x1bab68: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1bab68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1bab6c:
    // 0x1bab6c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1bab6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bab70:
    // 0x1bab70: 0x3e00008  jr          $ra
label_1bab74:
    if (ctx->pc == 0x1BAB74u) {
        ctx->pc = 0x1BAB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB70u;
        // 0x1bab74: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB78u;
        goto label_fallthrough_0x1bab70;
    }
    ctx->pc = 0x1BAB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB70u;
        // 0x1bab74: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bab70:
    ctx->pc = 0x1BAB78u;
}
