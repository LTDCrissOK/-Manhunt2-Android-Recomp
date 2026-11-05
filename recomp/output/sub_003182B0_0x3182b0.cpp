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

// Function: sub_003182B0
// Address: 0x3182b0 - 0x3183c0
void sub_003182B0_0x3182b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003182B0_0x3182b0");
#endif

    switch (ctx->pc) {
        case 0x3182f4u: goto label_3182f4;
        case 0x318308u: goto label_318308;
        case 0x318314u: goto label_318314;
        case 0x318320u: goto label_318320;
        case 0x31832cu: goto label_31832c;
        case 0x318338u: goto label_318338;
        case 0x318350u: goto label_318350;
        case 0x31835cu: goto label_31835c;
        case 0x318368u: goto label_318368;
        case 0x31837cu: goto label_31837c;
        case 0x318388u: goto label_318388;
        case 0x318390u: goto label_318390;
        case 0x31839cu: goto label_31839c;
        case 0x3183a8u: goto label_3183a8;
        default: break;
    }

    ctx->pc = 0x3182b0u;

    // 0x3182b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3182b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3182b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3182b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3182b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3182b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3182bc: 0x8c62bd44  lw          $v0, -0x42BC($v1)
    ctx->pc = 0x3182bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD44u));
    // 0x3182c0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x3182c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3182c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3182c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3182c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3182c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3182cc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3182CCu;
    {
        const bool branch_taken_0x3182cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3182D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182CCu;
        // 0x3182d0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182cc) {
            ctx->pc = 0x3183A8u;
            goto label_3183a8;
        }
    }
    ctx->pc = 0x3182D4u;
    // 0x3182d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3182d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3182d8: 0x8c42bd3c  lw          $v0, -0x42C4($v0)
    ctx->pc = 0x3182d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD3Cu));
    // 0x3182dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3182DCu;
    {
        const bool branch_taken_0x3182dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3182E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182DCu;
        // 0x3182e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182dc) {
            ctx->pc = 0x3182F8u;
            goto label_3182f8;
        }
    }
    ctx->pc = 0x3182E4u;
    // 0x3182e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3182e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3182e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3182e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3182ec: 0xc0b580e  jal         func_2D6038
    ctx->pc = 0x3182ECu;
    SET_GPR_U32(ctx, 31, 0x3182F4u);
    ctx->pc = 0x3182F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3182ECu;
    // 0x3182f0: 0x8c44bd20  lw          $a0, -0x42E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6038u, 0x3182ECu, 0x3182F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3182F4u;
label_3182f4:
    // 0x3182f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3182f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3182f8:
    // 0x3182f8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3182f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3182fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3182fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318300: 0xc0c884e  jal         func_322138
    ctx->pc = 0x318300u;
    SET_GPR_U32(ctx, 31, 0x318308u);
    ctx->pc = 0x318304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318300u;
    // 0x318304: 0x8e05bd48  lw          $a1, -0x42B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322138u, 0x318300u, 0x318308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318308u;
label_318308:
    // 0x318308: 0x8e44bd44  lw          $a0, -0x42BC($s2)
    ctx->pc = 0x318308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950212)));
    // 0x31830c: 0xc0c8848  jal         func_322120
    ctx->pc = 0x31830Cu;
    SET_GPR_U32(ctx, 31, 0x318314u);
    ctx->pc = 0x318310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31830Cu;
    // 0x318310: 0x8e05bd48  lw          $a1, -0x42B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322120u, 0x31830Cu, 0x318314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318314u;
label_318314:
    // 0x318314: 0x8e04bd48  lw          $a0, -0x42B8($s0)
    ctx->pc = 0x318314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
    // 0x318318: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x318318u;
    SET_GPR_U32(ctx, 31, 0x318320u);
    ctx->pc = 0x31831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318318u;
    // 0x31831c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x318318u, 0x318320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318320u;
label_318320:
    // 0x318320: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x318320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x318324: 0xc0dba6c  jal         func_36E9B0
    ctx->pc = 0x318324u;
    SET_GPR_U32(ctx, 31, 0x31832Cu);
    ctx->pc = 0x318328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318324u;
    // 0x318328: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E9B0u, 0x318324u, 0x31832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31832Cu;
label_31832c:
    // 0x31832c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x31832cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x318330: 0xc0dba6c  jal         func_36E9B0
    ctx->pc = 0x318330u;
    SET_GPR_U32(ctx, 31, 0x318338u);
    ctx->pc = 0x318334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318330u;
    // 0x318334: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E9B0u, 0x318330u, 0x318338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318338u;
label_318338:
    // 0x318338: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x318338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31833c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x31833cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x318340: 0x8c65bd78  lw          $a1, -0x4288($v1)
    ctx->pc = 0x318340u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD78u));
    // 0x318344: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x318344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318348: 0xc0dba1c  jal         func_36E870
    ctx->pc = 0x318348u;
    SET_GPR_U32(ctx, 31, 0x318350u);
    ctx->pc = 0x31834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318348u;
    // 0x31834c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E870u, 0x318348u, 0x318350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318350u;
label_318350:
    // 0x318350: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x318350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x318354: 0xc0db390  jal         func_36CE40
    ctx->pc = 0x318354u;
    SET_GPR_U32(ctx, 31, 0x31835Cu);
    ctx->pc = 0x318358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318354u;
    // 0x318358: 0xc44c2224  lwc1        $f12, 0x2224($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE40u, 0x318354u, 0x31835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31835Cu;
label_31835c:
    // 0x31835c: 0x8e44bd44  lw          $a0, -0x42BC($s2)
    ctx->pc = 0x31835cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950212)));
    // 0x318360: 0xc0c8918  jal         func_322460
    ctx->pc = 0x318360u;
    SET_GPR_U32(ctx, 31, 0x318368u);
    ctx->pc = 0x318364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318360u;
    // 0x318364: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322460u, 0x318360u, 0x318368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318368u;
label_318368:
    // 0x318368: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x318368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31836c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x31836cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x318370: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x318370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318374: 0xc0dba1c  jal         func_36E870
    ctx->pc = 0x318374u;
    SET_GPR_U32(ctx, 31, 0x31837Cu);
    ctx->pc = 0x318378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318374u;
    // 0x318378: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E870u, 0x318374u, 0x31837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31837Cu;
label_31837c:
    // 0x31837c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31837cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x318380: 0xc0db390  jal         func_36CE40
    ctx->pc = 0x318380u;
    SET_GPR_U32(ctx, 31, 0x318388u);
    ctx->pc = 0x36CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE40u, 0x318380u, 0x318388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318388u;
label_318388:
    // 0x318388: 0xc0c2bb8  jal         func_30AEE0
    ctx->pc = 0x318388u;
    SET_GPR_U32(ctx, 31, 0x318390u);
    ctx->pc = 0x31838Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318388u;
    // 0x31838c: 0x8e04bd48  lw          $a0, -0x42B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEE0u, 0x318388u, 0x318390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318390u;
label_318390:
    // 0x318390: 0x8e44bd44  lw          $a0, -0x42BC($s2)
    ctx->pc = 0x318390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950212)));
    // 0x318394: 0xc0c884e  jal         func_322138
    ctx->pc = 0x318394u;
    SET_GPR_U32(ctx, 31, 0x31839Cu);
    ctx->pc = 0x318398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318394u;
    // 0x318398: 0x8e05bd48  lw          $a1, -0x42B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322138u, 0x318394u, 0x31839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31839Cu;
label_31839c:
    // 0x31839c: 0x8e05bd48  lw          $a1, -0x42B8($s0)
    ctx->pc = 0x31839cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
    // 0x3183a0: 0xc0c8848  jal         func_322120
    ctx->pc = 0x3183A0u;
    SET_GPR_U32(ctx, 31, 0x3183A8u);
    ctx->pc = 0x3183A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3183A0u;
    // 0x3183a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322120u, 0x3183A0u, 0x3183A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3183A8u;
label_3183a8:
    // 0x3183a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3183a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3183ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3183acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3183b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3183b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3183b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3183b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3183b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3183B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3183BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183B8u;
        // 0x3183bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3183B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3183C0u;
}
