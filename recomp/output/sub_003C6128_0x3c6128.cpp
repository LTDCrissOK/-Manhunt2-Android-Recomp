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

// Function: sub_003C6128
// Address: 0x3c6128 - 0x3c6740
void sub_003C6128_0x3c6128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6128_0x3c6128");
#endif

    switch (ctx->pc) {
        case 0x3c61b8u: goto label_3c61b8;
        case 0x3c61e0u: goto label_3c61e0;
        case 0x3c624cu: goto label_3c624c;
        case 0x3c6270u: goto label_3c6270;
        case 0x3c6290u: goto label_3c6290;
        case 0x3c62b4u: goto label_3c62b4;
        case 0x3c62dcu: goto label_3c62dc;
        case 0x3c62e8u: goto label_3c62e8;
        case 0x3c62f8u: goto label_3c62f8;
        case 0x3c6320u: goto label_3c6320;
        case 0x3c6330u: goto label_3c6330;
        case 0x3c633cu: goto label_3c633c;
        case 0x3c6358u: goto label_3c6358;
        case 0x3c637cu: goto label_3c637c;
        case 0x3c63a4u: goto label_3c63a4;
        case 0x3c63b0u: goto label_3c63b0;
        case 0x3c63bcu: goto label_3c63bc;
        case 0x3c63d4u: goto label_3c63d4;
        case 0x3c63e0u: goto label_3c63e0;
        case 0x3c63ecu: goto label_3c63ec;
        case 0x3c63fcu: goto label_3c63fc;
        case 0x3c6418u: goto label_3c6418;
        case 0x3c644cu: goto label_3c644c;
        case 0x3c6474u: goto label_3c6474;
        case 0x3c6480u: goto label_3c6480;
        case 0x3c64a4u: goto label_3c64a4;
        case 0x3c64b0u: goto label_3c64b0;
        case 0x3c64d8u: goto label_3c64d8;
        case 0x3c64fcu: goto label_3c64fc;
        case 0x3c6508u: goto label_3c6508;
        case 0x3c652cu: goto label_3c652c;
        case 0x3c6538u: goto label_3c6538;
        case 0x3c655cu: goto label_3c655c;
        case 0x3c6568u: goto label_3c6568;
        case 0x3c6574u: goto label_3c6574;
        case 0x3c658cu: goto label_3c658c;
        case 0x3c6598u: goto label_3c6598;
        case 0x3c65acu: goto label_3c65ac;
        case 0x3c65b8u: goto label_3c65b8;
        case 0x3c65c4u: goto label_3c65c4;
        case 0x3c65ecu: goto label_3c65ec;
        case 0x3c65fcu: goto label_3c65fc;
        case 0x3c6608u: goto label_3c6608;
        case 0x3c6630u: goto label_3c6630;
        case 0x3c663cu: goto label_3c663c;
        case 0x3c6648u: goto label_3c6648;
        case 0x3c6654u: goto label_3c6654;
        case 0x3c6684u: goto label_3c6684;
        case 0x3c6694u: goto label_3c6694;
        case 0x3c66a0u: goto label_3c66a0;
        case 0x3c66c8u: goto label_3c66c8;
        case 0x3c66d4u: goto label_3c66d4;
        case 0x3c66e0u: goto label_3c66e0;
        case 0x3c66f0u: goto label_3c66f0;
        case 0x3c66fcu: goto label_3c66fc;
        case 0x3c670cu: goto label_3c670c;
        default: break;
    }

    ctx->pc = 0x3c6128u;

    // 0x3c6128: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3c6128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3c612c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3c612cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6130: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3c6130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3c6134: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3c6134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3c6138: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3c6138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3c613c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3c613cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3c6140: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c6140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3c6144: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3c6144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3c6148: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3c6148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3c614c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3c614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3c6150: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3c6150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3c6154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c6154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c6158: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3c6158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c615c: 0x2983f  dsra32      $s3, $v0, 0
    ctx->pc = 0x3c615cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c6160: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3c6160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c6164: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3c6164u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3c6168: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3c6168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3c616c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c616cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c6170: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x3c6170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3c6174: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C6174u;
    {
        const bool branch_taken_0x3c6174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6174u;
        // 0x3c6178: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6174) {
            ctx->pc = 0x3C61C0u;
            goto label_3c61c0;
        }
    }
    ctx->pc = 0x3C617Cu;
    // 0x3c617c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3c617cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3c6180: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c6180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c6184: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x3c6184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x3c6188: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c6188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3c618c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C618Cu;
    {
        const bool branch_taken_0x3c618c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C618Cu;
        // 0x3c6190: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c618c) {
            ctx->pc = 0x3C61A0u;
            goto label_3c61a0;
        }
    }
    ctx->pc = 0x3C6194u;
    // 0x3c6194: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x3C6194u;
    {
        const bool branch_taken_0x3c6194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6194u;
        // 0x3c6198: 0xdc621810  ld          $v0, 0x1810($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 6160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6194) {
            ctx->pc = 0x3C670Cu;
            goto label_3c670c;
        }
    }
    ctx->pc = 0x3C619Cu;
    // 0x3c619c: 0x0  nop
    ctx->pc = 0x3c619cu;
    // NOP
label_3c61a0:
    // 0x3c61a0: 0x6600037  bltz        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x3C61A0u;
    {
        const bool branch_taken_0x3c61a0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x3C61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C61A0u;
        // 0x3c61a4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c61a0) {
            ctx->pc = 0x3C6280u;
            goto label_3c6280;
        }
    }
    ctx->pc = 0x3C61A8u;
    // 0x3c61a8: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x3c61a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x3c61ac: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3c61acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3c61b0: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C61B0u;
    SET_GPR_U32(ctx, 31, 0x3C61B8u);
    ctx->pc = 0x3C61B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C61B0u;
    // 0x3c61b4: 0x241effca  addiu       $fp, $zero, -0x36 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C61B0u, 0x3C61B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C61B8u;
label_3c61b8:
    // 0x3c61b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c61b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c61bc: 0x2983f  dsra32      $s3, $v0, 0
    ctx->pc = 0x3c61bcu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
label_3c61c0:
    // 0x3c61c0: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x3c61c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x3c61c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c61c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c61c8: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x3c61c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3c61cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C61CCu;
    {
        const bool branch_taken_0x3c61cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C61CCu;
        // 0x3c61d0: 0x3c10000f  lui         $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c61cc) {
            ctx->pc = 0x3C61E8u;
            goto label_3c61e8;
        }
    }
    ctx->pc = 0x3C61D4u;
    // 0x3c61d4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3c61d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c61d8: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C61D8u;
    SET_GPR_U32(ctx, 31, 0x3C61E0u);
    ctx->pc = 0x3C61DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C61D8u;
    // 0x3c61dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C61D8u, 0x3C61E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C61E0u;
label_3c61e0:
    // 0x3c61e0: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x3C61E0u;
    {
        const bool branch_taken_0x3c61e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C61E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C61E0u;
        // 0x3c61e4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c61e0) {
            ctx->pc = 0x3C6710u;
            goto label_3c6710;
        }
    }
    ctx->pc = 0x3C61E8u;
label_3c61e8:
    // 0x3c61e8: 0x132503  sra         $a0, $s3, 20
    ctx->pc = 0x3c61e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 20));
    // 0x3c61ec: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x3c61ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x3c61f0: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x3c61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x3c61f4: 0x34425f64  ori         $v0, $v0, 0x5F64
    ctx->pc = 0x3c61f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24420);
    // 0x3c61f8: 0x2709824  and         $s3, $s3, $s0
    ctx->pc = 0x3c61f8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x3c61fc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3c61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3c6200: 0x27c3fc01  addiu       $v1, $fp, -0x3FF
    ctx->pc = 0x3c6200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966273));
    // 0x3c6204: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x3c6204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x3c6208: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x3c6208u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c620c: 0x45a024  and         $s4, $v0, $a1
    ctx->pc = 0x3c620cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3c6210: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3c6210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6214: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x3c6214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x3c6218: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c6218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c621c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3c621cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3c6220: 0x2821026  xor         $v0, $s4, $v0
    ctx->pc = 0x3c6220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
    // 0x3c6224: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3c6224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3c6228: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x3c6228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x3c622c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c622cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c6230: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x3c6230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3c6234: 0x141d03  sra         $v1, $s4, 20
    ctx->pc = 0x3c6234u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 20), 20));
    // 0x3c6238: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3c6238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3c623c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3c623cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3c6240: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x3c6240u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x3c6244: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C6244u;
    SET_GPR_U32(ctx, 31, 0x3C624Cu);
    ctx->pc = 0x3C6248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6244u;
    // 0x3c6248: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C6244u, 0x3C624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C624Cu;
label_3c624c:
    // 0x3c624c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3c624cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6250: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x3c6250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x3c6254: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x3c6254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x3c6258: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3c6258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3c625c: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3C625Cu;
    {
        const bool branch_taken_0x3c625c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C625Cu;
        // 0x3c6260: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c625c) {
            ctx->pc = 0x3C63C4u;
            goto label_3c63c4;
        }
    }
    ctx->pc = 0x3C6264u;
    // 0x3c6264: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c6264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6268: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C6268u;
    SET_GPR_U32(ctx, 31, 0x3C6270u);
    ctx->pc = 0x3C626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6268u;
    // 0x3c626c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C6268u, 0x3C6270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6270u;
label_3c6270:
    // 0x3c6270: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3C6270u;
    {
        const bool branch_taken_0x3c6270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6270u;
        // 0x3c6274: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6270) {
            ctx->pc = 0x3C62F0u;
            goto label_3c62f0;
        }
    }
    ctx->pc = 0x3C6278u;
    // 0x3c6278: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C6278u;
    {
        const bool branch_taken_0x3c6278 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6278) {
            ctx->pc = 0x3C6288u;
            goto label_3c6288;
        }
    }
    ctx->pc = 0x3C6280u;
label_3c6280:
    // 0x3c6280: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x3C6280u;
    {
        const bool branch_taken_0x3c6280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6280u;
        // 0x3c6284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6280) {
            ctx->pc = 0x3C670Cu;
            goto label_3c670c;
        }
    }
    ctx->pc = 0x3C6288u;
label_3c6288:
    // 0x3c6288: 0xc0f50f4  jal         func_3D43D0
    ctx->pc = 0x3C6288u;
    SET_GPR_U32(ctx, 31, 0x3C6290u);
    ctx->pc = 0x3C628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6288u;
    // 0x3c628c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D43D0u, 0x3C6288u, 0x3C6290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6290u;
label_3c6290:
    // 0x3c6290: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3c6290u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6294: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x3c6294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x3c6298: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c6298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c629c: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x3c629cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x3c62a0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c62a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c62a4: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x3c62a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x3c62a8: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3c62a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3c62ac: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C62ACu;
    SET_GPR_U32(ctx, 31, 0x3C62B4u);
    ctx->pc = 0x3C62B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C62ACu;
    // 0x3c62b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C62ACu, 0x3C62B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C62B4u;
label_3c62b4:
    // 0x3c62b4: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x3c62b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x3c62b8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c62b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c62bc: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x3c62bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x3c62c0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c62c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c62c4: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x3c62c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x3c62c8: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3c62c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3c62cc: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x3c62ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x3c62d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c62d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c62d4: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C62D4u;
    SET_GPR_U32(ctx, 31, 0x3C62DCu);
    ctx->pc = 0x3C62D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C62D4u;
    // 0x3c62d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C62D4u, 0x3C62DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C62DCu;
label_3c62dc:
    // 0x3c62dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c62dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c62e0: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C62E0u;
    SET_GPR_U32(ctx, 31, 0x3C62E8u);
    ctx->pc = 0x3C62E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C62E0u;
    // 0x3c62e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C62E0u, 0x3C62E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C62E8u;
label_3c62e8:
    // 0x3c62e8: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x3C62E8u;
    {
        const bool branch_taken_0x3c62e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C62E8u;
        // 0x3c62ec: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c62e8) {
            ctx->pc = 0x3C6710u;
            goto label_3c6710;
        }
    }
    ctx->pc = 0x3C62F0u;
label_3c62f0:
    // 0x3c62f0: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C62F0u;
    SET_GPR_U32(ctx, 31, 0x3C62F8u);
    ctx->pc = 0x3C62F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C62F0u;
    // 0x3c62f4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C62F0u, 0x3C62F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C62F8u;
label_3c62f8:
    // 0x3c62f8: 0x3405ff55  ori         $a1, $zero, 0xFF55
    ctx->pc = 0x3c62f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65365);
    // 0x3c62fc: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3c62fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3c6300: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x3c6300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x3c6304: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c6304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c6308: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x3c6308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x3c630c: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3c630cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3c6310: 0x34a51555  ori         $a1, $a1, 0x1555
    ctx->pc = 0x3c6310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5461);
    // 0x3c6314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c6314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6318: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C6318u;
    SET_GPR_U32(ctx, 31, 0x3C6320u);
    ctx->pc = 0x3C631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6318u;
    // 0x3c631c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C6318u, 0x3C6320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6320u;
label_3c6320:
    // 0x3c6320: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x3c6320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3c6324: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x3c6324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x3c6328: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C6328u;
    SET_GPR_U32(ctx, 31, 0x3C6330u);
    ctx->pc = 0x3C632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6328u;
    // 0x3c632c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C6328u, 0x3C6330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6330u;
label_3c6330:
    // 0x3c6330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c6330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6334: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C6334u;
    SET_GPR_U32(ctx, 31, 0x3C633Cu);
    ctx->pc = 0x3C6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6334u;
    // 0x3c6338: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C6334u, 0x3C633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C633Cu;
label_3c633c:
    // 0x3c633c: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C633Cu;
    {
        const bool branch_taken_0x3c633c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C633Cu;
        // 0x3c6340: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c633c) {
            ctx->pc = 0x3C6350u;
            goto label_3c6350;
        }
    }
    ctx->pc = 0x3C6344u;
    // 0x3c6344: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c6344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6348: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x3C6348u;
    {
        const bool branch_taken_0x3c6348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6348u;
        // 0x3c634c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6348) {
            ctx->pc = 0x3C6704u;
            goto label_3c6704;
        }
    }
    ctx->pc = 0x3C6350u;
label_3c6350:
    // 0x3c6350: 0xc0f50f4  jal         func_3D43D0
    ctx->pc = 0x3C6350u;
    SET_GPR_U32(ctx, 31, 0x3C6358u);
    ctx->pc = 0x3C6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6350u;
    // 0x3c6354: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D43D0u, 0x3C6350u, 0x3C6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6358u;
label_3c6358:
    // 0x3c6358: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3c6358u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c635c: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x3c635cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x3c6360: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c6360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c6364: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x3c6364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x3c6368: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c6368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c636c: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x3c636cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x3c6370: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3c6370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3c6374: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C6374u;
    SET_GPR_U32(ctx, 31, 0x3C637Cu);
    ctx->pc = 0x3C6378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6374u;
    // 0x3c6378: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C6374u, 0x3C637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C637Cu;
label_3c637c:
    // 0x3c637c: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x3c637cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x3c6380: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c6380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c6384: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x3c6384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x3c6388: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c6388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c638c: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x3c638cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x3c6390: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3c6390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3c6394: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x3c6394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x3c6398: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c6398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c639c: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C639Cu;
    SET_GPR_U32(ctx, 31, 0x3C63A4u);
    ctx->pc = 0x3C63A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C639Cu;
    // 0x3c63a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C639Cu, 0x3C63A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C63A4u;
label_3c63a4:
    // 0x3c63a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c63a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c63a8: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C63A8u;
    SET_GPR_U32(ctx, 31, 0x3C63B0u);
    ctx->pc = 0x3C63ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C63A8u;
    // 0x3c63ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C63A8u, 0x3C63B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C63B0u;
label_3c63b0:
    // 0x3c63b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c63b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c63b4: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C63B4u;
    SET_GPR_U32(ctx, 31, 0x3C63BCu);
    ctx->pc = 0x3C63B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C63B4u;
    // 0x3c63b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C63B4u, 0x3C63BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C63BCu;
label_3c63bc:
    // 0x3c63bc: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x3C63BCu;
    {
        const bool branch_taken_0x3c63bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C63BCu;
        // 0x3c63c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c63bc) {
            ctx->pc = 0x3C6700u;
            goto label_3c6700;
        }
    }
    ctx->pc = 0x3C63C4u;
label_3c63c4:
    // 0x3c63c4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3c63c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3c63c8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3c63c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3c63cc: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C63CCu;
    SET_GPR_U32(ctx, 31, 0x3C63D4u);
    ctx->pc = 0x3C63D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C63CCu;
    // 0x3c63d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C63CCu, 0x3C63D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C63D4u;
label_3c63d4:
    // 0x3c63d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c63d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c63d8: 0xc0f5040  jal         func_3D4100
    ctx->pc = 0x3C63D8u;
    SET_GPR_U32(ctx, 31, 0x3C63E0u);
    ctx->pc = 0x3C63DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C63D8u;
    // 0x3c63dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4100u, 0x3C63D8u, 0x3C63E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C63E0u;
label_3c63e0:
    // 0x3c63e0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3c63e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c63e4: 0xc0f50f4  jal         func_3D43D0
    ctx->pc = 0x3C63E4u;
    SET_GPR_U32(ctx, 31, 0x3C63ECu);
    ctx->pc = 0x3C63E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C63E4u;
    // 0x3c63e8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D43D0u, 0x3C63E4u, 0x3C63ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C63ECu;
label_3c63ec:
    // 0x3c63ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c63ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c63f0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3c63f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c63f4: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C63F4u;
    SET_GPR_U32(ctx, 31, 0x3C63FCu);
    ctx->pc = 0x3C63F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C63F4u;
    // 0x3c63f8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C63F4u, 0x3C63FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C63FCu;
label_3c63fc:
    // 0x3c63fc: 0x3c03fff9  lui         $v1, 0xFFF9
    ctx->pc = 0x3c63fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65529 << 16));
    // 0x3c6400: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c6400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6404: 0x3463eb86  ori         $v1, $v1, 0xEB86
    ctx->pc = 0x3c6404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60294);
    // 0x3c6408: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c6408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c640c: 0x263a021  addu        $s4, $s3, $v1
    ctx->pc = 0x3c640cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3c6410: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C6410u;
    SET_GPR_U32(ctx, 31, 0x3C6418u);
    ctx->pc = 0x3C6414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6410u;
    // 0x3c6414: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C6410u, 0x3C6418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6418u;
label_3c6418:
    // 0x3c6418: 0x3c100006  lui         $s0, 0x6
    ctx->pc = 0x3c6418u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)6 << 16));
    // 0x3c641c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c641cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6420: 0x3610b851  ori         $s0, $s0, 0xB851
    ctx->pc = 0x3c6420u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)47185);
    // 0x3c6424: 0x3405ff0e  ori         $a1, $zero, 0xFF0E
    ctx->pc = 0x3c6424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65294);
    // 0x3c6428: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3c6428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3c642c: 0x34a5d04e  ori         $a1, $a1, 0xD04E
    ctx->pc = 0x3c642cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53326);
    // 0x3c6430: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c6430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c6434: 0x34a583c6  ori         $a1, $a1, 0x83C6
    ctx->pc = 0x3c6434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33734);
    // 0x3c6438: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3c6438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3c643c: 0x34a5069f  ori         $a1, $a1, 0x69F
    ctx->pc = 0x3c643cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1695);
    // 0x3c6440: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x3c6440u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x3c6444: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C6444u;
    SET_GPR_U32(ctx, 31, 0x3C644Cu);
    ctx->pc = 0x3C6448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6444u;
    // 0x3c6448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C6444u, 0x3C644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C644Cu;
label_3c644c:
    // 0x3c644c: 0x290a025  or          $s4, $s4, $s0
    ctx->pc = 0x3c644cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 16));
    // 0x3c6450: 0x3405ff31  ori         $a1, $zero, 0xFF31
    ctx->pc = 0x3c6450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65329);
    // 0x3c6454: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c6454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c6458: 0x34a5c714  ori         $a1, $a1, 0xC714
    ctx->pc = 0x3c6458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50964);
    // 0x3c645c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3c645cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3c6460: 0x34a5ec73  ori         $a1, $a1, 0xEC73
    ctx->pc = 0x3c6460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60531);
    // 0x3c6464: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3c6464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3c6468: 0x34a518af  ori         $a1, $a1, 0x18AF
    ctx->pc = 0x3c6468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6319);
    // 0x3c646c: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C646Cu;
    SET_GPR_U32(ctx, 31, 0x3C6474u);
    ctx->pc = 0x3C6470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C646Cu;
    // 0x3c6470: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C646Cu, 0x3C6474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6474u;
label_3c6474:
    // 0x3c6474: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c6474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6478: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C6478u;
    SET_GPR_U32(ctx, 31, 0x3C6480u);
    ctx->pc = 0x3C647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6478u;
    // 0x3c647c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C6478u, 0x3C6480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6480u;
label_3c6480:
    // 0x3c6480: 0x3405ff66  ori         $a1, $zero, 0xFF66
    ctx->pc = 0x3c6480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65382);
    // 0x3c6484: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3c6484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3c6488: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x3c6488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x3c648c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c648cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c6490: 0x34a5ccbf  ori         $a1, $a1, 0xCCBF
    ctx->pc = 0x3c6490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52415);
    // 0x3c6494: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3c6494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3c6498: 0x34a51a04  ori         $a1, $a1, 0x1A04
    ctx->pc = 0x3c6498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6660);
    // 0x3c649c: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C649Cu;
    SET_GPR_U32(ctx, 31, 0x3C64A4u);
    ctx->pc = 0x3C64A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C649Cu;
    // 0x3c64a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C649Cu, 0x3C64A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C64A4u;
label_3c64a4:
    // 0x3c64a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c64a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c64a8: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C64A8u;
    SET_GPR_U32(ctx, 31, 0x3C64B0u);
    ctx->pc = 0x3C64ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C64A8u;
    // 0x3c64ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C64A8u, 0x3C64B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C64B0u;
label_3c64b0:
    // 0x3c64b0: 0x3405ff0b  ori         $a1, $zero, 0xFF0B
    ctx->pc = 0x3c64b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65291);
    // 0x3c64b4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c64b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c64b8: 0x34a5c44b  ori         $a1, $a1, 0xC44B
    ctx->pc = 0x3c64b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50251);
    // 0x3c64bc: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3c64bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3c64c0: 0x34a5f9f2  ori         $a1, $a1, 0xF9F2
    ctx->pc = 0x3c64c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63986);
    // 0x3c64c4: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3c64c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3c64c8: 0x34a51244  ori         $a1, $a1, 0x1244
    ctx->pc = 0x3c64c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4676);
    // 0x3c64cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c64ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c64d0: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C64D0u;
    SET_GPR_U32(ctx, 31, 0x3C64D8u);
    ctx->pc = 0x3C64D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C64D0u;
    // 0x3c64d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C64D0u, 0x3C64D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C64D8u;
label_3c64d8:
    // 0x3c64d8: 0x3405ff1d  ori         $a1, $zero, 0xFF1D
    ctx->pc = 0x3c64d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65309);
    // 0x3c64dc: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x3c64dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x3c64e0: 0x34a5cc92  ori         $a1, $a1, 0xCC92
    ctx->pc = 0x3c64e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52370);
    // 0x3c64e4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c64e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c64e8: 0x34a5d960  ori         $a1, $a1, 0xD960
    ctx->pc = 0x3c64e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55648);
    // 0x3c64ec: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x3c64ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x3c64f0: 0x34a503de  ori         $a1, $a1, 0x3DE
    ctx->pc = 0x3c64f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)990);
    // 0x3c64f4: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C64F4u;
    SET_GPR_U32(ctx, 31, 0x3C64FCu);
    ctx->pc = 0x3C64F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C64F4u;
    // 0x3c64f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C64F4u, 0x3C64FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C64FCu;
label_3c64fc:
    // 0x3c64fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c64fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6500: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C6500u;
    SET_GPR_U32(ctx, 31, 0x3C6508u);
    ctx->pc = 0x3C6504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6500u;
    // 0x3c6504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C6500u, 0x3C6508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6508u;
label_3c6508:
    // 0x3c6508: 0x3405ff49  ori         $a1, $zero, 0xFF49
    ctx->pc = 0x3c6508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65353);
    // 0x3c650c: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x3c650cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x3c6510: 0x34a59249  ori         $a1, $a1, 0x9249
    ctx->pc = 0x3c6510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37449);
    // 0x3c6514: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3c6514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3c6518: 0x34a58452  ori         $a1, $a1, 0x8452
    ctx->pc = 0x3c6518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33874);
    // 0x3c651c: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x3c651cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x3c6520: 0x34a50359  ori         $a1, $a1, 0x359
    ctx->pc = 0x3c6520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)857);
    // 0x3c6524: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C6524u;
    SET_GPR_U32(ctx, 31, 0x3C652Cu);
    ctx->pc = 0x3C6528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6524u;
    // 0x3c6528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C6524u, 0x3C652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C652Cu;
label_3c652c:
    // 0x3c652c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c652cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6530: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C6530u;
    SET_GPR_U32(ctx, 31, 0x3C6538u);
    ctx->pc = 0x3C6534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6530u;
    // 0x3c6534: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C6530u, 0x3C6538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6538u;
label_3c6538:
    // 0x3c6538: 0x3405ff95  ori         $a1, $zero, 0xFF95
    ctx->pc = 0x3c6538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65429);
    // 0x3c653c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3c653cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3c6540: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x3c6540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x3c6544: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c6544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c6548: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x3c6548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x3c654c: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3c654cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3c6550: 0x34a51593  ori         $a1, $a1, 0x1593
    ctx->pc = 0x3c6550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5523);
    // 0x3c6554: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C6554u;
    SET_GPR_U32(ctx, 31, 0x3C655Cu);
    ctx->pc = 0x3C6558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6554u;
    // 0x3c6558: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C6554u, 0x3C655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C655Cu;
label_3c655c:
    // 0x3c655c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6560: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C6560u;
    SET_GPR_U32(ctx, 31, 0x3C6568u);
    ctx->pc = 0x3C6564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6560u;
    // 0x3c6564: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C6560u, 0x3C6568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6568u;
label_3c6568:
    // 0x3c6568: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c6568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c656c: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C656Cu;
    SET_GPR_U32(ctx, 31, 0x3C6574u);
    ctx->pc = 0x3C6570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C656Cu;
    // 0x3c6570: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C656Cu, 0x3C6574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6574u;
label_3c6574:
    // 0x3c6574: 0x1a800039  blez        $s4, . + 4 + (0x39 << 2)
    ctx->pc = 0x3C6574u;
    {
        const bool branch_taken_0x3c6574 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3C6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6574u;
        // 0x3c6578: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6574) {
            ctx->pc = 0x3C665Cu;
            goto label_3c665c;
        }
    }
    ctx->pc = 0x3C657Cu;
    // 0x3c657c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3c657cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3c6580: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3c6580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3c6584: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C6584u;
    SET_GPR_U32(ctx, 31, 0x3C658Cu);
    ctx->pc = 0x3C6588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6584u;
    // 0x3c6588: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C6584u, 0x3C658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C658Cu;
label_3c658c:
    // 0x3c658c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c658cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6590: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C6590u;
    SET_GPR_U32(ctx, 31, 0x3C6598u);
    ctx->pc = 0x3C6594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6590u;
    // 0x3c6594: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C6590u, 0x3C6598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6598u;
label_3c6598:
    // 0x3c6598: 0x17c0000c  bnez        $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x3C6598u;
    {
        const bool branch_taken_0x3c6598 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6598u;
        // 0x3c659c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6598) {
            ctx->pc = 0x3C65CCu;
            goto label_3c65cc;
        }
    }
    ctx->pc = 0x3C65A0u;
    // 0x3c65a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c65a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c65a4: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C65A4u;
    SET_GPR_U32(ctx, 31, 0x3C65ACu);
    ctx->pc = 0x3C65A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C65A4u;
    // 0x3c65a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C65A4u, 0x3C65ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C65ACu;
label_3c65ac:
    // 0x3c65ac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c65acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c65b0: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C65B0u;
    SET_GPR_U32(ctx, 31, 0x3C65B8u);
    ctx->pc = 0x3C65B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C65B0u;
    // 0x3c65b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C65B0u, 0x3C65B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C65B8u;
label_3c65b8:
    // 0x3c65b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c65b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c65bc: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C65BCu;
    SET_GPR_U32(ctx, 31, 0x3C65C4u);
    ctx->pc = 0x3C65C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C65BCu;
    // 0x3c65c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C65BCu, 0x3C65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C65C4u;
label_3c65c4:
    // 0x3c65c4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3C65C4u;
    {
        const bool branch_taken_0x3c65c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C65C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C65C4u;
        // 0x3c65c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c65c4) {
            ctx->pc = 0x3C6700u;
            goto label_3c6700;
        }
    }
    ctx->pc = 0x3C65CCu;
label_3c65cc:
    // 0x3c65cc: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x3c65ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x3c65d0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c65d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c65d4: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x3c65d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x3c65d8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c65d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c65dc: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x3c65dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x3c65e0: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3c65e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3c65e4: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C65E4u;
    SET_GPR_U32(ctx, 31, 0x3C65ECu);
    ctx->pc = 0x3C65E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C65E4u;
    // 0x3c65e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C65E4u, 0x3C65ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C65ECu;
label_3c65ec:
    // 0x3c65ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c65ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c65f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c65f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c65f4: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C65F4u;
    SET_GPR_U32(ctx, 31, 0x3C65FCu);
    ctx->pc = 0x3C65F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C65F4u;
    // 0x3c65f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C65F4u, 0x3C65FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C65FCu;
label_3c65fc:
    // 0x3c65fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c65fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6600: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C6600u;
    SET_GPR_U32(ctx, 31, 0x3C6608u);
    ctx->pc = 0x3C6604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6600u;
    // 0x3c6604: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C6600u, 0x3C6608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6608u;
label_3c6608:
    // 0x3c6608: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x3c6608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x3c660c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c660cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c6610: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x3c6610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x3c6614: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c6614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c6618: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x3c6618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x3c661c: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3c661cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3c6620: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x3c6620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x3c6624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c6624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6628: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C6628u;
    SET_GPR_U32(ctx, 31, 0x3C6630u);
    ctx->pc = 0x3C662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6628u;
    // 0x3c662c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C6628u, 0x3C6630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6630u;
label_3c6630:
    // 0x3c6630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c6630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6634: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C6634u;
    SET_GPR_U32(ctx, 31, 0x3C663Cu);
    ctx->pc = 0x3C6638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6634u;
    // 0x3c6638: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C6634u, 0x3C663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C663Cu;
label_3c663c:
    // 0x3c663c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c663cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6640: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C6640u;
    SET_GPR_U32(ctx, 31, 0x3C6648u);
    ctx->pc = 0x3C6644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6640u;
    // 0x3c6644: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C6640u, 0x3C6648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6648u;
label_3c6648:
    // 0x3c6648: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c6648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c664c: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C664Cu;
    SET_GPR_U32(ctx, 31, 0x3C6654u);
    ctx->pc = 0x3C6650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C664Cu;
    // 0x3c6650: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C664Cu, 0x3C6654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6654u;
label_3c6654:
    // 0x3c6654: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3C6654u;
    {
        const bool branch_taken_0x3c6654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6654u;
        // 0x3c6658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6654) {
            ctx->pc = 0x3C6700u;
            goto label_3c6700;
        }
    }
    ctx->pc = 0x3C665Cu;
label_3c665c:
    // 0x3c665c: 0x13c00022  beqz        $fp, . + 4 + (0x22 << 2)
    ctx->pc = 0x3C665Cu;
    {
        const bool branch_taken_0x3c665c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C665Cu;
        // 0x3c6660: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c665c) {
            ctx->pc = 0x3C66E8u;
            goto label_3c66e8;
        }
    }
    ctx->pc = 0x3C6664u;
    // 0x3c6664: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x3c6664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x3c6668: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c6668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c666c: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x3c666cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x3c6670: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c6670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c6674: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x3c6674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x3c6678: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3c6678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3c667c: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C667Cu;
    SET_GPR_U32(ctx, 31, 0x3C6684u);
    ctx->pc = 0x3C6680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C667Cu;
    // 0x3c6680: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C667Cu, 0x3C6684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6684u;
label_3c6684:
    // 0x3c6684: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c6684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6688: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c6688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c668c: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C668Cu;
    SET_GPR_U32(ctx, 31, 0x3C6694u);
    ctx->pc = 0x3C6690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C668Cu;
    // 0x3c6690: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C668Cu, 0x3C6694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6694u;
label_3c6694:
    // 0x3c6694: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c6694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6698: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C6698u;
    SET_GPR_U32(ctx, 31, 0x3C66A0u);
    ctx->pc = 0x3C669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6698u;
    // 0x3c669c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C6698u, 0x3C66A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C66A0u;
label_3c66a0:
    // 0x3c66a0: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x3c66a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x3c66a4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c66a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c66a8: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x3c66a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x3c66ac: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c66acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c66b0: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x3c66b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x3c66b4: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3c66b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3c66b8: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x3c66b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x3c66bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c66bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c66c0: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C66C0u;
    SET_GPR_U32(ctx, 31, 0x3C66C8u);
    ctx->pc = 0x3C66C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C66C0u;
    // 0x3c66c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C66C0u, 0x3C66C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C66C8u;
label_3c66c8:
    // 0x3c66c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c66c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c66cc: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C66CCu;
    SET_GPR_U32(ctx, 31, 0x3C66D4u);
    ctx->pc = 0x3C66D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C66CCu;
    // 0x3c66d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C66CCu, 0x3C66D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C66D4u;
label_3c66d4:
    // 0x3c66d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c66d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c66d8: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C66D8u;
    SET_GPR_U32(ctx, 31, 0x3C66E0u);
    ctx->pc = 0x3C66DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C66D8u;
    // 0x3c66dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C66D8u, 0x3C66E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C66E0u;
label_3c66e0:
    // 0x3c66e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C66E0u;
    {
        const bool branch_taken_0x3c66e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C66E0u;
        // 0x3c66e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c66e0) {
            ctx->pc = 0x3C6700u;
            goto label_3c6700;
        }
    }
    ctx->pc = 0x3C66E8u;
label_3c66e8:
    // 0x3c66e8: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C66E8u;
    SET_GPR_U32(ctx, 31, 0x3C66F0u);
    ctx->pc = 0x3C66ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C66E8u;
    // 0x3c66ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C66E8u, 0x3C66F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C66F0u;
label_3c66f0:
    // 0x3c66f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c66f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c66f4: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C66F4u;
    SET_GPR_U32(ctx, 31, 0x3C66FCu);
    ctx->pc = 0x3C66F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C66F4u;
    // 0x3c66f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C66F4u, 0x3C66FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C66FCu;
label_3c66fc:
    // 0x3c66fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c66fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c6700:
    // 0x3c6700: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c6700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c6704:
    // 0x3c6704: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C6704u;
    SET_GPR_U32(ctx, 31, 0x3C670Cu);
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C6704u, 0x3C670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C670Cu;
label_3c670c:
    // 0x3c670c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3c670cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c6710:
    // 0x3c6710: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3c6710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c6714: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3c6714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c6718: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3c6718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c671c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c671cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c6720: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3c6720u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c6724: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3c6724u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c6728: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3c6728u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c672c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3c672cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c6730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c6730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c6734: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6734u;
        // 0x3c6738: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C673Cu;
    // 0x3c673c: 0x0  nop
    ctx->pc = 0x3c673cu;
    // NOP
    ctx->pc = 0x3c6740u;
}
