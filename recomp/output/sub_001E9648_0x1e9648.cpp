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

// Function: sub_001E9648
// Address: 0x1e9648 - 0x1e9990
void sub_001E9648_0x1e9648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9648_0x1e9648");
#endif

    switch (ctx->pc) {
        case 0x1e968cu: goto label_1e968c;
        case 0x1e96a8u: goto label_1e96a8;
        case 0x1e96e8u: goto label_1e96e8;
        case 0x1e977cu: goto label_1e977c;
        case 0x1e9810u: goto label_1e9810;
        case 0x1e9870u: goto label_1e9870;
        case 0x1e9894u: goto label_1e9894;
        case 0x1e98e0u: goto label_1e98e0;
        case 0x1e9954u: goto label_1e9954;
        default: break;
    }

    ctx->pc = 0x1e9648u;

    // 0x1e9648: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e9648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e964c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1e964cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1e9650: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1e9650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1e9654: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1e9654u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9658: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x1e9658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x1e965c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e965cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9660: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1e9660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1e9664: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1e9664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1e9668: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1e9668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1e966c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1e966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x1e9670: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x1e9670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x1e9674: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1e9674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1e9678: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x1e9678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x1e967c: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x1e967cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x1e9680: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1e9680u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e9684: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x1E9684u;
    SET_GPR_U32(ctx, 31, 0x1E968Cu);
    ctx->pc = 0x1E9688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9684u;
    // 0x1e9688: 0xafa60038  sw          $a2, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x1E9684u, 0x1E968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E968Cu;
label_1e968c:
    // 0x1e968c: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x1e968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1e9690: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e9690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e9694: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e9694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e9698: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e9698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e969c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e969cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e96a0: 0xc0854d4  jal         func_215350
    ctx->pc = 0x1E96A0u;
    SET_GPR_U32(ctx, 31, 0x1E96A8u);
    ctx->pc = 0x1E96A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E96A0u;
    // 0x1e96a4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215350u, 0x1E96A0u, 0x1E96A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E96A8u;
label_1e96a8:
    // 0x1e96a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e96a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e96ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1e96acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e96b0: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E96B0u;
    {
        const bool branch_taken_0x1e96b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E96B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96B0u;
        // 0x1e96b4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96b0) {
            ctx->pc = 0x1E96BCu;
            goto label_1e96bc;
        }
    }
    ctx->pc = 0x1E96B8u;
    // 0x1e96b8: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x1e96b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e96bc:
    // 0x1e96bc: 0x1280009e  beqz        $s4, . + 4 + (0x9E << 2)
    ctx->pc = 0x1E96BCu;
    {
        const bool branch_taken_0x1e96bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96BCu;
        // 0x1e96c0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96bc) {
            ctx->pc = 0x1E9938u;
            goto label_1e9938;
        }
    }
    ctx->pc = 0x1E96C4u;
    // 0x1e96c4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1e96c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1e96c8: 0x8c44d9a4  lw          $a0, -0x265C($v0)
    ctx->pc = 0x1e96c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957476)));
    // 0x1e96cc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1e96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1e96d0: 0xc474d9c0  lwc1        $f20, -0x2640($v1)
    ctx->pc = 0x1e96d0u;
    { uint32_t bits = FAST_READ32(0x45D9C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e96d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e96d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e96d8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1e96d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1e96dc: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1e96dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1e96e0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1e96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1e96e4: 0x8e8300b8  lw          $v1, 0xB8($s4)
    ctx->pc = 0x1e96e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_1e96e8:
    // 0x1e96e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e96e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e96ec: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1e96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1e96f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e96f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e96f4: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x1E96F4u;
    {
        const bool branch_taken_0x1e96f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96F4u;
        // 0x1e96f8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96f4) {
            ctx->pc = 0x1E9914u;
            goto label_1e9914;
        }
    }
    ctx->pc = 0x1E96FCu;
    // 0x1e96fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e96fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e9700: 0x8c4391ac  lw          $v1, -0x6E54($v0)
    ctx->pc = 0x1e9700u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91ACu));
    // 0x1e9704: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9704u;
    {
        const bool branch_taken_0x1e9704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9704u;
        // 0x1e9708: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9704) {
            ctx->pc = 0x1E971Cu;
            goto label_1e971c;
        }
    }
    ctx->pc = 0x1E970Cu;
    // 0x1e970c: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x1e970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x1e9710: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e9710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1e9714: 0x1044007f  beq         $v0, $a0, . + 4 + (0x7F << 2)
    ctx->pc = 0x1E9714u;
    {
        const bool branch_taken_0x1e9714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9714u;
        // 0x1e9718: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9714) {
            ctx->pc = 0x1E9914u;
            goto label_1e9914;
        }
    }
    ctx->pc = 0x1E971Cu;
label_1e971c:
    // 0x1e971c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e971cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9720: 0x8ca32b1c  lw          $v1, 0x2B1C($a1)
    ctx->pc = 0x1e9720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11036)));
    // 0x1e9724: 0x8e9700c4  lw          $s7, 0xC4($s4)
    ctx->pc = 0x1e9724u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x1e9728: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1e9728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e972c: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x1E972Cu;
    {
        const bool branch_taken_0x1e972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E972Cu;
        // 0x1e9730: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e972c) {
            ctx->pc = 0x1E9938u;
            goto label_1e9938;
        }
    }
    ctx->pc = 0x1E9734u;
    // 0x1e9734: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1e9734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1e9738: 0x8e8600c4  lw          $a2, 0xC4($s4)
    ctx->pc = 0x1e9738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x1e973c: 0x8c452b20  lw          $a1, 0x2B20($v0)
    ctx->pc = 0x1e973cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B20u));
    // 0x1e9740: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e9740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e9744: 0x8ee80014  lw          $t0, 0x14($s7)
    ctx->pc = 0x1e9744u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x1e9748: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e9748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e974c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e974cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e9750: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x1e9750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1e9754: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x1e9754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1e9758: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1e9758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e975c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1e975cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9760: 0x8cb50010  lw          $s5, 0x10($a1)
    ctx->pc = 0x1e9760u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1e9764: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1e9764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e9768: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e9768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e976c: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x1e976cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e9770: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x1e9770u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e9774: 0xc0788c0  jal         func_1E2300
    ctx->pc = 0x1E9774u;
    SET_GPR_U32(ctx, 31, 0x1E977Cu);
    ctx->pc = 0x1E9778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9774u;
    // 0x1e9778: 0x8c52000c  lw          $s2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2300u, 0x1E9774u, 0x1E977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E977Cu;
label_1e977c:
    // 0x1e977c: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1E977Cu;
    {
        const bool branch_taken_0x1e977c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E977Cu;
        // 0x1e9780: 0x27b60030  addiu       $s6, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e977c) {
            ctx->pc = 0x1E9910u;
            goto label_1e9910;
        }
    }
    ctx->pc = 0x1E9784u;
    // 0x1e9784: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e9784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e9788: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E9788u;
    {
        const bool branch_taken_0x1e9788 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9788) {
            ctx->pc = 0x1E978Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9788u;
            // 0x1e978c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E97B0u;
            goto label_1e97b0;
        }
    }
    ctx->pc = 0x1E9790u;
    // 0x1e9790: 0x16200018  bnez        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E9790u;
    {
        const bool branch_taken_0x1e9790 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9790) {
            ctx->pc = 0x1E97F4u;
            goto label_1e97f4;
        }
    }
    ctx->pc = 0x1E9798u;
    // 0x1e9798: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E9798u;
    {
        const bool branch_taken_0x1e9798 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9798) {
            ctx->pc = 0x1E97F4u;
            goto label_1e97f4;
        }
    }
    ctx->pc = 0x1E97A0u;
    // 0x1e97a0: 0x16600014  bnez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E97A0u;
    {
        const bool branch_taken_0x1e97a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e97a0) {
            ctx->pc = 0x1E97F4u;
            goto label_1e97f4;
        }
    }
    ctx->pc = 0x1E97A8u;
    // 0x1e97a8: 0x16a00012  bnez        $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E97A8u;
    {
        const bool branch_taken_0x1e97a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97A8u;
        // 0x1e97ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97a8) {
            ctx->pc = 0x1E97F4u;
            goto label_1e97f4;
        }
    }
    ctx->pc = 0x1E97B0u;
label_1e97b0:
    // 0x1e97b0: 0xae1e0024  sw          $fp, 0x24($s0)
    ctx->pc = 0x1e97b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 30));
    // 0x1e97b4: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e97b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e97b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e97b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e97bc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1e97bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e97c0: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x1e97c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x1e97c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e97c8: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x1e97c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x1e97cc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1e97ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1e97d0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1e97d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1e97d4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e97d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e97d8: 0xae140034  sw          $s4, 0x34($s0)
    ctx->pc = 0x1e97d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 20));
    // 0x1e97dc: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1e97dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1e97e0: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x1e97e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    // 0x1e97e4: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x1e97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1e97e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e97e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e97ec: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1E97ECu;
    {
        const bool branch_taken_0x1e97ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E97F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97ECu;
        // 0x1e97f0: 0xac622b1c  sw          $v0, 0x2B1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97ec) {
            ctx->pc = 0x1E9910u;
            goto label_1e9910;
        }
    }
    ctx->pc = 0x1E97F4u;
label_1e97f4:
    // 0x1e97f4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E97F4u;
    {
        const bool branch_taken_0x1e97f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97F4u;
        // 0x1e97f8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97f4) {
            ctx->pc = 0x1E9854u;
            goto label_1e9854;
        }
    }
    ctx->pc = 0x1E97FCu;
    // 0x1e97fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e97fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9800: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e9800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9804: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e9804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9808: 0xc07a3ee  jal         func_1E8FB8
    ctx->pc = 0x1E9808u;
    SET_GPR_U32(ctx, 31, 0x1E9810u);
    ctx->pc = 0x1E980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9808u;
    // 0x1e980c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8FB8u, 0x1E9808u, 0x1E9810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9810u;
label_1e9810:
    // 0x1e9810: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E9810u;
    {
        const bool branch_taken_0x1e9810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9810u;
        // 0x1e9814: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9810) {
            ctx->pc = 0x1E9854u;
            goto label_1e9854;
        }
    }
    ctx->pc = 0x1E9818u;
    // 0x1e9818: 0xae140034  sw          $s4, 0x34($s0)
    ctx->pc = 0x1e9818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 20));
    // 0x1e981c: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x1e981cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x1e9820: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1e9820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1e9824: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x1e9824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x1e9828: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e9828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e982c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e982cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e9830: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1e9830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1e9834: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1e9834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1e9838: 0x8ca32b1c  lw          $v1, 0x2B1C($a1)
    ctx->pc = 0x1e9838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11036)));
    // 0x1e983c: 0x8c442b20  lw          $a0, 0x2B20($v0)
    ctx->pc = 0x1e983cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B20u));
    // 0x1e9840: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e9840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e9844: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e9844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e9848: 0xaca32b1c  sw          $v1, 0x2B1C($a1)
    ctx->pc = 0x1e9848u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11036), GPR_U32(ctx, 3));
    // 0x1e984c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e9850: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e9850u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e9854:
    // 0x1e9854: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9854u;
    {
        const bool branch_taken_0x1e9854 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9854u;
        // 0x1e9858: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9854) {
            ctx->pc = 0x1E9878u;
            goto label_1e9878;
        }
    }
    ctx->pc = 0x1E985Cu;
    // 0x1e985c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e985cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9860: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1e9860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9864: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1e9864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9868: 0xc079fa2  jal         func_1E7E88
    ctx->pc = 0x1E9868u;
    SET_GPR_U32(ctx, 31, 0x1E9870u);
    ctx->pc = 0x1E986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9868u;
    // 0x1e986c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E88u, 0x1E9868u, 0x1E9870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9870u;
label_1e9870:
    // 0x1e9870: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1E9870u;
    {
        const bool branch_taken_0x1e9870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9870) {
            ctx->pc = 0x1E98E0u;
            goto label_1e98e0;
        }
    }
    ctx->pc = 0x1E9878u;
label_1e9878:
    // 0x1e9878: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E9878u;
    {
        const bool branch_taken_0x1e9878 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9878u;
        // 0x1e987c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9878) {
            ctx->pc = 0x1E98C8u;
            goto label_1e98c8;
        }
    }
    ctx->pc = 0x1E9880u;
    // 0x1e9880: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1e9880u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9884: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e9884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9888: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e9888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e988c: 0xc07a426  jal         func_1E9098
    ctx->pc = 0x1E988Cu;
    SET_GPR_U32(ctx, 31, 0x1E9894u);
    ctx->pc = 0x1E9890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E988Cu;
    // 0x1e9890: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9098u, 0x1E988Cu, 0x1E9894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9894u;
label_1e9894:
    // 0x1e9894: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E9894u;
    {
        const bool branch_taken_0x1e9894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9894u;
        // 0x1e9898: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9894) {
            ctx->pc = 0x1E9910u;
            goto label_1e9910;
        }
    }
    ctx->pc = 0x1E989Cu;
    // 0x1e989c: 0xae140034  sw          $s4, 0x34($s0)
    ctx->pc = 0x1e989cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 20));
    // 0x1e98a0: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x1e98a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    // 0x1e98a4: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x1e98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x1e98a8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e98a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e98ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e98acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e98b0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1e98b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1e98b4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1e98b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1e98b8: 0x8c432b1c  lw          $v1, 0x2B1C($v0)
    ctx->pc = 0x1e98b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1e98bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e98c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E98C0u;
    {
        const bool branch_taken_0x1e98c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E98C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98C0u;
        // 0x1e98c4: 0xac432b1c  sw          $v1, 0x2B1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e98c0) {
            ctx->pc = 0x1E9910u;
            goto label_1e9910;
        }
    }
    ctx->pc = 0x1E98C8u;
label_1e98c8:
    // 0x1e98c8: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E98C8u;
    {
        const bool branch_taken_0x1e98c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E98CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98C8u;
        // 0x1e98cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e98c8) {
            ctx->pc = 0x1E9910u;
            goto label_1e9910;
        }
    }
    ctx->pc = 0x1E98D0u;
    // 0x1e98d0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1e98d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98d4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e98d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98d8: 0xc07a498  jal         func_1E9260
    ctx->pc = 0x1E98D8u;
    SET_GPR_U32(ctx, 31, 0x1E98E0u);
    ctx->pc = 0x1E98DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E98D8u;
    // 0x1e98dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9260u, 0x1E98D8u, 0x1E98E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E98E0u;
label_1e98e0:
    // 0x1e98e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E98E0u;
    {
        const bool branch_taken_0x1e98e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98E0u;
        // 0x1e98e4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e98e0) {
            ctx->pc = 0x1E9910u;
            goto label_1e9910;
        }
    }
    ctx->pc = 0x1E98E8u;
    // 0x1e98e8: 0xae140034  sw          $s4, 0x34($s0)
    ctx->pc = 0x1e98e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 20));
    // 0x1e98ec: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1e98ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1e98f0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1e98f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1e98f4: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x1e98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x1e98f8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e98f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e98fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e98fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e9900: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1e9900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1e9904: 0x8c832b1c  lw          $v1, 0x2B1C($a0)
    ctx->pc = 0x1e9904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11036)));
    // 0x1e9908: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e9908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e990c: 0xac832b1c  sw          $v1, 0x2B1C($a0)
    ctx->pc = 0x1e990cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11036), GPR_U32(ctx, 3));
label_1e9910:
    // 0x1e9910: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1e9910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1e9914:
    // 0x1e9914: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e9914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9918: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9918u;
    {
        const bool branch_taken_0x1e9918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9918u;
        // 0x1e991c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9918) {
            ctx->pc = 0x1E9930u;
            goto label_1e9930;
        }
    }
    ctx->pc = 0x1E9920u;
    // 0x1e9920: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1e9920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e9924: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9924u;
    {
        const bool branch_taken_0x1e9924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9924u;
        // 0x1e9928: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9924) {
            ctx->pc = 0x1E9930u;
            goto label_1e9930;
        }
    }
    ctx->pc = 0x1E992Cu;
    // 0x1e992c: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x1e992cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e9930:
    // 0x1e9930: 0x5680ff6d  bnel        $s4, $zero, . + 4 + (-0x93 << 2)
    ctx->pc = 0x1E9930u;
    {
        const bool branch_taken_0x1e9930 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9930) {
            ctx->pc = 0x1E9934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9930u;
            // 0x1e9934: 0x8e8300b8  lw          $v1, 0xB8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E96E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e96e8;
        }
    }
    ctx->pc = 0x1E9938u;
label_1e9938:
    // 0x1e9938: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1e9938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1e993c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e993cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9940: 0x8ca22b1c  lw          $v0, 0x2B1C($a1)
    ctx->pc = 0x1e9940u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1e9944: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9944u;
    {
        const bool branch_taken_0x1e9944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9944u;
        // 0x1e9948: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9944) {
            ctx->pc = 0x1E9954u;
            goto label_1e9954;
        }
    }
    ctx->pc = 0x1E994Cu;
    // 0x1e994c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1E994Cu;
    SET_GPR_U32(ctx, 31, 0x1E9954u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1E994Cu, 0x1E9954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9954u;
label_1e9954:
    // 0x1e9954: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e9954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9958: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1e9958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e995c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1e995cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9960: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1e9960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9964: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1e9964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e9968: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1e9968u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e996c: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x1e996cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e9970: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1e9970u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e9974: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x1e9974u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1e9978: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1e9978u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e997c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x1e997cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1e9980: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1e9980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e9984: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9984u;
        // 0x1e9988: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E998Cu;
    // 0x1e998c: 0x0  nop
    ctx->pc = 0x1e998cu;
    // NOP
    ctx->pc = 0x1e9990u;
}
