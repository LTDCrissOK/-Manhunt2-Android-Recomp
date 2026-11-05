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

// Function: sub_001C51B0
// Address: 0x1c51b0 - 0x1c52c8
void sub_001C51B0_0x1c51b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C51B0_0x1c51b0");
#endif

    switch (ctx->pc) {
        case 0x1c51b0u: goto label_1c51b0;
        case 0x1c51b4u: goto label_1c51b4;
        case 0x1c51b8u: goto label_1c51b8;
        case 0x1c51bcu: goto label_1c51bc;
        case 0x1c51c0u: goto label_1c51c0;
        case 0x1c51c4u: goto label_1c51c4;
        case 0x1c51c8u: goto label_1c51c8;
        case 0x1c51ccu: goto label_1c51cc;
        case 0x1c51d0u: goto label_1c51d0;
        case 0x1c51d4u: goto label_1c51d4;
        case 0x1c51d8u: goto label_1c51d8;
        case 0x1c51dcu: goto label_1c51dc;
        case 0x1c51e0u: goto label_1c51e0;
        case 0x1c51e4u: goto label_1c51e4;
        case 0x1c51e8u: goto label_1c51e8;
        case 0x1c51ecu: goto label_1c51ec;
        case 0x1c51f0u: goto label_1c51f0;
        case 0x1c51f4u: goto label_1c51f4;
        case 0x1c51f8u: goto label_1c51f8;
        case 0x1c51fcu: goto label_1c51fc;
        case 0x1c5200u: goto label_1c5200;
        case 0x1c5204u: goto label_1c5204;
        case 0x1c5208u: goto label_1c5208;
        case 0x1c520cu: goto label_1c520c;
        case 0x1c5210u: goto label_1c5210;
        case 0x1c5214u: goto label_1c5214;
        case 0x1c5218u: goto label_1c5218;
        case 0x1c521cu: goto label_1c521c;
        case 0x1c5220u: goto label_1c5220;
        case 0x1c5224u: goto label_1c5224;
        case 0x1c5228u: goto label_1c5228;
        case 0x1c522cu: goto label_1c522c;
        case 0x1c5230u: goto label_1c5230;
        case 0x1c5234u: goto label_1c5234;
        case 0x1c5238u: goto label_1c5238;
        case 0x1c523cu: goto label_1c523c;
        case 0x1c5240u: goto label_1c5240;
        case 0x1c5244u: goto label_1c5244;
        case 0x1c5248u: goto label_1c5248;
        case 0x1c524cu: goto label_1c524c;
        case 0x1c5250u: goto label_1c5250;
        case 0x1c5254u: goto label_1c5254;
        case 0x1c5258u: goto label_1c5258;
        case 0x1c525cu: goto label_1c525c;
        case 0x1c5260u: goto label_1c5260;
        case 0x1c5264u: goto label_1c5264;
        case 0x1c5268u: goto label_1c5268;
        case 0x1c526cu: goto label_1c526c;
        case 0x1c5270u: goto label_1c5270;
        case 0x1c5274u: goto label_1c5274;
        case 0x1c5278u: goto label_1c5278;
        case 0x1c527cu: goto label_1c527c;
        case 0x1c5280u: goto label_1c5280;
        case 0x1c5284u: goto label_1c5284;
        case 0x1c5288u: goto label_1c5288;
        case 0x1c528cu: goto label_1c528c;
        case 0x1c5290u: goto label_1c5290;
        case 0x1c5294u: goto label_1c5294;
        case 0x1c5298u: goto label_1c5298;
        case 0x1c529cu: goto label_1c529c;
        case 0x1c52a0u: goto label_1c52a0;
        case 0x1c52a4u: goto label_1c52a4;
        case 0x1c52a8u: goto label_1c52a8;
        case 0x1c52acu: goto label_1c52ac;
        case 0x1c52b0u: goto label_1c52b0;
        case 0x1c52b4u: goto label_1c52b4;
        case 0x1c52b8u: goto label_1c52b8;
        case 0x1c52bcu: goto label_1c52bc;
        case 0x1c52c0u: goto label_1c52c0;
        case 0x1c52c4u: goto label_1c52c4;
        default: break;
    }

    ctx->pc = 0x1c51b0u;

label_1c51b0:
    // 0x1c51b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c51b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c51b4:
    // 0x1c51b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c51b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1c51b8:
    // 0x1c51b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c51b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1c51bc:
    // 0x1c51bc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c51bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1c51c0:
    // 0x1c51c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c51c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c51c4:
    // 0x1c51c4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1c51c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1c51c8:
    // 0x1c51c8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1c51c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1c51cc:
    // 0x1c51cc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c51ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c51d0:
    // 0x1c51d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c51d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1c51d4:
    // 0x1c51d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c51d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1c51d8:
    // 0x1c51d8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1c51d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1c51dc:
    // 0x1c51dc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1c51dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1c51e0:
    // 0x1c51e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c51e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1c51e4:
    // 0x1c51e4: 0x8eb20ffc  lw          $s2, 0xFFC($s5)
    ctx->pc = 0x1c51e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4092)));
label_1c51e8:
    // 0x1c51e8: 0xc454c740  lwc1        $f20, -0x38C0($v0)
    ctx->pc = 0x1c51e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c51ec:
    // 0x1c51ec: 0x26440034  addiu       $a0, $s2, 0x34
    ctx->pc = 0x1c51ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
label_1c51f0:
    // 0x1c51f0: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1c51f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1c51f4:
    // 0x1c51f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1c51f8:
    // 0x1c51f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c51fc:
    // 0x1c51fc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c51fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1c5200:
    // 0x1c5200: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1c5204:
    if (ctx->pc == 0x1C5204u) {
        ctx->pc = 0x1C5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5200u;
        // 0x1c5204: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5208u;
        goto label_1c5208;
    }
    ctx->pc = 0x1C5200u;
    {
        const bool branch_taken_0x1c5200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5200u;
        // 0x1c5204: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5200) {
            ctx->pc = 0x1C5294u;
            goto label_1c5294;
        }
    }
    ctx->pc = 0x1C5208u;
label_1c5208:
    // 0x1c5208: 0x3c110002  lui         $s1, 0x2
    ctx->pc = 0x1c5208u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)2 << 16));
label_1c520c:
    // 0x1c520c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1c520cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c5210:
    // 0x1c5210: 0x36310001  ori         $s1, $s1, 0x1
    ctx->pc = 0x1c5210u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
label_1c5214:
    // 0x1c5214: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1c5214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1c5218:
    // 0x1c5218: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1c5218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1c521c:
    // 0x1c521c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c5220:
    // 0x1c5220: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1c5220u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5224:
    // 0x1c5224: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
label_1c5228:
    if (ctx->pc == 0x1C5228u) {
        ctx->pc = 0x1C5228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5224u;
        // 0x1c5228: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C522Cu;
        goto label_1c522c;
    }
    ctx->pc = 0x1C5224u;
    {
        const bool branch_taken_0x1c5224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5224) {
            ctx->pc = 0x1C5228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5224u;
            // 0x1c5228: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5278u;
            goto label_1c5278;
        }
    }
    ctx->pc = 0x1C522Cu;
label_1c522c:
    // 0x1c522c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1c522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1c5230:
    // 0x1c5230: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1c5230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_1c5234:
    // 0x1c5234: 0x54510010  bnel        $v0, $s1, . + 4 + (0x10 << 2)
label_1c5238:
    if (ctx->pc == 0x1C5238u) {
        ctx->pc = 0x1C5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5234u;
        // 0x1c5238: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C523Cu;
        goto label_1c523c;
    }
    ctx->pc = 0x1C5234u;
    {
        const bool branch_taken_0x1c5234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c5234) {
            ctx->pc = 0x1C5238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5234u;
            // 0x1c5238: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5278u;
            goto label_1c5278;
        }
    }
    ctx->pc = 0x1C523Cu;
label_1c523c:
    // 0x1c523c: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x1c523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_1c5240:
    // 0x1c5240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c5244:
    // 0x1c5244: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c5244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c5248:
    // 0x1c5248: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x1c5248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_1c524c:
    // 0x1c524c: 0x40f809  jalr        $v0
label_1c5250:
    if (ctx->pc == 0x1C5250u) {
        ctx->pc = 0x1C5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C524Cu;
        // 0x1c5250: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5254u;
        goto label_1c5254;
    }
    ctx->pc = 0x1C524Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C5254u);
        ctx->pc = 0x1C5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C524Cu;
        // 0x1c5250: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C524Cu, 0x1C5254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5254u;
label_1c5254:
    // 0x1c5254: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c5258:
    if (ctx->pc == 0x1C5258u) {
        ctx->pc = 0x1C5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5254u;
        // 0x1c5258: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C525Cu;
        goto label_1c525c;
    }
    ctx->pc = 0x1C5254u;
    {
        const bool branch_taken_0x1c5254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5254u;
        // 0x1c5258: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5254) {
            ctx->pc = 0x1C5274u;
            goto label_1c5274;
        }
    }
    ctx->pc = 0x1C525Cu;
label_1c525c:
    // 0x1c525c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1c525cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c5260:
    // 0x1c5260: 0x0  nop
    ctx->pc = 0x1c5260u;
    // NOP
label_1c5264:
    // 0x1c5264: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1c5268:
    if (ctx->pc == 0x1C5268u) {
        ctx->pc = 0x1C5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5264u;
        // 0x1c5268: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C526Cu;
        goto label_1c526c;
    }
    ctx->pc = 0x1C5264u;
    {
        const bool branch_taken_0x1c5264 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5264) {
            ctx->pc = 0x1C5268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5264u;
            // 0x1c5268: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5278u;
            goto label_1c5278;
        }
    }
    ctx->pc = 0x1C526Cu;
label_1c526c:
    // 0x1c526c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1c526cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c5270:
    // 0x1c5270: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c5270u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1c5274:
    // 0x1c5274: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1c5274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1c5278:
    // 0x1c5278: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c5278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c527c:
    // 0x1c527c: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1c527cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1c5280:
    // 0x1c5280: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c5280u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c5284:
    // 0x1c5284: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c5284u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1c5288:
    // 0x1c5288: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1c5288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c528c:
    // 0x1c528c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
label_1c5290:
    if (ctx->pc == 0x1C5290u) {
        ctx->pc = 0x1C5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C528Cu;
        // 0x1c5290: 0x8e420034  lw          $v0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5294u;
        goto label_1c5294;
    }
    ctx->pc = 0x1C528Cu;
    {
        const bool branch_taken_0x1c528c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c528c) {
            ctx->pc = 0x1C5290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C528Cu;
            // 0x1c5290: 0x8e420034  lw          $v0, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5218;
        }
    }
    ctx->pc = 0x1C5294u;
label_1c5294:
    // 0x1c5294: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1c5294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c5298:
    // 0x1c5298: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c5298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c529c:
    // 0x1c529c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c529cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c52a0:
    // 0x1c52a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c52a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c52a4:
    // 0x1c52a4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c52a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1c52a8:
    // 0x1c52a8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c52a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c52ac:
    // 0x1c52ac: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1c52acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1c52b0:
    // 0x1c52b0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1c52b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c52b4:
    // 0x1c52b4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1c52b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1c52b8:
    // 0x1c52b8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1c52b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c52bc:
    // 0x1c52bc: 0x3e00008  jr          $ra
label_1c52c0:
    if (ctx->pc == 0x1C52C0u) {
        ctx->pc = 0x1C52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52BCu;
        // 0x1c52c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C52C4u;
        goto label_1c52c4;
    }
    ctx->pc = 0x1C52BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52BCu;
        // 0x1c52c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C52BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C52C4u;
label_1c52c4:
    // 0x1c52c4: 0x0  nop
    ctx->pc = 0x1c52c4u;
    // NOP
    ctx->pc = 0x1c52c8u;
}
