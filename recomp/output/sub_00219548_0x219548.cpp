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

// Function: sub_00219548
// Address: 0x219548 - 0x2196f8
void sub_00219548_0x219548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219548_0x219548");
#endif

    switch (ctx->pc) {
        case 0x21956cu: goto label_21956c;
        case 0x21957cu: goto label_21957c;
        case 0x219590u: goto label_219590;
        case 0x21959cu: goto label_21959c;
        case 0x2195acu: goto label_2195ac;
        case 0x2195bcu: goto label_2195bc;
        case 0x2195d0u: goto label_2195d0;
        case 0x2195dcu: goto label_2195dc;
        case 0x2195e8u: goto label_2195e8;
        case 0x2195f4u: goto label_2195f4;
        case 0x219610u: goto label_219610;
        case 0x219628u: goto label_219628;
        case 0x219638u: goto label_219638;
        case 0x21964cu: goto label_21964c;
        case 0x219654u: goto label_219654;
        case 0x219670u: goto label_219670;
        case 0x21967cu: goto label_21967c;
        case 0x219688u: goto label_219688;
        case 0x219694u: goto label_219694;
        case 0x2196b0u: goto label_2196b0;
        case 0x2196b8u: goto label_2196b8;
        case 0x2196c0u: goto label_2196c0;
        case 0x2196ccu: goto label_2196cc;
        case 0x2196d8u: goto label_2196d8;
        default: break;
    }

    ctx->pc = 0x219548u;

    // 0x219548: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x219548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x21954c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x21954cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x219550: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x219550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x219554: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x219554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x219558: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x219558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x21955c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x21955cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x219560: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x219560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x219564: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x219564u;
    SET_GPR_U32(ctx, 31, 0x21956Cu);
    ctx->pc = 0x219568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219564u;
    // 0x219568: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x219564u, 0x21956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21956Cu;
label_21956c:
    // 0x21956c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21956cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x219570: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x219570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x219574: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x219574u;
    SET_GPR_U32(ctx, 31, 0x21957Cu);
    ctx->pc = 0x219578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219574u;
    // 0x219578: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x219574u, 0x21957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21957Cu;
label_21957c:
    // 0x21957c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x21957cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x219580: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x219580u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x219584: 0x2472fe40  addiu       $s2, $v1, -0x1C0
    ctx->pc = 0x219584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
    // 0x219588: 0xc09eb04  jal         func_27AC10
    ctx->pc = 0x219588u;
    SET_GPR_U32(ctx, 31, 0x219590u);
    ctx->pc = 0x21958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219588u;
    // 0x21958c: 0x26103570  addiu       $s0, $s0, 0x3570 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x219588u, 0x219590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219590u;
label_219590:
    // 0x219590: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219594: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x219594u;
    SET_GPR_U32(ctx, 31, 0x21959Cu);
    ctx->pc = 0x219598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219594u;
    // 0x219598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x219594u, 0x21959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21959Cu;
label_21959c:
    // 0x21959c: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x21959cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2195a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2195a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2195a4: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x2195A4u;
    SET_GPR_U32(ctx, 31, 0x2195ACu);
    ctx->pc = 0x2195A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195A4u;
    // 0x2195a8: 0x24a5ee60  addiu       $a1, $a1, -0x11A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x2195A4u, 0x2195ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195ACu;
label_2195ac:
    // 0x2195ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2195acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2195b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2195b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2195b4: 0xc09dd98  jal         func_277660
    ctx->pc = 0x2195B4u;
    SET_GPR_U32(ctx, 31, 0x2195BCu);
    ctx->pc = 0x2195B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195B4u;
    // 0x2195b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x2195B4u, 0x2195BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195BCu;
label_2195bc:
    // 0x2195bc: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2195BCu;
    {
        const bool branch_taken_0x2195bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2195C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195BCu;
        // 0x2195c0: 0x3c10004a  lui         $s0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195bc) {
            ctx->pc = 0x219688u;
            goto label_219688;
        }
    }
    ctx->pc = 0x2195C4u;
    // 0x2195c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2195c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2195c8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2195C8u;
    SET_GPR_U32(ctx, 31, 0x2195D0u);
    ctx->pc = 0x2195CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195C8u;
    // 0x2195cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2195C8u, 0x2195D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195D0u;
label_2195d0:
    // 0x2195d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2195d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2195d4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2195D4u;
    SET_GPR_U32(ctx, 31, 0x2195DCu);
    ctx->pc = 0x2195D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195D4u;
    // 0x2195d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2195D4u, 0x2195DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195DCu;
label_2195dc:
    // 0x2195dc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2195DCu;
    {
        const bool branch_taken_0x2195dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2195E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195DCu;
        // 0x2195e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195dc) {
            ctx->pc = 0x2196DCu;
            goto label_2196dc;
        }
    }
    ctx->pc = 0x2195E4u;
    // 0x2195e4: 0x0  nop
    ctx->pc = 0x2195e4u;
    // NOP
label_2195e8:
    // 0x2195e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2195e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2195ec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2195ECu;
    SET_GPR_U32(ctx, 31, 0x2195F4u);
    ctx->pc = 0x2195F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195ECu;
    // 0x2195f0: 0x24a516a0  addiu       $a1, $a1, 0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2195ECu, 0x2195F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195F4u;
label_2195f4:
    // 0x2195f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2195f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2195f8: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2195F8u;
    {
        const bool branch_taken_0x2195f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2195FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195F8u;
        // 0x2195fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195f8) {
            ctx->pc = 0x21968Cu;
            goto label_21968c;
        }
    }
    ctx->pc = 0x219600u;
    // 0x219600: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x219600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x219604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x219604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219608: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x219608u;
    SET_GPR_U32(ctx, 31, 0x219610u);
    ctx->pc = 0x21960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219608u;
    // 0x21960c: 0x24a516a8  addiu       $a1, $a1, 0x16A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x219608u, 0x219610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219610u;
label_219610:
    // 0x219610: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x219610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x219614: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x219614u;
    {
        const bool branch_taken_0x219614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219614u;
        // 0x219618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219614) {
            ctx->pc = 0x21968Cu;
            goto label_21968c;
        }
    }
    ctx->pc = 0x21961Cu;
    // 0x21961c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21961cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219620: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x219620u;
    SET_GPR_U32(ctx, 31, 0x219628u);
    ctx->pc = 0x219624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219620u;
    // 0x219624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x219620u, 0x219628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219628u;
label_219628:
    // 0x219628: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x219628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21962c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21962cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219630: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x219630u;
    SET_GPR_U32(ctx, 31, 0x219638u);
    ctx->pc = 0x219634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219630u;
    // 0x219634: 0x24a516e0  addiu       $a1, $a1, 0x16E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x219630u, 0x219638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219638u;
label_219638:
    // 0x219638: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x219638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21963c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21963Cu;
    {
        const bool branch_taken_0x21963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21963Cu;
        // 0x219640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21963c) {
            ctx->pc = 0x21965Cu;
            goto label_21965c;
        }
    }
    ctx->pc = 0x219644u;
    // 0x219644: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x219644u;
    SET_GPR_U32(ctx, 31, 0x21964Cu);
    ctx->pc = 0x219648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219644u;
    // 0x219648: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x219644u, 0x21964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21964Cu;
label_21964c:
    // 0x21964c: 0xc083200  jal         func_20C800
    ctx->pc = 0x21964Cu;
    SET_GPR_U32(ctx, 31, 0x219654u);
    ctx->pc = 0x219650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21964Cu;
    // 0x219650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C800u, 0x21964Cu, 0x219654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219654u;
label_219654:
    // 0x219654: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x219654u;
    {
        const bool branch_taken_0x219654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219654u;
        // 0x219658: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219654) {
            ctx->pc = 0x219670u;
            goto label_219670;
        }
    }
    ctx->pc = 0x21965Cu;
label_21965c:
    // 0x21965c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21965cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x219660: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x219660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219664: 0x24a516e8  addiu       $a1, $a1, 0x16E8
    ctx->pc = 0x219664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5864));
    // 0x219668: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x219668u;
    SET_GPR_U32(ctx, 31, 0x219670u);
    ctx->pc = 0x21966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219668u;
    // 0x21966c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x219668u, 0x219670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219670u;
label_219670:
    // 0x219670: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x219670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x219674: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x219674u;
    SET_GPR_U32(ctx, 31, 0x21967Cu);
    ctx->pc = 0x219678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219674u;
    // 0x219678: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x219674u, 0x21967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21967Cu;
label_21967c:
    // 0x21967c: 0x260434c0  addiu       $a0, $s0, 0x34C0
    ctx->pc = 0x21967cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13504));
    // 0x219680: 0xc0f7834  jal         func_3DE0D0
    ctx->pc = 0x219680u;
    SET_GPR_U32(ctx, 31, 0x219688u);
    ctx->pc = 0x219684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219680u;
    // 0x219684: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0D0u, 0x219680u, 0x219688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219688u;
label_219688:
    // 0x219688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21968c:
    // 0x21968c: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x21968Cu;
    SET_GPR_U32(ctx, 31, 0x219694u);
    ctx->pc = 0x219690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21968Cu;
    // 0x219690: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x21968Cu, 0x219694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219694u;
label_219694:
    // 0x219694: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x219694u;
    {
        const bool branch_taken_0x219694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219694u;
        // 0x219698: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219694) {
            ctx->pc = 0x2195E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2195e8;
        }
    }
    ctx->pc = 0x21969Cu;
    // 0x21969c: 0x8e0234c0  lw          $v0, 0x34C0($s0)
    ctx->pc = 0x21969cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13504)));
    // 0x2196a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2196A0u;
    {
        const bool branch_taken_0x2196a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2196a0) {
            ctx->pc = 0x2196B0u;
            goto label_2196b0;
        }
    }
    ctx->pc = 0x2196A8u;
    // 0x2196a8: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x2196A8u;
    SET_GPR_U32(ctx, 31, 0x2196B0u);
    ctx->pc = 0x2196ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196A8u;
    // 0x2196ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x2196A8u, 0x2196B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196B0u;
label_2196b0:
    // 0x2196b0: 0xc09dd92  jal         func_277648
    ctx->pc = 0x2196B0u;
    SET_GPR_U32(ctx, 31, 0x2196B8u);
    ctx->pc = 0x2196B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196B0u;
    // 0x2196b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277648u, 0x2196B0u, 0x2196B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196B8u;
label_2196b8:
    // 0x2196b8: 0xc0864f0  jal         func_2193C0
    ctx->pc = 0x2196B8u;
    SET_GPR_U32(ctx, 31, 0x2196C0u);
    ctx->pc = 0x2196BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196B8u;
    // 0x2196bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2193C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2193C0u, 0x2196B8u, 0x2196C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196C0u;
label_2196c0:
    // 0x2196c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2196c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196c4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2196C4u;
    SET_GPR_U32(ctx, 31, 0x2196CCu);
    ctx->pc = 0x2196C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196C4u;
    // 0x2196c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2196C4u, 0x2196CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196CCu;
label_2196cc:
    // 0x2196cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2196ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196d0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2196D0u;
    SET_GPR_U32(ctx, 31, 0x2196D8u);
    ctx->pc = 0x2196D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196D0u;
    // 0x2196d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2196D0u, 0x2196D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196D8u;
label_2196d8:
    // 0x2196d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2196d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2196dc:
    // 0x2196dc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2196dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2196e0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2196e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2196e4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2196e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2196e8: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2196e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2196ec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2196ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2196f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2196F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2196F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196F0u;
        // 0x2196f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2196F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2196F8u;
}
