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

// Function: sub_001A5248
// Address: 0x1a5248 - 0x1a5470
void sub_001A5248_0x1a5248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5248_0x1a5248");
#endif

    switch (ctx->pc) {
        case 0x1a5248u: goto label_1a5248;
        case 0x1a524cu: goto label_1a524c;
        case 0x1a5250u: goto label_1a5250;
        case 0x1a5254u: goto label_1a5254;
        case 0x1a5258u: goto label_1a5258;
        case 0x1a525cu: goto label_1a525c;
        case 0x1a5260u: goto label_1a5260;
        case 0x1a5264u: goto label_1a5264;
        case 0x1a5268u: goto label_1a5268;
        case 0x1a526cu: goto label_1a526c;
        case 0x1a5270u: goto label_1a5270;
        case 0x1a5274u: goto label_1a5274;
        case 0x1a5278u: goto label_1a5278;
        case 0x1a527cu: goto label_1a527c;
        case 0x1a5280u: goto label_1a5280;
        case 0x1a5284u: goto label_1a5284;
        case 0x1a5288u: goto label_1a5288;
        case 0x1a528cu: goto label_1a528c;
        case 0x1a5290u: goto label_1a5290;
        case 0x1a5294u: goto label_1a5294;
        case 0x1a5298u: goto label_1a5298;
        case 0x1a529cu: goto label_1a529c;
        case 0x1a52a0u: goto label_1a52a0;
        case 0x1a52a4u: goto label_1a52a4;
        case 0x1a52a8u: goto label_1a52a8;
        case 0x1a52acu: goto label_1a52ac;
        case 0x1a52b0u: goto label_1a52b0;
        case 0x1a52b4u: goto label_1a52b4;
        case 0x1a52b8u: goto label_1a52b8;
        case 0x1a52bcu: goto label_1a52bc;
        case 0x1a52c0u: goto label_1a52c0;
        case 0x1a52c4u: goto label_1a52c4;
        case 0x1a52c8u: goto label_1a52c8;
        case 0x1a52ccu: goto label_1a52cc;
        case 0x1a52d0u: goto label_1a52d0;
        case 0x1a52d4u: goto label_1a52d4;
        case 0x1a52d8u: goto label_1a52d8;
        case 0x1a52dcu: goto label_1a52dc;
        case 0x1a52e0u: goto label_1a52e0;
        case 0x1a52e4u: goto label_1a52e4;
        case 0x1a52e8u: goto label_1a52e8;
        case 0x1a52ecu: goto label_1a52ec;
        case 0x1a52f0u: goto label_1a52f0;
        case 0x1a52f4u: goto label_1a52f4;
        case 0x1a52f8u: goto label_1a52f8;
        case 0x1a52fcu: goto label_1a52fc;
        case 0x1a5300u: goto label_1a5300;
        case 0x1a5304u: goto label_1a5304;
        case 0x1a5308u: goto label_1a5308;
        case 0x1a530cu: goto label_1a530c;
        case 0x1a5310u: goto label_1a5310;
        case 0x1a5314u: goto label_1a5314;
        case 0x1a5318u: goto label_1a5318;
        case 0x1a531cu: goto label_1a531c;
        case 0x1a5320u: goto label_1a5320;
        case 0x1a5324u: goto label_1a5324;
        case 0x1a5328u: goto label_1a5328;
        case 0x1a532cu: goto label_1a532c;
        case 0x1a5330u: goto label_1a5330;
        case 0x1a5334u: goto label_1a5334;
        case 0x1a5338u: goto label_1a5338;
        case 0x1a533cu: goto label_1a533c;
        case 0x1a5340u: goto label_1a5340;
        case 0x1a5344u: goto label_1a5344;
        case 0x1a5348u: goto label_1a5348;
        case 0x1a534cu: goto label_1a534c;
        case 0x1a5350u: goto label_1a5350;
        case 0x1a5354u: goto label_1a5354;
        case 0x1a5358u: goto label_1a5358;
        case 0x1a535cu: goto label_1a535c;
        case 0x1a5360u: goto label_1a5360;
        case 0x1a5364u: goto label_1a5364;
        case 0x1a5368u: goto label_1a5368;
        case 0x1a536cu: goto label_1a536c;
        case 0x1a5370u: goto label_1a5370;
        case 0x1a5374u: goto label_1a5374;
        case 0x1a5378u: goto label_1a5378;
        case 0x1a537cu: goto label_1a537c;
        case 0x1a5380u: goto label_1a5380;
        case 0x1a5384u: goto label_1a5384;
        case 0x1a5388u: goto label_1a5388;
        case 0x1a538cu: goto label_1a538c;
        case 0x1a5390u: goto label_1a5390;
        case 0x1a5394u: goto label_1a5394;
        case 0x1a5398u: goto label_1a5398;
        case 0x1a539cu: goto label_1a539c;
        case 0x1a53a0u: goto label_1a53a0;
        case 0x1a53a4u: goto label_1a53a4;
        case 0x1a53a8u: goto label_1a53a8;
        case 0x1a53acu: goto label_1a53ac;
        case 0x1a53b0u: goto label_1a53b0;
        case 0x1a53b4u: goto label_1a53b4;
        case 0x1a53b8u: goto label_1a53b8;
        case 0x1a53bcu: goto label_1a53bc;
        case 0x1a53c0u: goto label_1a53c0;
        case 0x1a53c4u: goto label_1a53c4;
        case 0x1a53c8u: goto label_1a53c8;
        case 0x1a53ccu: goto label_1a53cc;
        case 0x1a53d0u: goto label_1a53d0;
        case 0x1a53d4u: goto label_1a53d4;
        case 0x1a53d8u: goto label_1a53d8;
        case 0x1a53dcu: goto label_1a53dc;
        case 0x1a53e0u: goto label_1a53e0;
        case 0x1a53e4u: goto label_1a53e4;
        case 0x1a53e8u: goto label_1a53e8;
        case 0x1a53ecu: goto label_1a53ec;
        case 0x1a53f0u: goto label_1a53f0;
        case 0x1a53f4u: goto label_1a53f4;
        case 0x1a53f8u: goto label_1a53f8;
        case 0x1a53fcu: goto label_1a53fc;
        case 0x1a5400u: goto label_1a5400;
        case 0x1a5404u: goto label_1a5404;
        case 0x1a5408u: goto label_1a5408;
        case 0x1a540cu: goto label_1a540c;
        case 0x1a5410u: goto label_1a5410;
        case 0x1a5414u: goto label_1a5414;
        case 0x1a5418u: goto label_1a5418;
        case 0x1a541cu: goto label_1a541c;
        case 0x1a5420u: goto label_1a5420;
        case 0x1a5424u: goto label_1a5424;
        case 0x1a5428u: goto label_1a5428;
        case 0x1a542cu: goto label_1a542c;
        case 0x1a5430u: goto label_1a5430;
        case 0x1a5434u: goto label_1a5434;
        case 0x1a5438u: goto label_1a5438;
        case 0x1a543cu: goto label_1a543c;
        case 0x1a5440u: goto label_1a5440;
        case 0x1a5444u: goto label_1a5444;
        case 0x1a5448u: goto label_1a5448;
        case 0x1a544cu: goto label_1a544c;
        case 0x1a5450u: goto label_1a5450;
        case 0x1a5454u: goto label_1a5454;
        case 0x1a5458u: goto label_1a5458;
        case 0x1a545cu: goto label_1a545c;
        case 0x1a5460u: goto label_1a5460;
        case 0x1a5464u: goto label_1a5464;
        case 0x1a5468u: goto label_1a5468;
        case 0x1a546cu: goto label_1a546c;
        default: break;
    }

    ctx->pc = 0x1a5248u;

label_1a5248:
    // 0x1a5248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a524c:
    // 0x1a524c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a524cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a5250:
    // 0x1a5250: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a5250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a5254:
    // 0x1a5254: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5258:
    // 0x1a5258: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a5258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a525c:
    // 0x1a525c: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x1a525cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1a5260:
    // 0x1a5260: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a5260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1a5264:
    // 0x1a5264: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a5264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5268:
    // 0x1a5268: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1a5268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a526c:
    // 0x1a526c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a526cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a5270:
    // 0x1a5270: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1a5270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5274:
    // 0x1a5274: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1a5274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a5278:
    // 0x1a5278: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1a5278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a527c:
    // 0x1a527c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1a527cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a5280:
    // 0x1a5280: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1a5280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5284:
    // 0x1a5284: 0xc061a1e  jal         func_186878
label_1a5288:
    if (ctx->pc == 0x1A5288u) {
        ctx->pc = 0x1A5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5284u;
        // 0x1a5288: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A528Cu;
        goto label_1a528c;
    }
    ctx->pc = 0x1A5284u;
    SET_GPR_U32(ctx, 31, 0x1A528Cu);
    ctx->pc = 0x1A5288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5284u;
    // 0x1a5288: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A5284u, 0x1A528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A528Cu;
label_1a528c:
    // 0x1a528c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a528cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5290:
    // 0x1a5290: 0xc06cdb8  jal         func_1B36E0
label_1a5294:
    if (ctx->pc == 0x1A5294u) {
        ctx->pc = 0x1A5294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5290u;
        // 0x1a5294: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5298u;
        goto label_1a5298;
    }
    ctx->pc = 0x1A5290u;
    SET_GPR_U32(ctx, 31, 0x1A5298u);
    ctx->pc = 0x1A5294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5290u;
    // 0x1a5294: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36E0u, 0x1A5290u, 0x1A5298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5298u;
label_1a5298:
    // 0x1a5298: 0xc061a1e  jal         func_186878
label_1a529c:
    if (ctx->pc == 0x1A529Cu) {
        ctx->pc = 0x1A529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5298u;
        // 0x1a529c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52A0u;
        goto label_1a52a0;
    }
    ctx->pc = 0x1A5298u;
    SET_GPR_U32(ctx, 31, 0x1A52A0u);
    ctx->pc = 0x1A529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5298u;
    // 0x1a529c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A5298u, 0x1A52A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52A0u;
label_1a52a0:
    // 0x1a52a0: 0xac400158  sw          $zero, 0x158($v0)
    ctx->pc = 0x1a52a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
label_1a52a4:
    // 0x1a52a4: 0xc061a1e  jal         func_186878
label_1a52a8:
    if (ctx->pc == 0x1A52A8u) {
        ctx->pc = 0x1A52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52A4u;
        // 0x1a52a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52ACu;
        goto label_1a52ac;
    }
    ctx->pc = 0x1A52A4u;
    SET_GPR_U32(ctx, 31, 0x1A52ACu);
    ctx->pc = 0x1A52A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52A4u;
    // 0x1a52a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A52A4u, 0x1A52ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52ACu;
label_1a52ac:
    // 0x1a52ac: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x1a52acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
label_1a52b0:
    // 0x1a52b0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1a52b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a52b4:
    // 0x1a52b4: 0x10720035  beq         $v1, $s2, . + 4 + (0x35 << 2)
label_1a52b8:
    if (ctx->pc == 0x1A52B8u) {
        ctx->pc = 0x1A52B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52B4u;
        // 0x1a52b8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52BCu;
        goto label_1a52bc;
    }
    ctx->pc = 0x1A52B4u;
    {
        const bool branch_taken_0x1a52b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A52B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52B4u;
        // 0x1a52b8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52b4) {
            ctx->pc = 0x1A538Cu;
            goto label_1a538c;
        }
    }
    ctx->pc = 0x1A52BCu;
label_1a52bc:
    // 0x1a52bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1a52c0:
    if (ctx->pc == 0x1A52C0u) {
        ctx->pc = 0x1A52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52BCu;
        // 0x1a52c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52C4u;
        goto label_1a52c4;
    }
    ctx->pc = 0x1A52BCu;
    {
        const bool branch_taken_0x1a52bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a52bc) {
            ctx->pc = 0x1A52C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A52BCu;
            // 0x1a52c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A52D4u;
            goto label_1a52d4;
        }
    }
    ctx->pc = 0x1A52C4u;
label_1a52c4:
    // 0x1a52c4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1a52c8:
    if (ctx->pc == 0x1A52C8u) {
        ctx->pc = 0x1A52CCu;
        goto label_1a52cc;
    }
    ctx->pc = 0x1A52C4u;
    {
        const bool branch_taken_0x1a52c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a52c4) {
            ctx->pc = 0x1A52E4u;
            goto label_1a52e4;
        }
    }
    ctx->pc = 0x1A52CCu;
label_1a52cc:
    // 0x1a52cc: 0x10000062  b           . + 4 + (0x62 << 2)
label_1a52d0:
    if (ctx->pc == 0x1A52D0u) {
        ctx->pc = 0x1A52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52CCu;
        // 0x1a52d0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52D4u;
        goto label_1a52d4;
    }
    ctx->pc = 0x1A52CCu;
    {
        const bool branch_taken_0x1a52cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52CCu;
        // 0x1a52d0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52cc) {
            ctx->pc = 0x1A5458u;
            goto label_1a5458;
        }
    }
    ctx->pc = 0x1A52D4u;
label_1a52d4:
    // 0x1a52d4: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
label_1a52d8:
    if (ctx->pc == 0x1A52D8u) {
        ctx->pc = 0x1A52DCu;
        goto label_1a52dc;
    }
    ctx->pc = 0x1A52D4u;
    {
        const bool branch_taken_0x1a52d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a52d4) {
            ctx->pc = 0x1A53ECu;
            goto label_1a53ec;
        }
    }
    ctx->pc = 0x1A52DCu;
label_1a52dc:
    // 0x1a52dc: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1a52e0:
    if (ctx->pc == 0x1A52E0u) {
        ctx->pc = 0x1A52E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52DCu;
        // 0x1a52e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52E4u;
        goto label_1a52e4;
    }
    ctx->pc = 0x1A52DCu;
    {
        const bool branch_taken_0x1a52dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A52E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52DCu;
        // 0x1a52e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52dc) {
            ctx->pc = 0x1A5458u;
            goto label_1a5458;
        }
    }
    ctx->pc = 0x1A52E4u;
label_1a52e4:
    // 0x1a52e4: 0xc061a12  jal         func_186848
label_1a52e8:
    if (ctx->pc == 0x1A52E8u) {
        ctx->pc = 0x1A52E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52E4u;
        // 0x1a52e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52ECu;
        goto label_1a52ec;
    }
    ctx->pc = 0x1A52E4u;
    SET_GPR_U32(ctx, 31, 0x1A52ECu);
    ctx->pc = 0x1A52E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52E4u;
    // 0x1a52e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A52E4u, 0x1A52ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52ECu;
label_1a52ec:
    // 0x1a52ec: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a52ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a52f0:
    // 0x1a52f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a52f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a52f4:
    // 0x1a52f4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a52f8:
    // 0x1a52f8: 0x40f809  jalr        $v0
label_1a52fc:
    if (ctx->pc == 0x1A52FCu) {
        ctx->pc = 0x1A5300u;
        goto label_1a5300;
    }
    ctx->pc = 0x1A52F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5300u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A52F8u, 0x1A5300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5300u;
label_1a5300:
    // 0x1a5300: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
label_1a5304:
    if (ctx->pc == 0x1A5304u) {
        ctx->pc = 0x1A5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5300u;
        // 0x1a5304: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5308u;
        goto label_1a5308;
    }
    ctx->pc = 0x1A5300u;
    {
        const bool branch_taken_0x1a5300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5300) {
            ctx->pc = 0x1A5304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5300u;
            // 0x1a5304: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5458u;
            goto label_1a5458;
        }
    }
    ctx->pc = 0x1A5308u;
label_1a5308:
    // 0x1a5308: 0xc061a1e  jal         func_186878
label_1a530c:
    if (ctx->pc == 0x1A530Cu) {
        ctx->pc = 0x1A530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5308u;
        // 0x1a530c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5310u;
        goto label_1a5310;
    }
    ctx->pc = 0x1A5308u;
    SET_GPR_U32(ctx, 31, 0x1A5310u);
    ctx->pc = 0x1A530Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5308u;
    // 0x1a530c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A5308u, 0x1A5310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5310u;
label_1a5310:
    // 0x1a5310: 0xc06deee  jal         func_1B7BB8
label_1a5314:
    if (ctx->pc == 0x1A5314u) {
        ctx->pc = 0x1A5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5310u;
        // 0x1a5314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5318u;
        goto label_1a5318;
    }
    ctx->pc = 0x1A5310u;
    SET_GPR_U32(ctx, 31, 0x1A5318u);
    ctx->pc = 0x1A5314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5310u;
    // 0x1a5314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BB8u, 0x1A5310u, 0x1A5318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5318u;
label_1a5318:
    // 0x1a5318: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a5318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a531c:
    // 0x1a531c: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x1a531cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
label_1a5320:
    // 0x1a5320: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x1a5320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_1a5324:
    // 0x1a5324: 0x2442ffe3  addiu       $v0, $v0, -0x1D
    ctx->pc = 0x1a5324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967267));
label_1a5328:
    // 0x1a5328: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a5328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1a532c:
    // 0x1a532c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1a5330:
    if (ctx->pc == 0x1A5330u) {
        ctx->pc = 0x1A5330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A532Cu;
        // 0x1a5330: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5334u;
        goto label_1a5334;
    }
    ctx->pc = 0x1A532Cu;
    {
        const bool branch_taken_0x1a532c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A532Cu;
        // 0x1a5330: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a532c) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A5334u;
label_1a5334:
    // 0x1a5334: 0x8c830338  lw          $v1, 0x338($a0)
    ctx->pc = 0x1a5334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 824)));
label_1a5338:
    // 0x1a5338: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1a5338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1a533c:
    // 0x1a533c: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x1a533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_1a5340:
    // 0x1a5340: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1a5344:
    if (ctx->pc == 0x1A5344u) {
        ctx->pc = 0x1A5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5340u;
        // 0x1a5344: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5348u;
        goto label_1a5348;
    }
    ctx->pc = 0x1A5340u;
    {
        const bool branch_taken_0x1a5340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5340u;
        // 0x1a5344: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5340) {
            ctx->pc = 0x1A5364u;
            goto label_1a5364;
        }
    }
    ctx->pc = 0x1A5348u;
label_1a5348:
    // 0x1a5348: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a5348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a534c:
    // 0x1a534c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1a5350:
    if (ctx->pc == 0x1A5350u) {
        ctx->pc = 0x1A5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A534Cu;
        // 0x1a5350: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5354u;
        goto label_1a5354;
    }
    ctx->pc = 0x1A534Cu;
    {
        const bool branch_taken_0x1a534c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A534Cu;
        // 0x1a5350: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a534c) {
            ctx->pc = 0x1A5364u;
            goto label_1a5364;
        }
    }
    ctx->pc = 0x1A5354u;
label_1a5354:
    // 0x1a5354: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1a5358:
    if (ctx->pc == 0x1A5358u) {
        ctx->pc = 0x1A5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5354u;
        // 0x1a5358: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A535Cu;
        goto label_1a535c;
    }
    ctx->pc = 0x1A5354u;
    {
        const bool branch_taken_0x1a5354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5354u;
        // 0x1a5358: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5354) {
            ctx->pc = 0x1A5364u;
            goto label_1a5364;
        }
    }
    ctx->pc = 0x1A535Cu;
label_1a535c:
    // 0x1a535c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1a5360:
    if (ctx->pc == 0x1A5360u) {
        ctx->pc = 0x1A5364u;
        goto label_1a5364;
    }
    ctx->pc = 0x1A535Cu;
    {
        const bool branch_taken_0x1a535c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a535c) {
            ctx->pc = 0x1A5368u;
            goto label_1a5368;
        }
    }
    ctx->pc = 0x1A5364u;
label_1a5364:
    // 0x1a5364: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a5364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5368:
    // 0x1a5368: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
label_1a536c:
    if (ctx->pc == 0x1A536Cu) {
        ctx->pc = 0x1A536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5368u;
        // 0x1a536c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5370u;
        goto label_1a5370;
    }
    ctx->pc = 0x1A5368u;
    {
        const bool branch_taken_0x1a5368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5368u;
        // 0x1a536c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5368) {
            ctx->pc = 0x1A5454u;
            goto label_1a5454;
        }
    }
    ctx->pc = 0x1A5370u;
label_1a5370:
    // 0x1a5370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5374:
    // 0x1a5374: 0xc061a1e  jal         func_186878
label_1a5378:
    if (ctx->pc == 0x1A5378u) {
        ctx->pc = 0x1A5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5374u;
        // 0x1a5378: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A537Cu;
        goto label_1a537c;
    }
    ctx->pc = 0x1A5374u;
    SET_GPR_U32(ctx, 31, 0x1A537Cu);
    ctx->pc = 0x1A5378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5374u;
    // 0x1a5378: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A5374u, 0x1A537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A537Cu;
label_1a537c:
    // 0x1a537c: 0xc06cdb4  jal         func_1B36D0
label_1a5380:
    if (ctx->pc == 0x1A5380u) {
        ctx->pc = 0x1A5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A537Cu;
        // 0x1a5380: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5384u;
        goto label_1a5384;
    }
    ctx->pc = 0x1A537Cu;
    SET_GPR_U32(ctx, 31, 0x1A5384u);
    ctx->pc = 0x1A5380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A537Cu;
    // 0x1a5380: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x1A537Cu, 0x1A5384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5384u;
label_1a5384:
    // 0x1a5384: 0x10000034  b           . + 4 + (0x34 << 2)
label_1a5388:
    if (ctx->pc == 0x1A5388u) {
        ctx->pc = 0x1A5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5384u;
        // 0x1a5388: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A538Cu;
        goto label_1a538c;
    }
    ctx->pc = 0x1A5384u;
    {
        const bool branch_taken_0x1a5384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5384u;
        // 0x1a5388: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5384) {
            ctx->pc = 0x1A5458u;
            goto label_1a5458;
        }
    }
    ctx->pc = 0x1A538Cu;
label_1a538c:
    // 0x1a538c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a538cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5390:
    // 0x1a5390: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x1a5390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
label_1a5394:
    // 0x1a5394: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x1a5394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_1a5398:
    // 0x1a5398: 0x2442ffe3  addiu       $v0, $v0, -0x1D
    ctx->pc = 0x1a5398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967267));
label_1a539c:
    // 0x1a539c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a539cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1a53a0:
    // 0x1a53a0: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_1a53a4:
    if (ctx->pc == 0x1A53A4u) {
        ctx->pc = 0x1A53A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53A0u;
        // 0x1a53a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53A8u;
        goto label_1a53a8;
    }
    ctx->pc = 0x1A53A0u;
    {
        const bool branch_taken_0x1a53a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a53a0) {
            ctx->pc = 0x1A53A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A53A0u;
            // 0x1a53a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5458u;
            goto label_1a5458;
        }
    }
    ctx->pc = 0x1A53A8u;
label_1a53a8:
    // 0x1a53a8: 0x8c830338  lw          $v1, 0x338($a0)
    ctx->pc = 0x1a53a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 824)));
label_1a53ac:
    // 0x1a53ac: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1a53acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1a53b0:
    // 0x1a53b0: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x1a53b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_1a53b4:
    // 0x1a53b4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1a53b8:
    if (ctx->pc == 0x1A53B8u) {
        ctx->pc = 0x1A53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53B4u;
        // 0x1a53b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53BCu;
        goto label_1a53bc;
    }
    ctx->pc = 0x1A53B4u;
    {
        const bool branch_taken_0x1a53b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53B4u;
        // 0x1a53b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53b4) {
            ctx->pc = 0x1A53D8u;
            goto label_1a53d8;
        }
    }
    ctx->pc = 0x1A53BCu;
label_1a53bc:
    // 0x1a53bc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a53c0:
    // 0x1a53c0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1a53c4:
    if (ctx->pc == 0x1A53C4u) {
        ctx->pc = 0x1A53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53C0u;
        // 0x1a53c4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53C8u;
        goto label_1a53c8;
    }
    ctx->pc = 0x1A53C0u;
    {
        const bool branch_taken_0x1a53c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53C0u;
        // 0x1a53c4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53c0) {
            ctx->pc = 0x1A53D8u;
            goto label_1a53d8;
        }
    }
    ctx->pc = 0x1A53C8u;
label_1a53c8:
    // 0x1a53c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1a53cc:
    if (ctx->pc == 0x1A53CCu) {
        ctx->pc = 0x1A53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53C8u;
        // 0x1a53cc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53D0u;
        goto label_1a53d0;
    }
    ctx->pc = 0x1A53C8u;
    {
        const bool branch_taken_0x1a53c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53C8u;
        // 0x1a53cc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53c8) {
            ctx->pc = 0x1A53D8u;
            goto label_1a53d8;
        }
    }
    ctx->pc = 0x1A53D0u;
label_1a53d0:
    // 0x1a53d0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1a53d4:
    if (ctx->pc == 0x1A53D4u) {
        ctx->pc = 0x1A53D8u;
        goto label_1a53d8;
    }
    ctx->pc = 0x1A53D0u;
    {
        const bool branch_taken_0x1a53d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a53d0) {
            ctx->pc = 0x1A53DCu;
            goto label_1a53dc;
        }
    }
    ctx->pc = 0x1A53D8u;
label_1a53d8:
    // 0x1a53d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a53d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a53dc:
    // 0x1a53dc: 0x5480001e  bnel        $a0, $zero, . + 4 + (0x1E << 2)
label_1a53e0:
    if (ctx->pc == 0x1A53E0u) {
        ctx->pc = 0x1A53E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53DCu;
        // 0x1a53e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53E4u;
        goto label_1a53e4;
    }
    ctx->pc = 0x1A53DCu;
    {
        const bool branch_taken_0x1a53dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a53dc) {
            ctx->pc = 0x1A53E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A53DCu;
            // 0x1a53e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5458u;
            goto label_1a5458;
        }
    }
    ctx->pc = 0x1A53E4u;
label_1a53e4:
    // 0x1a53e4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1a53e8:
    if (ctx->pc == 0x1A53E8u) {
        ctx->pc = 0x1A53E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53E4u;
        // 0x1a53e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53ECu;
        goto label_1a53ec;
    }
    ctx->pc = 0x1A53E4u;
    {
        const bool branch_taken_0x1a53e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A53E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53E4u;
        // 0x1a53e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53e4) {
            ctx->pc = 0x1A5450u;
            goto label_1a5450;
        }
    }
    ctx->pc = 0x1A53ECu;
label_1a53ec:
    // 0x1a53ec: 0xc061a12  jal         func_186848
label_1a53f0:
    if (ctx->pc == 0x1A53F0u) {
        ctx->pc = 0x1A53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53ECu;
        // 0x1a53f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53F4u;
        goto label_1a53f4;
    }
    ctx->pc = 0x1A53ECu;
    SET_GPR_U32(ctx, 31, 0x1A53F4u);
    ctx->pc = 0x1A53F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A53ECu;
    // 0x1a53f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A53ECu, 0x1A53F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53F4u;
label_1a53f4:
    // 0x1a53f4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1a53f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1a53f8:
    // 0x1a53f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a53f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a53fc:
    // 0x1a53fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a53fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5400:
    // 0x1a5400: 0xc07072c  jal         func_1C1CB0
label_1a5404:
    if (ctx->pc == 0x1A5404u) {
        ctx->pc = 0x1A5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5400u;
        // 0x1a5404: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5408u;
        goto label_1a5408;
    }
    ctx->pc = 0x1A5400u;
    SET_GPR_U32(ctx, 31, 0x1A5408u);
    ctx->pc = 0x1A5404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5400u;
    // 0x1a5404: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1CB0u, 0x1A5400u, 0x1A5408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5408u;
label_1a5408:
    // 0x1a5408: 0xc061a12  jal         func_186848
label_1a540c:
    if (ctx->pc == 0x1A540Cu) {
        ctx->pc = 0x1A540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5408u;
        // 0x1a540c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5410u;
        goto label_1a5410;
    }
    ctx->pc = 0x1A5408u;
    SET_GPR_U32(ctx, 31, 0x1A5410u);
    ctx->pc = 0x1A540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5408u;
    // 0x1a540c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A5408u, 0x1A5410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5410u;
label_1a5410:
    // 0x1a5410: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a5410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a5414:
    // 0x1a5414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5418:
    // 0x1a5418: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a5418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a541c:
    // 0x1a541c: 0x40f809  jalr        $v0
label_1a5420:
    if (ctx->pc == 0x1A5420u) {
        ctx->pc = 0x1A5424u;
        goto label_1a5424;
    }
    ctx->pc = 0x1A541Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5424u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A541Cu, 0x1A5424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5424u;
label_1a5424:
    // 0x1a5424: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a5428:
    if (ctx->pc == 0x1A5428u) {
        ctx->pc = 0x1A542Cu;
        goto label_1a542c;
    }
    ctx->pc = 0x1A5424u;
    {
        const bool branch_taken_0x1a5424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5424) {
            ctx->pc = 0x1A5440u;
            goto label_1a5440;
        }
    }
    ctx->pc = 0x1A542Cu;
label_1a542c:
    // 0x1a542c: 0xc061a12  jal         func_186848
label_1a5430:
    if (ctx->pc == 0x1A5430u) {
        ctx->pc = 0x1A5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A542Cu;
        // 0x1a5430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5434u;
        goto label_1a5434;
    }
    ctx->pc = 0x1A542Cu;
    SET_GPR_U32(ctx, 31, 0x1A5434u);
    ctx->pc = 0x1A5430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A542Cu;
    // 0x1a5430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A542Cu, 0x1A5434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5434u;
label_1a5434:
    // 0x1a5434: 0x8c4304d0  lw          $v1, 0x4D0($v0)
    ctx->pc = 0x1a5434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
label_1a5438:
    // 0x1a5438: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_1a543c:
    if (ctx->pc == 0x1A543Cu) {
        ctx->pc = 0x1A543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5438u;
        // 0x1a543c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5440u;
        goto label_1a5440;
    }
    ctx->pc = 0x1A5438u;
    {
        const bool branch_taken_0x1a5438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5438) {
            ctx->pc = 0x1A543Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5438u;
            // 0x1a543c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5458u;
            goto label_1a5458;
        }
    }
    ctx->pc = 0x1A5440u;
label_1a5440:
    // 0x1a5440: 0xc061a1e  jal         func_186878
label_1a5444:
    if (ctx->pc == 0x1A5444u) {
        ctx->pc = 0x1A5444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5440u;
        // 0x1a5444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5448u;
        goto label_1a5448;
    }
    ctx->pc = 0x1A5440u;
    SET_GPR_U32(ctx, 31, 0x1A5448u);
    ctx->pc = 0x1A5444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5440u;
    // 0x1a5444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A5440u, 0x1A5448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5448u;
label_1a5448:
    // 0x1a5448: 0xac520158  sw          $s2, 0x158($v0)
    ctx->pc = 0x1a5448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 18));
label_1a544c:
    // 0x1a544c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a544cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a5450:
    // 0x1a5450: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a5450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1a5454:
    // 0x1a5454: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a5454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5458:
    // 0x1a5458: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a5458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a545c:
    // 0x1a545c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a545cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5460:
    // 0x1a5460: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a5460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a5464:
    // 0x1a5464: 0x3e00008  jr          $ra
label_1a5468:
    if (ctx->pc == 0x1A5468u) {
        ctx->pc = 0x1A5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5464u;
        // 0x1a5468: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A546Cu;
        goto label_1a546c;
    }
    ctx->pc = 0x1A5464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5464u;
        // 0x1a5468: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A546Cu;
label_1a546c:
    // 0x1a546c: 0x0  nop
    ctx->pc = 0x1a546cu;
    // NOP
    ctx->pc = 0x1a5470u;
}
