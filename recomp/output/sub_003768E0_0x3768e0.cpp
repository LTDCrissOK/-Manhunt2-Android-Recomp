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

// Function: sub_003768E0
// Address: 0x3768e0 - 0x377338
void sub_003768E0_0x3768e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003768E0_0x3768e0");
#endif

    switch (ctx->pc) {
        case 0x37692cu: goto label_37692c;
        case 0x376954u: goto label_376954;
        case 0x37698cu: goto label_37698c;
        case 0x3769a8u: goto label_3769a8;
        case 0x3769d0u: goto label_3769d0;
        case 0x376a18u: goto label_376a18;
        case 0x376a3cu: goto label_376a3c;
        case 0x376a5cu: goto label_376a5c;
        case 0x376aa4u: goto label_376aa4;
        case 0x376b1cu: goto label_376b1c;
        case 0x376b34u: goto label_376b34;
        case 0x376b50u: goto label_376b50;
        case 0x376b84u: goto label_376b84;
        case 0x376ba8u: goto label_376ba8;
        case 0x376bd8u: goto label_376bd8;
        case 0x376c40u: goto label_376c40;
        case 0x376c64u: goto label_376c64;
        case 0x376cacu: goto label_376cac;
        case 0x376cd0u: goto label_376cd0;
        case 0x376d10u: goto label_376d10;
        case 0x376d34u: goto label_376d34;
        case 0x376d7cu: goto label_376d7c;
        case 0x376da0u: goto label_376da0;
        case 0x376decu: goto label_376dec;
        case 0x376e04u: goto label_376e04;
        case 0x376e5cu: goto label_376e5c;
        case 0x376e6cu: goto label_376e6c;
        case 0x376e80u: goto label_376e80;
        case 0x376e8cu: goto label_376e8c;
        case 0x376eb4u: goto label_376eb4;
        case 0x376f1cu: goto label_376f1c;
        case 0x376f2cu: goto label_376f2c;
        case 0x376f40u: goto label_376f40;
        case 0x376f4cu: goto label_376f4c;
        case 0x376f70u: goto label_376f70;
        case 0x376fb4u: goto label_376fb4;
        case 0x376fccu: goto label_376fcc;
        case 0x377004u: goto label_377004;
        case 0x37702cu: goto label_37702c;
        case 0x377080u: goto label_377080;
        case 0x377090u: goto label_377090;
        case 0x3770a4u: goto label_3770a4;
        case 0x3770f4u: goto label_3770f4;
        case 0x377180u: goto label_377180;
        case 0x3771e4u: goto label_3771e4;
        case 0x377228u: goto label_377228;
        case 0x37724cu: goto label_37724c;
        case 0x377290u: goto label_377290;
        case 0x3772acu: goto label_3772ac;
        case 0x3772c8u: goto label_3772c8;
        case 0x3772e4u: goto label_3772e4;
        default: break;
    }

    ctx->pc = 0x3768e0u;

    // 0x3768e0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3768e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3768e4: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3768e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3768e8: 0x8c62cd00  lw          $v0, -0x3300($v1)
    ctx->pc = 0x3768e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x3768ec: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x3768ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x3768f0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3768f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3768f4: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x3768f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3768f8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x3768f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x3768fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3768fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x376900: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x376900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x376904: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x376904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x376908: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x376908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x37690c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x37690cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x376910: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x376910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x376914: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x376914u;
    {
        const bool branch_taken_0x376914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376914u;
        // 0x376918: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376914) {
            ctx->pc = 0x37698Cu;
            goto label_37698c;
        }
    }
    ctx->pc = 0x37691Cu;
    // 0x37691c: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x37691cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x376920: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x376920u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x376924: 0xc0dfe90  jal         func_37FA40
    ctx->pc = 0x376924u;
    SET_GPR_U32(ctx, 31, 0x37692Cu);
    ctx->pc = 0x376928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376924u;
    // 0x376928: 0x8e44cd04  lw          $a0, -0x32FC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FA40u, 0x376924u, 0x37692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37692Cu;
label_37692c:
    // 0x37692c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37692cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376930: 0x2604f910  addiu       $a0, $s0, -0x6F0
    ctx->pc = 0x376930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x376934: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x376934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x376938: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x376938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37693c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x37693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x376940: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x376940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x376944: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x376944u;
    {
        const bool branch_taken_0x376944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376944u;
        // 0x376948: 0x8e02f910  lw          $v0, -0x6F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376944) {
            ctx->pc = 0x376958u;
            goto label_376958;
        }
    }
    ctx->pc = 0x37694Cu;
    // 0x37694c: 0xc0dc442  jal         func_371108
    ctx->pc = 0x37694Cu;
    SET_GPR_U32(ctx, 31, 0x376954u);
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x37694Cu, 0x376954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376954u;
label_376954:
    // 0x376954: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x376954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
label_376958:
    // 0x376958: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x376958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x37695c: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x37695cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x376960: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x376960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x376964: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x376964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x376968: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x376968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x37696c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x37696cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x376970: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x376970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x376974: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x376974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x376978: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x376978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x37697c: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x37697cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x376980: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x376980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x376984: 0xc0dffe2  jal         func_37FF88
    ctx->pc = 0x376984u;
    SET_GPR_U32(ctx, 31, 0x37698Cu);
    ctx->pc = 0x376988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376984u;
    // 0x376988: 0x8e44cd04  lw          $a0, -0x32FC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FF88u, 0x376984u, 0x37698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37698Cu;
label_37698c:
    // 0x37698c: 0x8ec2cd00  lw          $v0, -0x3300($s6)
    ctx->pc = 0x37698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
    // 0x376990: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x376990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x376994: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x376994u;
    {
        const bool branch_taken_0x376994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376994u;
        // 0x376998: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376994) {
            ctx->pc = 0x376A00u;
            goto label_376a00;
        }
    }
    ctx->pc = 0x37699Cu;
    // 0x37699c: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x37699cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x3769a0: 0xc0df66c  jal         func_37D9B0
    ctx->pc = 0x3769A0u;
    SET_GPR_U32(ctx, 31, 0x3769A8u);
    ctx->pc = 0x3769A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3769A0u;
    // 0x3769a4: 0x8c44cd08  lw          $a0, -0x32F8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D9B0u, 0x3769A0u, 0x3769A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3769A8u;
label_3769a8:
    // 0x3769a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3769a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3769ac: 0x2604f910  addiu       $a0, $s0, -0x6F0
    ctx->pc = 0x3769acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x3769b0: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x3769b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x3769b4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3769b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3769b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3769b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3769bc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3769bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3769c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3769C0u;
    {
        const bool branch_taken_0x3769c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3769C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769C0u;
        // 0x3769c4: 0x8e02f910  lw          $v0, -0x6F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3769c0) {
            ctx->pc = 0x3769D4u;
            goto label_3769d4;
        }
    }
    ctx->pc = 0x3769C8u;
    // 0x3769c8: 0xc0dc442  jal         func_371108
    ctx->pc = 0x3769C8u;
    SET_GPR_U32(ctx, 31, 0x3769D0u);
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x3769C8u, 0x3769D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3769D0u;
label_3769d0:
    // 0x3769d0: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x3769d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
label_3769d4:
    // 0x3769d4: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x3769d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3769d8: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x3769d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x3769dc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3769dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3769e0: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x3769e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x3769e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3769e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3769e8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x3769e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x3769ec: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3769ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3769f0: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x3769f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x3769f4: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x3769f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3769f8: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x3769f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x3769fc: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x3769fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
label_376a00:
    // 0x376a00: 0x8ec2cd00  lw          $v0, -0x3300($s6)
    ctx->pc = 0x376a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
    // 0x376a04: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x376a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x376a08: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x376A08u;
    {
        const bool branch_taken_0x376a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A08u;
        // 0x376a0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376a08) {
            ctx->pc = 0x376B1Cu;
            goto label_376b1c;
        }
    }
    ctx->pc = 0x376A10u;
    // 0x376a10: 0xc0df578  jal         func_37D5E0
    ctx->pc = 0x376A10u;
    SET_GPR_U32(ctx, 31, 0x376A18u);
    ctx->pc = 0x376A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376A10u;
    // 0x376a14: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D5E0u, 0x376A10u, 0x376A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A18u;
label_376a18:
    // 0x376a18: 0x2611f910  addiu       $s1, $s0, -0x6F0
    ctx->pc = 0x376a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x376a1c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x376a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x376a20: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x376a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x376a24: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x376a24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x376a28: 0x8c65cd0c  lw          $a1, -0x32F4($v1)
    ctx->pc = 0x376a28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FCD0Cu));
    // 0x376a2c: 0x8c44cd04  lw          $a0, -0x32FC($v0)
    ctx->pc = 0x376a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FCD04u));
    // 0x376a30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x376a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376a34: 0xc0dffd6  jal         func_37FF58
    ctx->pc = 0x376A34u;
    SET_GPR_U32(ctx, 31, 0x376A3Cu);
    ctx->pc = 0x376A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376A34u;
    // 0x376a38: 0x8d07cd10  lw          $a3, -0x32F0($t0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294954256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FF58u, 0x376A34u, 0x376A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A3Cu;
label_376a3c:
    // 0x376a3c: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x376a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x376a40: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x376a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x376a44: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x376a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x376a48: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x376a48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x376a4c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x376A4Cu;
    {
        const bool branch_taken_0x376a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x376A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A4Cu;
        // 0x376a50: 0x8e02f910  lw          $v0, -0x6F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376a4c) {
            ctx->pc = 0x376A60u;
            goto label_376a60;
        }
    }
    ctx->pc = 0x376A54u;
    // 0x376a54: 0xc0dc442  jal         func_371108
    ctx->pc = 0x376A54u;
    SET_GPR_U32(ctx, 31, 0x376A5Cu);
    ctx->pc = 0x376A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376A54u;
    // 0x376a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x376A54u, 0x376A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A5Cu;
label_376a5c:
    // 0x376a5c: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x376a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
label_376a60:
    // 0x376a60: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x376a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x376a64: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x376a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x376a68: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x376a68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x376a6c: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x376a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x376a70: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x376a70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x376a74: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x376a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x376a78: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x376a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x376a7c: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x376a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x376a80: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x376a80u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x376a84: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x376a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x376a88: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x376a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x376a8c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x376a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x376a90: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x376a90u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x376a94: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x376A94u;
    {
        const bool branch_taken_0x376a94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x376A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A94u;
        // 0x376a98: 0x8e03f910  lw          $v1, -0x6F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376a94) {
            ctx->pc = 0x376AA8u;
            goto label_376aa8;
        }
    }
    ctx->pc = 0x376A9Cu;
    // 0x376a9c: 0xc0dc442  jal         func_371108
    ctx->pc = 0x376A9Cu;
    SET_GPR_U32(ctx, 31, 0x376AA4u);
    ctx->pc = 0x376AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376A9Cu;
    // 0x376aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x376A9Cu, 0x376AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376AA4u;
label_376aa4:
    // 0x376aa4: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x376aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
label_376aa8:
    // 0x376aa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x376aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376aac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x376aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376ab0: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x376ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x376ab4: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x376ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x376ab8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x376ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x376abc: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x376abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x376ac0: 0x6ba6000f  ldl         $a2, 0xF($sp)
    ctx->pc = 0x376ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x376ac4: 0x6fa60008  ldr         $a2, 0x8($sp)
    ctx->pc = 0x376ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x376ac8: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x376ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x376acc: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x376accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x376ad0: 0x6ba8001f  ldl         $t0, 0x1F($sp)
    ctx->pc = 0x376ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x376ad4: 0x6fa80018  ldr         $t0, 0x18($sp)
    ctx->pc = 0x376ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x376ad8: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x376ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376adc: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x376adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376ae0: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x376ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376ae4: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x376ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376ae8: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x376ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376aec: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x376aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376af0: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x376af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376af4: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x376af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376af8: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x376af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x376afc: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x376afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x376b00: 0x6ba6002f  ldl         $a2, 0x2F($sp)
    ctx->pc = 0x376b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x376b04: 0x6fa60028  ldr         $a2, 0x28($sp)
    ctx->pc = 0x376b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x376b08: 0xb0620027  sdl         $v0, 0x27($v1)
    ctx->pc = 0x376b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376b0c: 0xb4620020  sdr         $v0, 0x20($v1)
    ctx->pc = 0x376b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376b10: 0xb066002f  sdl         $a2, 0x2F($v1)
    ctx->pc = 0x376b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376b14: 0xc0df57a  jal         func_37D5E8
    ctx->pc = 0x376B14u;
    SET_GPR_U32(ctx, 31, 0x376B1Cu);
    ctx->pc = 0x376B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376B14u;
    // 0x376b18: 0xb4660028  sdr         $a2, 0x28($v1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D5E8u, 0x376B14u, 0x376B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B1Cu;
label_376b1c:
    // 0x376b1c: 0x8ec3cd00  lw          $v1, -0x3300($s6)
    ctx->pc = 0x376b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
    // 0x376b20: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x376b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x376b24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x376B24u;
    {
        const bool branch_taken_0x376b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376B24u;
        // 0x376b28: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376b24) {
            ctx->pc = 0x376B3Cu;
            goto label_376b3c;
        }
    }
    ctx->pc = 0x376B2Cu;
    // 0x376b2c: 0xc0e0004  jal         func_380010
    ctx->pc = 0x376B2Cu;
    SET_GPR_U32(ctx, 31, 0x376B34u);
    ctx->pc = 0x376B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376B2Cu;
    // 0x376b30: 0x8c44cd04  lw          $a0, -0x32FC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380010u, 0x376B2Cu, 0x376B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B34u;
label_376b34:
    // 0x376b34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x376B34u;
    {
        const bool branch_taken_0x376b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376B34u;
        // 0x376b38: 0x8ec4cd00  lw          $a0, -0x3300($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376b34) {
            ctx->pc = 0x376B54u;
            goto label_376b54;
        }
    }
    ctx->pc = 0x376B3Cu;
label_376b3c:
    // 0x376b3c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x376b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x376b40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x376B40u;
    {
        const bool branch_taken_0x376b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376B40u;
        // 0x376b44: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376b40) {
            ctx->pc = 0x376B50u;
            goto label_376b50;
        }
    }
    ctx->pc = 0x376B48u;
    // 0x376b48: 0xc0e0028  jal         func_3800A0
    ctx->pc = 0x376B48u;
    SET_GPR_U32(ctx, 31, 0x376B50u);
    ctx->pc = 0x376B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376B48u;
    // 0x376b4c: 0x8c44cd04  lw          $a0, -0x32FC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3800A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3800A0u, 0x376B48u, 0x376B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B50u;
label_376b50:
    // 0x376b50: 0x8ec4cd00  lw          $a0, -0x3300($s6)
    ctx->pc = 0x376b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
label_376b54:
    // 0x376b54: 0x30820011  andi        $v0, $a0, 0x11
    ctx->pc = 0x376b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)17);
    // 0x376b58: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x376B58u;
    {
        const bool branch_taken_0x376b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376B58u;
        // 0x376b5c: 0x30830600  andi        $v1, $a0, 0x600 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1536);
        ctx->in_delay_slot = false;
        if (branch_taken_0x376b58) {
            ctx->pc = 0x376C08u;
            goto label_376c08;
        }
    }
    ctx->pc = 0x376B60u;
    // 0x376b60: 0x24020600  addiu       $v0, $zero, 0x600
    ctx->pc = 0x376b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x376b64: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x376B64u;
    {
        const bool branch_taken_0x376b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x376B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376B64u;
        // 0x376b68: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x376b64) {
            ctx->pc = 0x376C08u;
            goto label_376c08;
        }
    }
    ctx->pc = 0x376B6Cu;
    // 0x376b6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x376b6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x376B70u;
    {
        const bool branch_taken_0x376b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376B70u;
        // 0x376b74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376b70) {
            ctx->pc = 0x376B8Cu;
            goto label_376b8c;
        }
    }
    ctx->pc = 0x376B78u;
    // 0x376b78: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x376b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x376b7c: 0xc0dde56  jal         func_377958
    ctx->pc = 0x376B7Cu;
    SET_GPR_U32(ctx, 31, 0x376B84u);
    ctx->pc = 0x376B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376B7Cu;
    // 0x376b80: 0x24847db0  addiu       $a0, $a0, 0x7DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x376B7Cu, 0x376B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B84u;
label_376b84:
    // 0x376b84: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x376b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
    // 0x376b88: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x376b88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_376b8c:
    // 0x376b8c: 0x8ec2cd00  lw          $v0, -0x3300($s6)
    ctx->pc = 0x376b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
    // 0x376b90: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x376b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x376b94: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x376B94u;
    {
        const bool branch_taken_0x376b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376B94u;
        // 0x376b98: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376b94) {
            ctx->pc = 0x376BB4u;
            goto label_376bb4;
        }
    }
    ctx->pc = 0x376B9Cu;
    // 0x376b9c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x376b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x376ba0: 0xc0dde56  jal         func_377958
    ctx->pc = 0x376BA0u;
    SET_GPR_U32(ctx, 31, 0x376BA8u);
    ctx->pc = 0x376BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376BA0u;
    // 0x376ba4: 0x24847c58  addiu       $a0, $a0, 0x7C58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x376BA0u, 0x376BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376BA8u;
label_376ba8:
    // 0x376ba8: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x376ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
    // 0x376bac: 0x439025  or          $s2, $v0, $v1
    ctx->pc = 0x376bacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x376bb0: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x376bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
label_376bb4:
    // 0x376bb4: 0x2604f910  addiu       $a0, $s0, -0x6F0
    ctx->pc = 0x376bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x376bb8: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x376bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x376bbc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x376bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x376bc0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x376bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x376bc4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x376bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x376bc8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x376BC8u;
    {
        const bool branch_taken_0x376bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376BC8u;
        // 0x376bcc: 0x8e03f910  lw          $v1, -0x6F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376bc8) {
            ctx->pc = 0x376BDCu;
            goto label_376bdc;
        }
    }
    ctx->pc = 0x376BD0u;
    // 0x376bd0: 0xc0dc442  jal         func_371108
    ctx->pc = 0x376BD0u;
    SET_GPR_U32(ctx, 31, 0x376BD8u);
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x376BD0u, 0x376BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376BD8u;
label_376bd8:
    // 0x376bd8: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x376bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
label_376bdc:
    // 0x376bdc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x376bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x376be0: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x376be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x376be4: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x376be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x376be8: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x376be8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x376bec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x376becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x376bf0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x376bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x376bf4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x376bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x376bf8: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x376bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x376bfc: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x376bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x376c00: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x376c00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x376c04: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x376c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
label_376c08:
    // 0x376c08: 0x8ec2cd00  lw          $v0, -0x3300($s6)
    ctx->pc = 0x376c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
    // 0x376c0c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x376c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x376c10: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x376C10u;
    {
        const bool branch_taken_0x376c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376C10u;
        // 0x376c14: 0x3c150048  lui         $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376c10) {
            ctx->pc = 0x376D5Cu;
            goto label_376d5c;
        }
    }
    ctx->pc = 0x376C18u;
    // 0x376c18: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x376c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x376c1c: 0x8ea22d54  lw          $v0, 0x2D54($s5)
    ctx->pc = 0x376c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11604)));
    // 0x376c20: 0x24746018  addiu       $s4, $v1, 0x6018
    ctx->pc = 0x376c20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 24600));
    // 0x376c24: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x376c24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x376c28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x376c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x376c2c: 0x2612f910  addiu       $s2, $s0, -0x6F0
    ctx->pc = 0x376c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x376c30: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x376c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x376c34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x376c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x376c38: 0xc0dedae  jal         func_37B6B8
    ctx->pc = 0x376C38u;
    SET_GPR_U32(ctx, 31, 0x376C40u);
    ctx->pc = 0x376C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376C38u;
    // 0x376c3c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6B8u, 0x376C38u, 0x376C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376C40u;
label_376c40:
    // 0x376c40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x376c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c44: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x376c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x376c48: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x376c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x376c4c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x376c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x376c50: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x376c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x376c54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x376C54u;
    {
        const bool branch_taken_0x376c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376C54u;
        // 0x376c58: 0x8e02f910  lw          $v0, -0x6F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376c54) {
            ctx->pc = 0x376C68u;
            goto label_376c68;
        }
    }
    ctx->pc = 0x376C5Cu;
    // 0x376c5c: 0xc0dc442  jal         func_371108
    ctx->pc = 0x376C5Cu;
    SET_GPR_U32(ctx, 31, 0x376C64u);
    ctx->pc = 0x376C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376C5Cu;
    // 0x376c60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x376C5Cu, 0x376C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376C64u;
label_376c64:
    // 0x376c64: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x376c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
label_376c68:
    // 0x376c68: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x376c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x376c6c: 0x3c135000  lui         $s3, 0x5000
    ctx->pc = 0x376c6cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)20480 << 16));
    // 0x376c70: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x376c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x376c74: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x376c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x376c78: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x376c78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c7c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x376c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x376c80: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x376c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x376c84: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x376c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x376c88: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x376c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x376c8c: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x376c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x376c90: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x376c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x376c94: 0x8ea22d54  lw          $v0, 0x2D54($s5)
    ctx->pc = 0x376c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11604)));
    // 0x376c98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x376c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x376c9c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x376c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x376ca0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x376ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x376ca4: 0xc0dedae  jal         func_37B6B8
    ctx->pc = 0x376CA4u;
    SET_GPR_U32(ctx, 31, 0x376CACu);
    ctx->pc = 0x376CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376CA4u;
    // 0x376ca8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6B8u, 0x376CA4u, 0x376CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376CACu;
label_376cac:
    // 0x376cac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x376cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376cb0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x376cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x376cb4: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x376cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x376cb8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x376cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x376cbc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x376cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x376cc0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x376CC0u;
    {
        const bool branch_taken_0x376cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376CC0u;
        // 0x376cc4: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376cc0) {
            ctx->pc = 0x376CD4u;
            goto label_376cd4;
        }
    }
    ctx->pc = 0x376CC8u;
    // 0x376cc8: 0xc0dc442  jal         func_371108
    ctx->pc = 0x376CC8u;
    SET_GPR_U32(ctx, 31, 0x376CD0u);
    ctx->pc = 0x376CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376CC8u;
    // 0x376ccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x376CC8u, 0x376CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376CD0u;
label_376cd0:
    // 0x376cd0: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x376cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_376cd4:
    // 0x376cd4: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x376cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x376cd8: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x376cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x376cdc: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x376cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x376ce0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x376ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x376ce4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x376ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x376ce8: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x376ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x376cec: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x376cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x376cf0: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x376cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x376cf4: 0xae04f910  sw          $a0, -0x6F0($s0)
    ctx->pc = 0x376cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 4));
    // 0x376cf8: 0x8ea22d54  lw          $v0, 0x2D54($s5)
    ctx->pc = 0x376cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11604)));
    // 0x376cfc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x376cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x376d00: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x376d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x376d04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x376d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x376d08: 0xc0dedae  jal         func_37B6B8
    ctx->pc = 0x376D08u;
    SET_GPR_U32(ctx, 31, 0x376D10u);
    ctx->pc = 0x376D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376D08u;
    // 0x376d0c: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6B8u, 0x376D08u, 0x376D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D10u;
label_376d10:
    // 0x376d10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x376d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376d14: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x376d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x376d18: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x376d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x376d1c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x376d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x376d20: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x376d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x376d24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x376D24u;
    {
        const bool branch_taken_0x376d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376D24u;
        // 0x376d28: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376d24) {
            ctx->pc = 0x376D38u;
            goto label_376d38;
        }
    }
    ctx->pc = 0x376D2Cu;
    // 0x376d2c: 0xc0dc442  jal         func_371108
    ctx->pc = 0x376D2Cu;
    SET_GPR_U32(ctx, 31, 0x376D34u);
    ctx->pc = 0x376D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376D2Cu;
    // 0x376d30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x376D2Cu, 0x376D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D34u;
label_376d34:
    // 0x376d34: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x376d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_376d38:
    // 0x376d38: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x376d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x376d3c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x376d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x376d40: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x376d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x376d44: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x376d44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x376d48: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x376d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x376d4c: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x376d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x376d50: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x376d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x376d54: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x376d54u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x376d58: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x376d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
label_376d5c:
    // 0x376d5c: 0x8ec2cd00  lw          $v0, -0x3300($s6)
    ctx->pc = 0x376d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
    // 0x376d60: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x376d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x376d64: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x376D64u;
    {
        const bool branch_taken_0x376d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376D64u;
        // 0x376d68: 0x3c040043  lui         $a0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376d64) {
            ctx->pc = 0x376E40u;
            goto label_376e40;
        }
    }
    ctx->pc = 0x376D6Cu;
    // 0x376d6c: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x376d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x376d70: 0x248453f0  addiu       $a0, $a0, 0x53F0
    ctx->pc = 0x376d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21488));
    // 0x376d74: 0xc0dde5c  jal         func_377970
    ctx->pc = 0x376D74u;
    SET_GPR_U32(ctx, 31, 0x376D7Cu);
    ctx->pc = 0x376D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376D74u;
    // 0x376d78: 0x2612f910  addiu       $s2, $s0, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377970u, 0x376D74u, 0x376D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D7Cu;
label_376d7c:
    // 0x376d7c: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x376d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x376d80: 0x3c046c05  lui         $a0, 0x6C05
    ctx->pc = 0x376d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27653 << 16));
    // 0x376d84: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x376d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x376d88: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x376d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x376d8c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x376d8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x376d90: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x376D90u;
    {
        const bool branch_taken_0x376d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x376D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376D90u;
        // 0x376d94: 0x448825  or          $s1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376d90) {
            ctx->pc = 0x376DA0u;
            goto label_376da0;
        }
    }
    ctx->pc = 0x376D98u;
    // 0x376d98: 0xc0dc442  jal         func_371108
    ctx->pc = 0x376D98u;
    SET_GPR_U32(ctx, 31, 0x376DA0u);
    ctx->pc = 0x376D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376D98u;
    // 0x376d9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x376D98u, 0x376DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376DA0u;
label_376da0:
    // 0x376da0: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x376da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x376da4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x376da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x376da8: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x376da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    // 0x376dac: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x376dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x376db0: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x376db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x376db4: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x376db4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x376db8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x376db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x376dbc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x376dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x376dc0: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x376dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x376dc4: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x376dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x376dc8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x376dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x376dcc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x376dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x376dd0: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x376dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x376dd4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x376dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x376dd8: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x376dd8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x376ddc: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x376DDCu;
    {
        const bool branch_taken_0x376ddc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x376ddc) {
            ctx->pc = 0x376DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376DDCu;
            // 0x376de0: 0x8e02f910  lw          $v0, -0x6F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376DF0u;
            goto label_376df0;
        }
    }
    ctx->pc = 0x376DE4u;
    // 0x376de4: 0xc0dc442  jal         func_371108
    ctx->pc = 0x376DE4u;
    SET_GPR_U32(ctx, 31, 0x376DECu);
    ctx->pc = 0x376DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376DE4u;
    // 0x376de8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x376DE4u, 0x376DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376DECu;
label_376dec:
    // 0x376dec: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x376decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
label_376df0:
    // 0x376df0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x376df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x376df4: 0x24636050  addiu       $v1, $v1, 0x6050
    ctx->pc = 0x376df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24656));
    // 0x376df8: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x376df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x376dfc: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x376dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x376e00: 0xae04f910  sw          $a0, -0x6F0($s0)
    ctx->pc = 0x376e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 4));
label_376e04:
    // 0x376e04: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x376e04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x376e08: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x376e08u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x376e0c: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x376e0cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x376e10: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x376e10u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x376e14: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x376e14u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x376e18: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x376e18u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x376e1c: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x376e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x376e20: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x376e20u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x376e24: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x376e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x376e28: 0x1465fff6  bne         $v1, $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x376E28u;
    {
        const bool branch_taken_0x376e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x376E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376E28u;
        // 0x376e2c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376e28) {
            ctx->pc = 0x376E04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376e04;
        }
    }
    ctx->pc = 0x376E30u;
    // 0x376e30: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x376e30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x376e34: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x376e34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x376e38: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x376e38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x376e3c: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x376e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
label_376e40:
    // 0x376e40: 0x8ec2cd00  lw          $v0, -0x3300($s6)
    ctx->pc = 0x376e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
    // 0x376e44: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x376e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x376e48: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x376E48u;
    {
        const bool branch_taken_0x376e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376E48u;
        // 0x376e4c: 0x3c040043  lui         $a0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376e48) {
            ctx->pc = 0x376EFCu;
            goto label_376efc;
        }
    }
    ctx->pc = 0x376E50u;
    // 0x376e50: 0x3c11005c  lui         $s1, 0x5C
    ctx->pc = 0x376e50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
    // 0x376e54: 0xc0dde5c  jal         func_377970
    ctx->pc = 0x376E54u;
    SET_GPR_U32(ctx, 31, 0x376E5Cu);
    ctx->pc = 0x376E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E54u;
    // 0x376e58: 0x24845160  addiu       $a0, $a0, 0x5160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377970u, 0x376E54u, 0x376E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E5Cu;
label_376e5c:
    // 0x376e5c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x376e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x376e60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x376e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376e64: 0xc0dde56  jal         func_377958
    ctx->pc = 0x376E64u;
    SET_GPR_U32(ctx, 31, 0x376E6Cu);
    ctx->pc = 0x376E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E64u;
    // 0x376e68: 0x24847e80  addiu       $a0, $a0, 0x7E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x376E64u, 0x376E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E6Cu;
label_376e6c:
    // 0x376e6c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x376e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x376e70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x376e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376e74: 0x24845c00  addiu       $a0, $a0, 0x5C00
    ctx->pc = 0x376e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23552));
    // 0x376e78: 0xc0dd126  jal         func_374498
    ctx->pc = 0x376E78u;
    SET_GPR_U32(ctx, 31, 0x376E80u);
    ctx->pc = 0x376E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E78u;
    // 0x376e7c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374498u, 0x376E78u, 0x376E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E80u;
label_376e80:
    // 0x376e80: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x376e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x376e84: 0xc0dde5c  jal         func_377970
    ctx->pc = 0x376E84u;
    SET_GPR_U32(ctx, 31, 0x376E8Cu);
    ctx->pc = 0x376E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E84u;
    // 0x376e88: 0x248454f0  addiu       $a0, $a0, 0x54F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377970u, 0x376E84u, 0x376E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E8Cu;
label_376e8c:
    // 0x376e8c: 0x2626f910  addiu       $a2, $s1, -0x6F0
    ctx->pc = 0x376e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965520));
    // 0x376e90: 0x8e23f910  lw          $v1, -0x6F0($s1)
    ctx->pc = 0x376e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965520)));
    // 0x376e94: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x376e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x376e98: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x376e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x376e9c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x376e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x376ea0: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x376ea0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x376ea4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x376EA4u;
    {
        const bool branch_taken_0x376ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x376EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376EA4u;
        // 0x376ea8: 0x448025  or          $s0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376ea4) {
            ctx->pc = 0x376EB4u;
            goto label_376eb4;
        }
    }
    ctx->pc = 0x376EACu;
    // 0x376eac: 0xc0dc442  jal         func_371108
    ctx->pc = 0x376EACu;
    SET_GPR_U32(ctx, 31, 0x376EB4u);
    ctx->pc = 0x376EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376EACu;
    // 0x376eb0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x376EACu, 0x376EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376EB4u;
label_376eb4:
    // 0x376eb4: 0x8e23f910  lw          $v1, -0x6F0($s1)
    ctx->pc = 0x376eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965520)));
    // 0x376eb8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x376eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x376ebc: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x376ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x376ec0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x376ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x376ec4: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x376ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x376ec8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x376ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x376ecc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x376eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x376ed0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x376ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x376ed4: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x376ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x376ed8: 0xae23f910  sw          $v1, -0x6F0($s1)
    ctx->pc = 0x376ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965520), GPR_U32(ctx, 3));
    // 0x376edc: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x376edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x376ee0: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x376ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x376ee4: 0x24845da0  addiu       $a0, $a0, 0x5DA0
    ctx->pc = 0x376ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23968));
    // 0x376ee8: 0xae22f910  sw          $v0, -0x6F0($s1)
    ctx->pc = 0x376ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965520), GPR_U32(ctx, 2));
    // 0x376eec: 0x24650018  addiu       $a1, $v1, 0x18
    ctx->pc = 0x376eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x376ef0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x376ef0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x655DA0u));
    // 0x376ef4: 0x7c620008  sq          $v0, 0x8($v1)
    ctx->pc = 0x376ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 8), GPR_VEC(ctx, 2));
    // 0x376ef8: 0xae25f910  sw          $a1, -0x6F0($s1)
    ctx->pc = 0x376ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965520), GPR_U32(ctx, 5));
label_376efc:
    // 0x376efc: 0x8ec2cd00  lw          $v0, -0x3300($s6)
    ctx->pc = 0x376efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
    // 0x376f00: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x376f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x376f04: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x376F04u;
    {
        const bool branch_taken_0x376f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376F04u;
        // 0x376f08: 0x3c040043  lui         $a0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376f04) {
            ctx->pc = 0x376FE8u;
            goto label_376fe8;
        }
    }
    ctx->pc = 0x376F0Cu;
    // 0x376f0c: 0x3c11005c  lui         $s1, 0x5C
    ctx->pc = 0x376f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
    // 0x376f10: 0x24845120  addiu       $a0, $a0, 0x5120
    ctx->pc = 0x376f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20768));
    // 0x376f14: 0xc0dde5c  jal         func_377970
    ctx->pc = 0x376F14u;
    SET_GPR_U32(ctx, 31, 0x376F1Cu);
    ctx->pc = 0x376F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F14u;
    // 0x376f18: 0x2632f910  addiu       $s2, $s1, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377970u, 0x376F14u, 0x376F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F1Cu;
label_376f1c:
    // 0x376f1c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x376f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x376f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x376f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376f24: 0xc0dde56  jal         func_377958
    ctx->pc = 0x376F24u;
    SET_GPR_U32(ctx, 31, 0x376F2Cu);
    ctx->pc = 0x376F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F24u;
    // 0x376f28: 0x24847e80  addiu       $a0, $a0, 0x7E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x376F24u, 0x376F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F2Cu;
label_376f2c:
    // 0x376f2c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x376f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x376f30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x376f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376f34: 0x24845bc0  addiu       $a0, $a0, 0x5BC0
    ctx->pc = 0x376f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23488));
    // 0x376f38: 0xc0dd126  jal         func_374498
    ctx->pc = 0x376F38u;
    SET_GPR_U32(ctx, 31, 0x376F40u);
    ctx->pc = 0x376F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F38u;
    // 0x376f3c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374498u, 0x376F38u, 0x376F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F40u;
label_376f40:
    // 0x376f40: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x376f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x376f44: 0xc0dde5c  jal         func_377970
    ctx->pc = 0x376F44u;
    SET_GPR_U32(ctx, 31, 0x376F4Cu);
    ctx->pc = 0x376F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F44u;
    // 0x376f48: 0x24845490  addiu       $a0, $a0, 0x5490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377970u, 0x376F44u, 0x376F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F4Cu;
label_376f4c:
    // 0x376f4c: 0x8e23f910  lw          $v1, -0x6F0($s1)
    ctx->pc = 0x376f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965520)));
    // 0x376f50: 0x3c046c06  lui         $a0, 0x6C06
    ctx->pc = 0x376f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27654 << 16));
    // 0x376f54: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x376f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x376f58: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x376f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x376f5c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x376f5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x376f60: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x376F60u;
    {
        const bool branch_taken_0x376f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x376F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376F60u;
        // 0x376f64: 0x448025  or          $s0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376f60) {
            ctx->pc = 0x376F70u;
            goto label_376f70;
        }
    }
    ctx->pc = 0x376F68u;
    // 0x376f68: 0xc0dc442  jal         func_371108
    ctx->pc = 0x376F68u;
    SET_GPR_U32(ctx, 31, 0x376F70u);
    ctx->pc = 0x376F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F68u;
    // 0x376f6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x376F68u, 0x376F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F70u;
label_376f70:
    // 0x376f70: 0x8e22f910  lw          $v0, -0x6F0($s1)
    ctx->pc = 0x376f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965520)));
    // 0x376f74: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x376f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x376f78: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x376f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x376f7c: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x376f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x376f80: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x376f80u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x376f84: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x376f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x376f88: 0xae22f910  sw          $v0, -0x6F0($s1)
    ctx->pc = 0x376f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965520), GPR_U32(ctx, 2));
    // 0x376f8c: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x376f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x376f90: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x376f90u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x376f94: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x376f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x376f98: 0xae22f910  sw          $v0, -0x6F0($s1)
    ctx->pc = 0x376f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965520), GPR_U32(ctx, 2));
    // 0x376f9c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x376f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x376fa0: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x376fa0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x376fa4: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x376FA4u;
    {
        const bool branch_taken_0x376fa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x376fa4) {
            ctx->pc = 0x376FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376FA4u;
            // 0x376fa8: 0x8e22f910  lw          $v0, -0x6F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376FB8u;
            goto label_376fb8;
        }
    }
    ctx->pc = 0x376FACu;
    // 0x376fac: 0xc0dc442  jal         func_371108
    ctx->pc = 0x376FACu;
    SET_GPR_U32(ctx, 31, 0x376FB4u);
    ctx->pc = 0x376FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376FACu;
    // 0x376fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x376FACu, 0x376FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376FB4u;
label_376fb4:
    // 0x376fb4: 0x8e22f910  lw          $v0, -0x6F0($s1)
    ctx->pc = 0x376fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965520)));
label_376fb8:
    // 0x376fb8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x376fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x376fbc: 0x24635c80  addiu       $v1, $v1, 0x5C80
    ctx->pc = 0x376fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23680));
    // 0x376fc0: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x376fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x376fc4: 0x24650060  addiu       $a1, $v1, 0x60
    ctx->pc = 0x376fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x376fc8: 0xae24f910  sw          $a0, -0x6F0($s1)
    ctx->pc = 0x376fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965520), GPR_U32(ctx, 4));
label_376fcc:
    // 0x376fcc: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x376fccu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x376fd0: 0x78640010  lq          $a0, 0x10($v1)
    ctx->pc = 0x376fd0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x376fd4: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x376fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x376fd8: 0x7c440010  sq          $a0, 0x10($v0)
    ctx->pc = 0x376fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 4));
    // 0x376fdc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x376fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x376fe0: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x376FE0u;
    {
        const bool branch_taken_0x376fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x376FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376FE0u;
        // 0x376fe4: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376fe0) {
            ctx->pc = 0x376FCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376fcc;
        }
    }
    ctx->pc = 0x376FE8u;
label_376fe8:
    // 0x376fe8: 0x8ec2cd00  lw          $v0, -0x3300($s6)
    ctx->pc = 0x376fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
    // 0x376fec: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x376fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x376ff0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x376FF0u;
    {
        const bool branch_taken_0x376ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376FF0u;
        // 0x376ff4: 0x3c040043  lui         $a0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376ff0) {
            ctx->pc = 0x3770A4u;
            goto label_3770a4;
        }
    }
    ctx->pc = 0x376FF8u;
    // 0x376ff8: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x376ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x376ffc: 0xc0dde5c  jal         func_377970
    ctx->pc = 0x376FFCu;
    SET_GPR_U32(ctx, 31, 0x377004u);
    ctx->pc = 0x377000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376FFCu;
    // 0x377000: 0x248452a0  addiu       $a0, $a0, 0x52A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377970u, 0x376FFCu, 0x377004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377004u;
label_377004:
    // 0x377004: 0x2606f910  addiu       $a2, $s0, -0x6F0
    ctx->pc = 0x377004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x377008: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x377008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x37700c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x37700cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x377010: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x377010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x377014: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x377014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x377018: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x377018u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x37701c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37701Cu;
    {
        const bool branch_taken_0x37701c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x377020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37701Cu;
        // 0x377020: 0x448825  or          $s1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37701c) {
            ctx->pc = 0x37702Cu;
            goto label_37702c;
        }
    }
    ctx->pc = 0x377024u;
    // 0x377024: 0xc0dc442  jal         func_371108
    ctx->pc = 0x377024u;
    SET_GPR_U32(ctx, 31, 0x37702Cu);
    ctx->pc = 0x377028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377024u;
    // 0x377028: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x377024u, 0x37702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37702Cu;
label_37702c:
    // 0x37702c: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x37702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x377030: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x377030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x377034: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x377034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x377038: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x377038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x37703c: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x37703cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x377040: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x377040u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x377044: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x377044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x377048: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x377048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x37704c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x37704cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x377050: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x377050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x377054: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x377054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x377058: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x377058u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x37705c: 0x24845c70  addiu       $a0, $a0, 0x5C70
    ctx->pc = 0x37705cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23664));
    // 0x377060: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x377060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x377064: 0x24650018  addiu       $a1, $v1, 0x18
    ctx->pc = 0x377064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x377068: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x377068u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x655C70u));
    // 0x37706c: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x37706cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x377070: 0x7c620008  sq          $v0, 0x8($v1)
    ctx->pc = 0x377070u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 8), GPR_VEC(ctx, 2));
    // 0x377074: 0x248450e0  addiu       $a0, $a0, 0x50E0
    ctx->pc = 0x377074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20704));
    // 0x377078: 0xc0dde5c  jal         func_377970
    ctx->pc = 0x377078u;
    SET_GPR_U32(ctx, 31, 0x377080u);
    ctx->pc = 0x37707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377078u;
    // 0x37707c: 0xae05f910  sw          $a1, -0x6F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377970u, 0x377078u, 0x377080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377080u;
label_377080:
    // 0x377080: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x377080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x377084: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x377084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377088: 0xc0dde56  jal         func_377958
    ctx->pc = 0x377088u;
    SET_GPR_U32(ctx, 31, 0x377090u);
    ctx->pc = 0x37708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377088u;
    // 0x37708c: 0x24847e20  addiu       $a0, $a0, 0x7E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x377088u, 0x377090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377090u;
label_377090:
    // 0x377090: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x377090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x377094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x377094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377098: 0x24845b80  addiu       $a0, $a0, 0x5B80
    ctx->pc = 0x377098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23424));
    // 0x37709c: 0xc0dd126  jal         func_374498
    ctx->pc = 0x37709Cu;
    SET_GPR_U32(ctx, 31, 0x3770A4u);
    ctx->pc = 0x3770A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37709Cu;
    // 0x3770a0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374498u, 0x37709Cu, 0x3770A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3770A4u;
label_3770a4:
    // 0x3770a4: 0x8ec2cd00  lw          $v0, -0x3300($s6)
    ctx->pc = 0x3770a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
    // 0x3770a8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3770a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3770ac: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x3770ACu;
    {
        const bool branch_taken_0x3770ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3770B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3770ACu;
        // 0x3770b0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3770ac) {
            ctx->pc = 0x377274u;
            goto label_377274;
        }
    }
    ctx->pc = 0x3770B4u;
    // 0x3770b4: 0x8c43cd10  lw          $v1, -0x32F0($v0)
    ctx->pc = 0x3770b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954256)));
    // 0x3770b8: 0x1460006f  bnez        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x3770B8u;
    {
        const bool branch_taken_0x3770b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3770BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3770B8u;
        // 0x3770bc: 0x8ec2cd00  lw          $v0, -0x3300($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3770b8) {
            ctx->pc = 0x377278u;
            goto label_377278;
        }
    }
    ctx->pc = 0x3770C0u;
    // 0x3770c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3770c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3770c4: 0x8c51cd18  lw          $s1, -0x32E8($v0)
    ctx->pc = 0x3770c4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3FCD18u));
    // 0x3770c8: 0x1620003d  bnez        $s1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3770C8u;
    {
        const bool branch_taken_0x3770c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3770CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3770C8u;
        // 0x3770cc: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3770c8) {
            ctx->pc = 0x3771C0u;
            goto label_3771c0;
        }
    }
    ctx->pc = 0x3770D0u;
    // 0x3770d0: 0x2604f910  addiu       $a0, $s0, -0x6F0
    ctx->pc = 0x3770d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x3770d4: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x3770d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x3770d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3770d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3770dc: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x3770dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x3770e0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3770e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3770e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3770E4u;
    {
        const bool branch_taken_0x3770e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3770E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3770E4u;
        // 0x3770e8: 0x8e03f910  lw          $v1, -0x6F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3770e4) {
            ctx->pc = 0x3770F8u;
            goto label_3770f8;
        }
    }
    ctx->pc = 0x3770ECu;
    // 0x3770ec: 0xc0dc442  jal         func_371108
    ctx->pc = 0x3770ECu;
    SET_GPR_U32(ctx, 31, 0x3770F4u);
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x3770ECu, 0x3770F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3770F4u;
label_3770f4:
    // 0x3770f4: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x3770f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
label_3770f8:
    // 0x3770f8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3770f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3770fc: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x3770fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x377100: 0x3406d809  ori         $a2, $zero, 0xD809
    ctx->pc = 0x377100u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55305);
    // 0x377104: 0x631bc  dsll32      $a2, $a2, 6
    ctx->pc = 0x377104u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 6));
    // 0x377108: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x377108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x37710c: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x37710cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x377110: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x377110u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x377114: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x377114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x377118: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x377118u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x37711c: 0x24a55b40  addiu       $a1, $a1, 0x5B40
    ctx->pc = 0x37711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
    // 0x377120: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x377120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x377124: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x377124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x377128: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x377128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x37712c: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x37712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x377130: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x377130u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x377134: 0x24670018  addiu       $a3, $v1, 0x18
    ctx->pc = 0x377134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x377138: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x377138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x37713c: 0x24660028  addiu       $a2, $v1, 0x28
    ctx->pc = 0x37713cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x377140: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x377140u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x655B40u));
    // 0x377144: 0x24680038  addiu       $t0, $v1, 0x38
    ctx->pc = 0x377144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x377148: 0x24690048  addiu       $t1, $v1, 0x48
    ctx->pc = 0x377148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x37714c: 0x24847be8  addiu       $a0, $a0, 0x7BE8
    ctx->pc = 0x37714cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31720));
    // 0x377150: 0x7c620008  sq          $v0, 0x8($v1)
    ctx->pc = 0x377150u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 8), GPR_VEC(ctx, 2));
    // 0x377154: 0xae07f910  sw          $a3, -0x6F0($s0)
    ctx->pc = 0x377154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 7));
    // 0x377158: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x377158u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x655B50u));
    // 0x37715c: 0x7c620018  sq          $v0, 0x18($v1)
    ctx->pc = 0x37715cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 24), GPR_VEC(ctx, 2));
    // 0x377160: 0xae06f910  sw          $a2, -0x6F0($s0)
    ctx->pc = 0x377160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 6));
    // 0x377164: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x377164u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x655B60u));
    // 0x377168: 0x7c620028  sq          $v0, 0x28($v1)
    ctx->pc = 0x377168u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 40), GPR_VEC(ctx, 2));
    // 0x37716c: 0xae08f910  sw          $t0, -0x6F0($s0)
    ctx->pc = 0x37716cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 8));
    // 0x377170: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x377170u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x655B70u));
    // 0x377174: 0x7c620038  sq          $v0, 0x38($v1)
    ctx->pc = 0x377174u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 56), GPR_VEC(ctx, 2));
    // 0x377178: 0xc0dde56  jal         func_377958
    ctx->pc = 0x377178u;
    SET_GPR_U32(ctx, 31, 0x377180u);
    ctx->pc = 0x37717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377178u;
    // 0x37717c: 0xae09f910  sw          $t1, -0x6F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x377178u, 0x377180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377180u;
label_377180:
    // 0x377180: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x377180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x377184: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x377184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
    // 0x377188: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x377188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x37718c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37718cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x377190: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x377190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x377194: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x377194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x377198: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x377198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x37719c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x37719cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3771a0: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x3771a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3771a4: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x3771a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x3771a8: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x3771a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x3771ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3771acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3771b0: 0xae04f910  sw          $a0, -0x6F0($s0)
    ctx->pc = 0x3771b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 4));
    // 0x3771b4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3771b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3771b8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3771B8u;
    {
        const bool branch_taken_0x3771b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3771BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3771B8u;
        // 0x3771bc: 0xae05f910  sw          $a1, -0x6F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3771b8) {
            ctx->pc = 0x377274u;
            goto label_377274;
        }
    }
    ctx->pc = 0x3771C0u;
label_3771c0:
    // 0x3771c0: 0x2612f910  addiu       $s2, $s0, -0x6F0
    ctx->pc = 0x3771c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x3771c4: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x3771c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x3771c8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3771c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3771cc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3771ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3771d0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3771d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3771d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3771D4u;
    {
        const bool branch_taken_0x3771d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3771D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3771D4u;
        // 0x3771d8: 0x11183c  dsll32      $v1, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3771d4) {
            ctx->pc = 0x3771E8u;
            goto label_3771e8;
        }
    }
    ctx->pc = 0x3771DCu;
    // 0x3771dc: 0xc0dc442  jal         func_371108
    ctx->pc = 0x3771DCu;
    SET_GPR_U32(ctx, 31, 0x3771E4u);
    ctx->pc = 0x3771E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3771DCu;
    // 0x3771e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x3771DCu, 0x3771E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3771E4u;
label_3771e4:
    // 0x3771e4: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x3771e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_3771e8:
    // 0x3771e8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x3771e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x3771ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3771ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3771f0: 0x8e05f910  lw          $a1, -0x6F0($s0)
    ctx->pc = 0x3771f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x3771f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3771f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3771f8: 0x3406d809  ori         $a2, $zero, 0xD809
    ctx->pc = 0x3771f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55305);
    // 0x3771fc: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x3771fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x377200: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x377200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x377204: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x377204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x377208: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x377208u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x37720c: 0x24847be8  addiu       $a0, $a0, 0x7BE8
    ctx->pc = 0x37720cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31720));
    // 0x377210: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x377210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x377214: 0xae05f910  sw          $a1, -0x6F0($s0)
    ctx->pc = 0x377214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 5));
    // 0x377218: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x377218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x37721c: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x37721cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x377220: 0xc0dde56  jal         func_377958
    ctx->pc = 0x377220u;
    SET_GPR_U32(ctx, 31, 0x377228u);
    ctx->pc = 0x377224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377220u;
    // 0x377224: 0xae02f910  sw          $v0, -0x6F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x377220u, 0x377228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377228u;
label_377228:
    // 0x377228: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x377228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x37722c: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x37722cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
    // 0x377230: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x377230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x377234: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x377234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x377238: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x377238u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x37723c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37723Cu;
    {
        const bool branch_taken_0x37723c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x377240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37723Cu;
        // 0x377240: 0x448825  or          $s1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37723c) {
            ctx->pc = 0x37724Cu;
            goto label_37724c;
        }
    }
    ctx->pc = 0x377244u;
    // 0x377244: 0xc0dc442  jal         func_371108
    ctx->pc = 0x377244u;
    SET_GPR_U32(ctx, 31, 0x37724Cu);
    ctx->pc = 0x377248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377244u;
    // 0x377248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x377244u, 0x37724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37724Cu;
label_37724c:
    // 0x37724c: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x37724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x377250: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x377250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x377254: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x377254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x377258: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x377258u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x37725c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x37725cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x377260: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x377260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x377264: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x377264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x377268: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x377268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x37726c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x37726cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x377270: 0xae04f910  sw          $a0, -0x6F0($s0)
    ctx->pc = 0x377270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 4));
label_377274:
    // 0x377274: 0x8ec2cd00  lw          $v0, -0x3300($s6)
    ctx->pc = 0x377274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
label_377278:
    // 0x377278: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x377278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x37727c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37727Cu;
    {
        const bool branch_taken_0x37727c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37727Cu;
        // 0x377280: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37727c) {
            ctx->pc = 0x377290u;
            goto label_377290;
        }
    }
    ctx->pc = 0x377284u;
    // 0x377284: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x377284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x377288: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x377288u;
    SET_GPR_U32(ctx, 31, 0x377290u);
    ctx->pc = 0x37728Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377288u;
    // 0x37728c: 0xdc45cd40  ld          $a1, -0x32C0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294954304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x377288u, 0x377290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377290u;
label_377290:
    // 0x377290: 0x8ec2cd00  lw          $v0, -0x3300($s6)
    ctx->pc = 0x377290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
    // 0x377294: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x377294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x377298: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x377298u;
    {
        const bool branch_taken_0x377298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377298u;
        // 0x37729c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377298) {
            ctx->pc = 0x3772ACu;
            goto label_3772ac;
        }
    }
    ctx->pc = 0x3772A0u;
    // 0x3772a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3772a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3772a4: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3772A4u;
    SET_GPR_U32(ctx, 31, 0x3772ACu);
    ctx->pc = 0x3772A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3772A4u;
    // 0x3772a8: 0xdc45cd48  ld          $a1, -0x32B8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294954312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3772A4u, 0x3772ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3772ACu;
label_3772ac:
    // 0x3772ac: 0x8ec2cd00  lw          $v0, -0x3300($s6)
    ctx->pc = 0x3772acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
    // 0x3772b0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3772b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3772b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3772B4u;
    {
        const bool branch_taken_0x3772b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3772B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3772B4u;
        // 0x3772b8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3772b4) {
            ctx->pc = 0x3772C8u;
            goto label_3772c8;
        }
    }
    ctx->pc = 0x3772BCu;
    // 0x3772bc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3772bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3772c0: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3772C0u;
    SET_GPR_U32(ctx, 31, 0x3772C8u);
    ctx->pc = 0x3772C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3772C0u;
    // 0x3772c4: 0xdc45cd50  ld          $a1, -0x32B0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294954320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3772C0u, 0x3772C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3772C8u;
label_3772c8:
    // 0x3772c8: 0x8ec2cd00  lw          $v0, -0x3300($s6)
    ctx->pc = 0x3772c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
    // 0x3772cc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3772ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3772d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3772D0u;
    {
        const bool branch_taken_0x3772d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3772D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3772D0u;
        // 0x3772d4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3772d0) {
            ctx->pc = 0x3772E4u;
            goto label_3772e4;
        }
    }
    ctx->pc = 0x3772D8u;
    // 0x3772d8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x3772d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3772dc: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3772DCu;
    SET_GPR_U32(ctx, 31, 0x3772E4u);
    ctx->pc = 0x3772E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3772DCu;
    // 0x3772e0: 0xdc45cd58  ld          $a1, -0x32A8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294954328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3772DCu, 0x3772E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3772E4u;
label_3772e4:
    // 0x3772e4: 0x8ec2cd00  lw          $v0, -0x3300($s6)
    ctx->pc = 0x3772e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954240)));
    // 0x3772e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3772e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3772ec: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3772ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3772f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3772f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3772f4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x3772f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3772f8: 0xaec2cd00  sw          $v0, -0x3300($s6)
    ctx->pc = 0x3772f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294954240), GPR_U32(ctx, 2));
    // 0x3772fc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3772fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377300: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x377300u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x377304: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x377304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x377308: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x377308u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37730c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x37730cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x377310: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x377310u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x377314: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x377314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x377318: 0x3e00008  jr          $ra
    ctx->pc = 0x377318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377318u;
        // 0x37731c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377320u;
    // 0x377320: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x377320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377324: 0x0  nop
    ctx->pc = 0x377324u;
    // NOP
    // 0x377328: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x377328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x37732c: 0x0  nop
    ctx->pc = 0x37732cu;
    // NOP
    // 0x377330: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x377330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377334: 0x0  nop
    ctx->pc = 0x377334u;
    // NOP
    ctx->pc = 0x377338u;
}
