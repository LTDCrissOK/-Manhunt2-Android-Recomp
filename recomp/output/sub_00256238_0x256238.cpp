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

// Function: sub_00256238
// Address: 0x256238 - 0x2563d8
void sub_00256238_0x256238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256238_0x256238");
#endif

    switch (ctx->pc) {
        case 0x256238u: goto label_256238;
        case 0x25623cu: goto label_25623c;
        case 0x256240u: goto label_256240;
        case 0x256244u: goto label_256244;
        case 0x256248u: goto label_256248;
        case 0x25624cu: goto label_25624c;
        case 0x256250u: goto label_256250;
        case 0x256254u: goto label_256254;
        case 0x256258u: goto label_256258;
        case 0x25625cu: goto label_25625c;
        case 0x256260u: goto label_256260;
        case 0x256264u: goto label_256264;
        case 0x256268u: goto label_256268;
        case 0x25626cu: goto label_25626c;
        case 0x256270u: goto label_256270;
        case 0x256274u: goto label_256274;
        case 0x256278u: goto label_256278;
        case 0x25627cu: goto label_25627c;
        case 0x256280u: goto label_256280;
        case 0x256284u: goto label_256284;
        case 0x256288u: goto label_256288;
        case 0x25628cu: goto label_25628c;
        case 0x256290u: goto label_256290;
        case 0x256294u: goto label_256294;
        case 0x256298u: goto label_256298;
        case 0x25629cu: goto label_25629c;
        case 0x2562a0u: goto label_2562a0;
        case 0x2562a4u: goto label_2562a4;
        case 0x2562a8u: goto label_2562a8;
        case 0x2562acu: goto label_2562ac;
        case 0x2562b0u: goto label_2562b0;
        case 0x2562b4u: goto label_2562b4;
        case 0x2562b8u: goto label_2562b8;
        case 0x2562bcu: goto label_2562bc;
        case 0x2562c0u: goto label_2562c0;
        case 0x2562c4u: goto label_2562c4;
        case 0x2562c8u: goto label_2562c8;
        case 0x2562ccu: goto label_2562cc;
        case 0x2562d0u: goto label_2562d0;
        case 0x2562d4u: goto label_2562d4;
        case 0x2562d8u: goto label_2562d8;
        case 0x2562dcu: goto label_2562dc;
        case 0x2562e0u: goto label_2562e0;
        case 0x2562e4u: goto label_2562e4;
        case 0x2562e8u: goto label_2562e8;
        case 0x2562ecu: goto label_2562ec;
        case 0x2562f0u: goto label_2562f0;
        case 0x2562f4u: goto label_2562f4;
        case 0x2562f8u: goto label_2562f8;
        case 0x2562fcu: goto label_2562fc;
        case 0x256300u: goto label_256300;
        case 0x256304u: goto label_256304;
        case 0x256308u: goto label_256308;
        case 0x25630cu: goto label_25630c;
        case 0x256310u: goto label_256310;
        case 0x256314u: goto label_256314;
        case 0x256318u: goto label_256318;
        case 0x25631cu: goto label_25631c;
        case 0x256320u: goto label_256320;
        case 0x256324u: goto label_256324;
        case 0x256328u: goto label_256328;
        case 0x25632cu: goto label_25632c;
        case 0x256330u: goto label_256330;
        case 0x256334u: goto label_256334;
        case 0x256338u: goto label_256338;
        case 0x25633cu: goto label_25633c;
        case 0x256340u: goto label_256340;
        case 0x256344u: goto label_256344;
        case 0x256348u: goto label_256348;
        case 0x25634cu: goto label_25634c;
        case 0x256350u: goto label_256350;
        case 0x256354u: goto label_256354;
        case 0x256358u: goto label_256358;
        case 0x25635cu: goto label_25635c;
        case 0x256360u: goto label_256360;
        case 0x256364u: goto label_256364;
        case 0x256368u: goto label_256368;
        case 0x25636cu: goto label_25636c;
        case 0x256370u: goto label_256370;
        case 0x256374u: goto label_256374;
        case 0x256378u: goto label_256378;
        case 0x25637cu: goto label_25637c;
        case 0x256380u: goto label_256380;
        case 0x256384u: goto label_256384;
        case 0x256388u: goto label_256388;
        case 0x25638cu: goto label_25638c;
        case 0x256390u: goto label_256390;
        case 0x256394u: goto label_256394;
        case 0x256398u: goto label_256398;
        case 0x25639cu: goto label_25639c;
        case 0x2563a0u: goto label_2563a0;
        case 0x2563a4u: goto label_2563a4;
        case 0x2563a8u: goto label_2563a8;
        case 0x2563acu: goto label_2563ac;
        case 0x2563b0u: goto label_2563b0;
        case 0x2563b4u: goto label_2563b4;
        case 0x2563b8u: goto label_2563b8;
        case 0x2563bcu: goto label_2563bc;
        case 0x2563c0u: goto label_2563c0;
        case 0x2563c4u: goto label_2563c4;
        case 0x2563c8u: goto label_2563c8;
        case 0x2563ccu: goto label_2563cc;
        case 0x2563d0u: goto label_2563d0;
        case 0x2563d4u: goto label_2563d4;
        default: break;
    }

    ctx->pc = 0x256238u;

label_256238:
    // 0x256238: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x256238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25623c:
    // 0x25623c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25623cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_256240:
    // 0x256240: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x256240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_256244:
    // 0x256244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x256244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_256248:
    // 0x256248: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x256248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_25624c:
    // 0x25624c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25624cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_256250:
    // 0x256250: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x256250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_256254:
    // 0x256254: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x256254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256258:
    // 0x256258: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x256258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_25625c:
    // 0x25625c: 0x8c6201c0  lw          $v0, 0x1C0($v1)
    ctx->pc = 0x25625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
label_256260:
    // 0x256260: 0x40f809  jalr        $v0
label_256264:
    if (ctx->pc == 0x256264u) {
        ctx->pc = 0x256264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256260u;
        // 0x256264: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x256268u;
        goto label_256268;
    }
    ctx->pc = 0x256260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x256268u);
        ctx->pc = 0x256264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256260u;
        // 0x256264: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256260u, 0x256268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256268u;
label_256268:
    // 0x256268: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x256268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_25626c:
    // 0x25626c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25626cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256270:
    // 0x256270: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x256270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_256274:
    // 0x256274: 0x40f809  jalr        $v0
label_256278:
    if (ctx->pc == 0x256278u) {
        ctx->pc = 0x256278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256274u;
        // 0x256278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25627Cu;
        goto label_25627c;
    }
    ctx->pc = 0x256274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25627Cu);
        ctx->pc = 0x256278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256274u;
        // 0x256278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256274u, 0x25627Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25627Cu;
label_25627c:
    // 0x25627c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25627cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_256280:
    // 0x256280: 0xc095814  jal         func_256050
label_256284:
    if (ctx->pc == 0x256284u) {
        ctx->pc = 0x256284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256280u;
        // 0x256284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256288u;
        goto label_256288;
    }
    ctx->pc = 0x256280u;
    SET_GPR_U32(ctx, 31, 0x256288u);
    ctx->pc = 0x256284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256280u;
    // 0x256284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256050u, 0x256280u, 0x256288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256288u;
label_256288:
    // 0x256288: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x256288u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_25628c:
    // 0x25628c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x25628cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_256290:
    // 0x256290: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x256290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
label_256294:
    // 0x256294: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x256294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_256298:
    // 0x256298: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x256298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
label_25629c:
    // 0x25629c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x25629cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2562a0:
    // 0x2562a0: 0x73db8  dsll        $a3, $a3, 22
    ctx->pc = 0x2562a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 22);
label_2562a4:
    // 0x2562a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2562a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2562a8:
    // 0x2562a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2562a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2562ac:
    // 0x2562ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2562acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2562b0:
    // 0x2562b0: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x2562b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_2562b4:
    // 0x2562b4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2562b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2562b8:
    // 0x2562b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2562b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2562bc:
    // 0x2562bc: 0xc08fed2  jal         func_23FB48
label_2562c0:
    if (ctx->pc == 0x2562C0u) {
        ctx->pc = 0x2562C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562BCu;
        // 0x2562c0: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2562C4u;
        goto label_2562c4;
    }
    ctx->pc = 0x2562BCu;
    SET_GPR_U32(ctx, 31, 0x2562C4u);
    ctx->pc = 0x2562C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2562BCu;
    // 0x2562c0: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2562BCu, 0x2562C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2562C4u;
label_2562c4:
    // 0x2562c4: 0xc0953c0  jal         func_254F00
label_2562c8:
    if (ctx->pc == 0x2562C8u) {
        ctx->pc = 0x2562C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562C4u;
        // 0x2562c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2562CCu;
        goto label_2562cc;
    }
    ctx->pc = 0x2562C4u;
    SET_GPR_U32(ctx, 31, 0x2562CCu);
    ctx->pc = 0x2562C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2562C4u;
    // 0x2562c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F00u, 0x2562C4u, 0x2562CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2562CCu;
label_2562cc:
    // 0x2562cc: 0xc0953a6  jal         func_254E98
label_2562d0:
    if (ctx->pc == 0x2562D0u) {
        ctx->pc = 0x2562D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562CCu;
        // 0x2562d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2562D4u;
        goto label_2562d4;
    }
    ctx->pc = 0x2562CCu;
    SET_GPR_U32(ctx, 31, 0x2562D4u);
    ctx->pc = 0x2562D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2562CCu;
    // 0x2562d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E98u, 0x2562CCu, 0x2562D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2562D4u;
label_2562d4:
    // 0x2562d4: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2562d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2562d8:
    // 0x2562d8: 0xc06b85c  jal         func_1AE170
label_2562dc:
    if (ctx->pc == 0x2562DCu) {
        ctx->pc = 0x2562DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562D8u;
        // 0x2562dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2562E0u;
        goto label_2562e0;
    }
    ctx->pc = 0x2562D8u;
    SET_GPR_U32(ctx, 31, 0x2562E0u);
    ctx->pc = 0x2562DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2562D8u;
    // 0x2562dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x2562D8u, 0x2562E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2562E0u;
label_2562e0:
    // 0x2562e0: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2562e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2562e4:
    // 0x2562e4: 0xc06c546  jal         func_1B1518
label_2562e8:
    if (ctx->pc == 0x2562E8u) {
        ctx->pc = 0x2562E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562E4u;
        // 0x2562e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2562ECu;
        goto label_2562ec;
    }
    ctx->pc = 0x2562E4u;
    SET_GPR_U32(ctx, 31, 0x2562ECu);
    ctx->pc = 0x2562E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2562E4u;
    // 0x2562e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x2562E4u, 0x2562ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2562ECu;
label_2562ec:
    // 0x2562ec: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2562ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2562f0:
    // 0x2562f0: 0xc06bfc8  jal         func_1AFF20
label_2562f4:
    if (ctx->pc == 0x2562F4u) {
        ctx->pc = 0x2562F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562F0u;
        // 0x2562f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2562F8u;
        goto label_2562f8;
    }
    ctx->pc = 0x2562F0u;
    SET_GPR_U32(ctx, 31, 0x2562F8u);
    ctx->pc = 0x2562F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2562F0u;
    // 0x2562f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x2562F0u, 0x2562F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2562F8u;
label_2562f8:
    // 0x2562f8: 0xc06cdb4  jal         func_1B36D0
label_2562fc:
    if (ctx->pc == 0x2562FCu) {
        ctx->pc = 0x2562FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562F8u;
        // 0x2562fc: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256300u;
        goto label_256300;
    }
    ctx->pc = 0x2562F8u;
    SET_GPR_U32(ctx, 31, 0x256300u);
    ctx->pc = 0x2562FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2562F8u;
    // 0x2562fc: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x2562F8u, 0x256300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256300u;
label_256300:
    // 0x256300: 0x26020534  addiu       $v0, $s0, 0x534
    ctx->pc = 0x256300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1332));
label_256304:
    // 0x256304: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x256304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_256308:
    // 0x256308: 0xac4000d4  sw          $zero, 0xD4($v0)
    ctx->pc = 0x256308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
label_25630c:
    // 0x25630c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25630cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_256310:
    // 0x256310: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x256310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_256314:
    // 0x256314: 0x0  nop
    ctx->pc = 0x256314u;
    // NOP
label_256318:
    // 0x256318: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
label_25631c:
    if (ctx->pc == 0x25631Cu) {
        ctx->pc = 0x25631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256318u;
        // 0x25631c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256320u;
        goto label_256320;
    }
    ctx->pc = 0x256318u;
    {
        const bool branch_taken_0x256318 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x25631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256318u;
        // 0x25631c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256318) {
            ctx->pc = 0x256308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256308;
        }
    }
    ctx->pc = 0x256320u;
label_256320:
    // 0x256320: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x256320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_256324:
    // 0x256324: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x256324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_256328:
    // 0x256328: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x256328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25632c:
    // 0x25632c: 0xc069d3e  jal         func_1A74F8
label_256330:
    if (ctx->pc == 0x256330u) {
        ctx->pc = 0x256330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25632Cu;
        // 0x256330: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256334u;
        goto label_256334;
    }
    ctx->pc = 0x25632Cu;
    SET_GPR_U32(ctx, 31, 0x256334u);
    ctx->pc = 0x256330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25632Cu;
    // 0x256330: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A74F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A74F8u, 0x25632Cu, 0x256334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256334u;
label_256334:
    // 0x256334: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_256338:
    if (ctx->pc == 0x256338u) {
        ctx->pc = 0x256338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256334u;
        // 0x256338: 0x8e060334  lw          $a2, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25633Cu;
        goto label_25633c;
    }
    ctx->pc = 0x256334u;
    {
        const bool branch_taken_0x256334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256334) {
            ctx->pc = 0x256338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256334u;
            // 0x256338: 0x8e060334  lw          $a2, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256364u;
            goto label_256364;
        }
    }
    ctx->pc = 0x25633Cu;
label_25633c:
    // 0x25633c: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x25633cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_256340:
    // 0x256340: 0xc06b85c  jal         func_1AE170
label_256344:
    if (ctx->pc == 0x256344u) {
        ctx->pc = 0x256344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256340u;
        // 0x256344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256348u;
        goto label_256348;
    }
    ctx->pc = 0x256340u;
    SET_GPR_U32(ctx, 31, 0x256348u);
    ctx->pc = 0x256344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256340u;
    // 0x256344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x256340u, 0x256348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256348u;
label_256348:
    // 0x256348: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x256348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_25634c:
    // 0x25634c: 0xc06c546  jal         func_1B1518
label_256350:
    if (ctx->pc == 0x256350u) {
        ctx->pc = 0x256350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25634Cu;
        // 0x256350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256354u;
        goto label_256354;
    }
    ctx->pc = 0x25634Cu;
    SET_GPR_U32(ctx, 31, 0x256354u);
    ctx->pc = 0x256350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25634Cu;
    // 0x256350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x25634Cu, 0x256354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256354u;
label_256354:
    // 0x256354: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x256354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_256358:
    // 0x256358: 0xc06bfc8  jal         func_1AFF20
label_25635c:
    if (ctx->pc == 0x25635Cu) {
        ctx->pc = 0x25635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256358u;
        // 0x25635c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256360u;
        goto label_256360;
    }
    ctx->pc = 0x256358u;
    SET_GPR_U32(ctx, 31, 0x256360u);
    ctx->pc = 0x25635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256358u;
    // 0x25635c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x256358u, 0x256360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256360u;
label_256360:
    // 0x256360: 0x8e060334  lw          $a2, 0x334($s0)
    ctx->pc = 0x256360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_256364:
    // 0x256364: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x256364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_256368:
    // 0x256368: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_25636c:
    if (ctx->pc == 0x25636Cu) {
        ctx->pc = 0x25636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256368u;
        // 0x25636c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256370u;
        goto label_256370;
    }
    ctx->pc = 0x256368u;
    {
        const bool branch_taken_0x256368 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256368u;
        // 0x25636c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256368) {
            ctx->pc = 0x25639Cu;
            goto label_25639c;
        }
    }
    ctx->pc = 0x256370u;
label_256370:
    // 0x256370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x256370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256374:
    // 0x256374: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x256374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_256378:
    // 0x256378: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x256378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25637c:
    // 0x25637c: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
label_256380:
    if (ctx->pc == 0x256380u) {
        ctx->pc = 0x256380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25637Cu;
        // 0x256380: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256384u;
        goto label_256384;
    }
    ctx->pc = 0x25637Cu;
    {
        const bool branch_taken_0x25637c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25637c) {
            ctx->pc = 0x256380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25637Cu;
            // 0x256380: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25639Cu;
            goto label_25639c;
        }
    }
    ctx->pc = 0x256384u;
label_256384:
    // 0x256384: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x256384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_256388:
    // 0x256388: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x256388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_25638c:
    // 0x25638c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_256390:
    if (ctx->pc == 0x256390u) {
        ctx->pc = 0x256390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25638Cu;
        // 0x256390: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256394u;
        goto label_256394;
    }
    ctx->pc = 0x25638Cu;
    {
        const bool branch_taken_0x25638c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25638Cu;
        // 0x256390: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25638c) {
            ctx->pc = 0x256378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256378;
        }
    }
    ctx->pc = 0x256394u;
label_256394:
    // 0x256394: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x256394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_256398:
    // 0x256398: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x256398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_25639c:
    // 0x25639c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25639cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2563a0:
    // 0x2563a0: 0xc073fde  jal         func_1CFF78
label_2563a4:
    if (ctx->pc == 0x2563A4u) {
        ctx->pc = 0x2563A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563A0u;
        // 0x2563a4: 0x24a56148  addiu       $a1, $a1, 0x6148 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2563A8u;
        goto label_2563a8;
    }
    ctx->pc = 0x2563A0u;
    SET_GPR_U32(ctx, 31, 0x2563A8u);
    ctx->pc = 0x2563A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2563A0u;
    // 0x2563a4: 0x24a56148  addiu       $a1, $a1, 0x6148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x2563A0u, 0x2563A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2563A8u;
label_2563a8:
    // 0x2563a8: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x2563a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_2563ac:
    // 0x2563ac: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2563acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2563b0:
    // 0x2563b0: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x2563b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
label_2563b4:
    // 0x2563b4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2563b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2563b8:
    // 0x2563b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2563b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2563bc:
    // 0x2563bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2563bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2563c0:
    // 0x2563c0: 0xfe021020  sd          $v0, 0x1020($s0)
    ctx->pc = 0x2563c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
label_2563c4:
    // 0x2563c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2563c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2563c8:
    // 0x2563c8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2563c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2563cc:
    // 0x2563cc: 0x3e00008  jr          $ra
label_2563d0:
    if (ctx->pc == 0x2563D0u) {
        ctx->pc = 0x2563D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563CCu;
        // 0x2563d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2563D4u;
        goto label_2563d4;
    }
    ctx->pc = 0x2563CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2563D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563CCu;
        // 0x2563d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2563CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2563D4u;
label_2563d4:
    // 0x2563d4: 0x0  nop
    ctx->pc = 0x2563d4u;
    // NOP
    ctx->pc = 0x2563d8u;
}
